# Getting Started

ESP32 application that uses FreeRTOS to run Tensorflow listening for a series of keywords and signalling and end point when they are heard.

Training:
python projects/tensorflow/tensorflow/examples/speech_commands/train.py --model_architecture=tiny_conv --preprocess=micro --wanted_words="hi,smalltalk,on,off" --quantize=1 --verbosity=INFO --how_many_training_steps="15000,3000" --data_dir=/Users/n0mn0m/projects/speech_data

Freeze:
 python projects/tensorflow/tensorflow/examples/speech_commands/freeze.py --model_architecture=tiny_conv --preprocess=micro --wanted_words="hi,smalltalk,on,off" --quantize=1 --output_file=/Users/n0mn0m/projects/on-air/voice-assistant/tf/tiny_conv.pb --start_checkpoint=/tmp/speech_commands_train/tiny_conv.ckpt-18000

Quantize:
toco --graph_def_file=/Users/n0mn0m/projects/on-air/voice-assistant/tf/tiny_conv.pb --output_file=/Users/n0mn0m/projects/on-air/voice-assistant/tf/tiny_conv.tflite --input_shapes=1,98,40,1 --input_arrays=Reshape_2 --output_arrays='labels_softmax' --inference_type=QUANTIZED_UINT8 --mean_values=0 --std_dev_values=9.8077

Hex:
xxd -i /Users/n0mn0m/projects/on-air/voice-assistant/tf/tiny_conv.tflite > /Users/n0mn0m/projects/on-air/voice-assistant/tf/tiny_conv_micro_features_model_data.cc

Spectro:
python /Users/n0mn0m/projects/tensorflow/tensorflow/examples/speech_commands/wav_to_features.py --input_wav=/Users/n0mn0m/projects/speech_data/hi/tf_2225.wav --output_c_file=/Users/n0mn0m/projects/tensorflow/tensorflow/lite/micro/tools/make/gen/esp_xtensa-esp32/prj/micro_speech/esp-idf/main/micro_features/hi_features_data.cc --window_stride=20 --preprocess=average --quantize=1
