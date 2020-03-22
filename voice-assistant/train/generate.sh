#!/bin/bash
# For the various loops the variable stored in the index variable
# is used to attenuate the voices being created from espeak.

mkdir -p $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/orig
mkdir -p $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/pad
mkdir -p $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf

lastwordid=""

cat words | while read word wordid phoneme

do
	echo $word
	mkdir -p $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/orig/$word
	mkdir -p $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/pad/$word
	mkdir -p $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/$word

	if [[ $word != $lastword ]]; then
		versionid=0
	fi

	lastword=$word

	# Generate voices with various dialects
	for i in english english-north en-scottish english_rp english_wmids english-us en-westindies
	do 
	    # Loop changing the pitch in each iteration
	    for (( COUNTER=0; COUNTER<=100; COUNTER+=3 ));
		do
		    # Change the speed of words per minute
		    for j in 80 100 120 140 160; do 
			    echo $versionid "$phoneme" $i $j $COUNTER
			    echo "$phoneme" | espeak -p $COUNTER -s $j -v $i -w $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/orig/$word/$word$versionid.wav
			    # pad and add silence
			    sox $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/orig/$word/$word$versionid.wav $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/pad/$word/$word$versionid.wav silence 1 0.1 0.1% reverse silence 1 0.1 0.1% reverse
			    # Set sox options for Tensorflow
			    sox $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/pad/$word/$word$versionid.wav -b 16 --endian little $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/$word/$word$versionid.wav rate 16k
			    ((versionid++))
		    done
		done
	done
done




