
#
# Main component of TF Micro project 'micro_speech'.
#

idf_component_register(
    SRCS esp/main.cc main_functions.cc esp/audio_provider.cc feature_provider.cc micro_features/on_micro_features_data.cc micro_features/off_micro_features_data.cc micro_features/hi_micro_features_data.cc micro_features/smalltalk_micro_features_data.cc micro_features/tiny_conv_micro_features_model_data.cc recognize_commands.cc command_responder.cc micro_features/micro_features_generator.cc micro_features/micro_model_settings.cc esp/ringbuf.c
    INCLUDE_DIRS "")
