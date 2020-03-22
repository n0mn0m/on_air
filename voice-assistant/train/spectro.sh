#!/bin/bash

# At the time this was created TF didn't support Python 3.8
# setup your own venv and install TF. Note the TF micro
# demo code uses TF 1.x demo commands so even though micro
# is in 2.x you will need to use TF 1.15

source $HOME/.virtualenvs/37/bin/activate && \
python $HOME/projects/tensorflow/tensorflow/examples/speech_commands/wav_to_features.py \
--input_wav=$HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/hi/hi225.wav \
--output_c_file=$HOME/projects/on-air/voice-assistant/train/model/hi_features_data.cc \
--window_stride=20 \
--preprocess=average \
--quantize=1 && \
python $HOME/projects/tensorflow/tensorflow/examples/speech_commands/wav_to_features.py \
--input_wav=$HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/smalltalk/smalltalk498.wav \
--output_c_file=$HOME/projects/on-air/voice-assistant/train/model/smalltalk_features_data.cc \
--window_stride=20 \
--preprocess=average \
--quantize=1 && \
python $HOME/projects/tensorflow/tensorflow/examples/speech_commands/wav_to_features.py \
--input_wav=$HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/on/370844f7_nohash_1.wav \
--output_c_file=$HOME/projects/on-air/voice-assistant/train/model/on_features_data.cc \
--window_stride=20 \
--preprocess=average \
--quantize=1 && \
python $HOME/projects/tensorflow/tensorflow/examples/speech_commands/wav_to_features.py \
--input_wav=$HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/off/6a014b29_nohash_0.wav \
--output_c_file=$HOME/projects/on-air/voice-assistant/train/model/off_features_data.cc \
--window_stride=20 \
--preprocess=average \
--quantize=1
