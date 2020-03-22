#!/bin/bash

mkdir -p tmp/model
xxd -i $HOME/projects/on-air/voice-assistant/train/model/tiny_conv.tflite > $HOME/projects/on-air/voice-assistant/train/model/tiny_conv_micro_features_model_data.cc
