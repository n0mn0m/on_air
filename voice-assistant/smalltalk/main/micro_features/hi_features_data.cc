#include "hi_features_data.h"

/* File automatically created by
 * tensorflow/examples/speech_commands/wav_to_features.py \
 * --sample_rate=16000 \
 * --clip_duration_ms=1000 \
 * --window_size_ms=30 \
 * --window_stride_ms=20 \
 * --feature_bin_count=40 \
 * --quantize=1 \
 * --preprocess="average" \
 * --input_wav="/Users/n0mn0m/projects/on-air/voice-assistant/train/tmp/labeled_words/tf/hi/hi225.wav" \
 * --output_c_file="/Users/n0mn0m/projects/on-air/voice-assistant/train/model/hi_features_data.cc" \
 */

const int g_hi225_width = 43;
const int g_hi225_height = 49;
const unsigned char g_hi225_data[] = {
  0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 1, 2, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 2, 1, 1, 19, 
  4, 4, 12, 1, 0, 0, 0, 0, 1, 1, 
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 
  2, 3, 36, 8, 6, 20, 2, 0, 0, 0, 
  0, 1, 2, 0, 0, 0, 1, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 1, 4, 3, 3, 53, 13, 11, 26, 1, 
  0, 0, 0, 0, 2, 2, 0, 0, 0, 2, 
  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 1, 6, 4, 5, 74, 22, 
  17, 38, 2, 0, 0, 0, 0, 2, 4, 0, 
  0, 1, 3, 2, 1, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 1, 10, 7, 
  10, 111, 25, 22, 60, 4, 0, 0, 0, 0, 
  3, 5, 0, 0, 1, 5, 3, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  2, 13, 9, 19, 189, 22, 21, 91, 7, 0, 
  0, 0, 0, 2, 8, 0, 0, 1, 8, 4, 
  2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 3, 19, 15, 25, 219, 41, 35, 
  131, 12, 0, 0, 0, 0, 4, 11, 0, 0, 
  2, 12, 6, 4, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 3, 18, 13, 25, 
  220, 33, 33, 124, 11, 0, 0, 0, 0, 4, 
  9, 0, 0, 2, 12, 6, 2, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
  13, 9, 22, 192, 24, 29, 86, 7, 0, 0, 
  0, 0, 3, 7, 0, 0, 1, 9, 4, 2, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 2, 14, 11, 20, 169, 30, 26, 95, 
  9, 0, 0, 0, 0, 4, 7, 0, 0, 1, 
  9, 5, 2, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 2, 12, 9, 19, 166, 
  33, 23, 83, 11, 0, 0, 0, 0, 3, 6, 
  0, 0, 1, 8, 4, 2, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 3, 15, 
  12, 18, 167, 51, 22, 111, 18, 0, 0, 0, 
  0, 5, 7, 0, 0, 1, 10, 7, 3, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 3, 15, 11, 15, 162, 56, 19, 109, 19, 
  0, 0, 0, 0, 7, 5, 0, 0, 1, 11, 
  6, 2, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 2, 9, 9, 7, 141, 27, 
  15, 72, 15, 0, 0, 0, 0, 4, 4, 0, 
  0, 1, 8, 4, 2, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 2, 11, 9, 
  7, 130, 38, 11, 78, 18, 0, 0, 0, 0, 
  5, 4, 0, 0, 1, 7, 5, 2, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  2, 11, 10, 7, 147, 42, 14, 83, 21, 0, 
  0, 0, 0, 6, 4, 0, 0, 0, 8, 6, 
  2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 2, 14, 11, 9, 148, 52, 13, 
  97, 27, 0, 0, 0, 0, 7, 4, 0, 0, 
  1, 10, 7, 3, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 2, 8, 6, 4, 
  103, 31, 6, 57, 29, 0, 0, 0, 0, 5, 
  2, 0, 0, 0, 6, 5, 2, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 
  7, 3, 3, 85, 35, 3, 59, 37, 0, 0, 
  0, 2, 5, 0, 0, 0, 0, 6, 4, 2, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 2, 8, 3, 2, 86, 38, 3, 51, 
  62, 1, 0, 0, 5, 5, 0, 0, 0, 0, 
  6, 5, 2, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 1, 5, 1, 1, 51, 
  26, 2, 22, 59, 4, 0, 0, 6, 1, 0, 
  0, 0, 0, 4, 3, 2, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 
  1, 0, 48, 23, 2, 18, 71, 7, 0, 2, 
  6, 0, 0, 0, 0, 0, 4, 4, 2, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 1, 4, 1, 2, 43, 7, 1, 5, 44, 
  8, 0, 1, 6, 1, 0, 0, 0, 0, 2, 
  2, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 2, 5, 2, 7, 61, 2, 
  0, 3, 39, 24, 0, 0, 9, 3, 0, 0, 
  0, 0, 3, 1, 1, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 1, 4, 2, 
  19, 39, 1, 0, 1, 21, 22, 1, 0, 7, 
  4, 0, 0, 0, 0, 2, 1, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  1, 4, 3, 40, 18, 0, 0, 0, 7, 14, 
  2, 0, 3, 5, 0, 0, 0, 0, 1, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 2, 8, 7, 49, 13, 0, 0, 
  0, 8, 22, 3, 0, 5, 11, 0, 0, 0, 
  0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 2, 6, 6, 39, 
  3, 0, 0, 0, 5, 15, 2, 0, 4, 7, 
  0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 
  4, 4, 32, 0, 0, 0, 0, 2, 8, 1, 
  0, 2, 4, 0, 0, 0, 0, 1, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 2, 5, 10, 26, 0, 0, 0, 0, 
  1, 8, 2, 0, 2, 4, 0, 0, 0, 0, 
  1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 2, 6, 16, 17, 0, 
  0, 0, 0, 1, 8, 2, 0, 2, 4, 0, 
  0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 2, 7, 
  20, 12, 0, 0, 0, 0, 1, 7, 3, 0, 
  2, 4, 0, 0, 0, 0, 1, 0, 1, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 1, 3, 10, 3, 0, 0, 0, 0, 0, 
  2, 1, 0, 1, 1, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  0, 0, 0, 0, 0, 0, 0, 
};
