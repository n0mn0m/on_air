#!/bin/bash

# At the time this was created TF didn't support Python 3.8
# setup your own venv and install TF. Note the TF micro
# demo code uses TF 1.x demo commands so even though micro
# is in 2.x you will need to use TF 1.15

source $HOME/.virtualsenvs/37/bin/activate && \
toco --graph_def_file=$HOME/projects/on-air/voice-assistant/train/model/tiny_conv.pb \
--output_file=$HOME/projects/on-air/voice-assistant/train/model/tiny_conv.tflite \
--input_shapes=1,98,40,1 \
--input_arrays=Reshape_2 \
--output_arrays='labels_softmax' \
--inference_type=QUANTIZED_UINT8 \
--mean_values=0 \
--std_dev_values=9.8077
