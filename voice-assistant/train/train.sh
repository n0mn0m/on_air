#!/bin/bash

# At the time this was created TF didn't support Python 3.8
# setup your own venv and install TF. Note the TF micro
# demo code uses TF 1.x demo commands so even though micro
# is in 2.x you will need to use TF 1.15

source $HOME/.virtualsenvs/37/bin/activate && \
python $HOME/projects/tensorflow/tensorflow/examples/speech_commands/train.py \
--model_architecture=tiny_conv \
--preprocess=micro \
--wanted_words="hi,on" \
--quantize=1 \
--verbosity=INFO \
--how_many_training_steps="15000,3000" \
--data_dir=$HOME/projects/on-air/voice-assistant/train/tmp/labeled_words/tf \
--summaries_dir=$HOME/projects/on-air/voice-assistant/train/model/retrain_logs \
--summaries_dir=$HOME/projects/on-air/voice-assistant/train/model/speech_commands_train
