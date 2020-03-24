#!/bin/bash

# At the time this was created TF didn't support Python 3.8
# setup your own venv and install TF. Note the TF micro
# demo code uses TF 1.x demo commands so even though micro
# is in 2.x you will need to use TF 1.15

source $HOME/.virtualenvs/37/bin/activate && \
python $HOME/projects/tensorflow/tensorflow/examples/speech_commands/freeze.py \
--model_architecture=tiny_conv \
--window_stride=20 \
--preprocess=micro \
--wanted_words="visual,on,off" \
--quantize=1 \
--output_file=$HOME/projects/on-air/voice-assistant/train/model/tiny_conv.pb \
--start_checkpoint=$HOME/projects/on-air/voice-assistant/train/model/speech_commands_train/tiny_conv.ckpt-18000
