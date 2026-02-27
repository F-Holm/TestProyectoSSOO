#!/usr/bin/env bash

BASE_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )

HEADER_FILES="$BASE_DIR/src/*/*.h"
SOURCE_FILES="$BASE_DIR/src/*/*.c"
TEST_FILES="$BASE_DIR/tests/*.c"

clang-format -i -style=Google $HEADER_FILES $SOURCE_FILES $TEST_FILES 2>/dev/null || true
