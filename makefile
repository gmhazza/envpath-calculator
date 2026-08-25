CXX       := g++
CXX_FLAGS := -std=c++20

SRC_DIR   := src
BIN_DIR   := bin

# Finds src/add.cpp, src/sub.cpp, src/pow.cpp, etc.
SRCS      := $(wildcard $(SRC_DIR)/*.cpp)

# Maps to bin/add.exe, bin/sub.exe, bin/pow.exe, etc.
TARGETS   := $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.exe, $(SRCS))

# Builds all executables by default
all: $(TARGETS)

# Pattern rule: Compiles each src/*.cpp directly into its own bin/*.exe
$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp | $(BIN_DIR)
	$(CXX) $(CXX_FLAGS) $< -o $@

# Automatically creates the bin directory if it doesn't exist
$(BIN_DIR):
	if not exist "$@" mkdir "$@"

clean:
	if exist $(BIN_DIR) rmdir /S /Q $(BIN_DIR)

.PHONY: all clean