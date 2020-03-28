#
# Main component of TF Micro project 'micro_speech'.
#

idf_component_register(
    SRCS esp/main.cc main_functions.cc esp/audio_provider.cc feature_provider.cc micro_features/off_features_data.cc micro_features/on_features_data.cc micro_features/visual_features_data.cc micro_features/tiny_conv_micro_features_model_data.cc recognize_commands.cc micro_features/micro_features_generator.cc micro_features/micro_model_settings.cc esp/ringbuf.c http/toggle_status.cc
    INCLUDE_DIRS ""
    EMBED_TXTFILES http/unexpectedeof_casa_root_cert.pem)
