#!/bin/bash

wget download.tensorflow.org/data/speech_commands_v0.02.tar.gz
mkdir -p $HOME/projects/on-air/voice-assistant/tmp/labeled_words/tf
tar -xzf speech_commands_v0.02.tar.gz -C $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf
rm $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/validation_list.txt
rm $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/testing_list.txt
rm $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/LICENSE
rm $HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/README.md
rm speech_commands_v0.02.tar.gz
