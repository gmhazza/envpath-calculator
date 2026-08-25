CXX       := g++
CXX_FLAGS := -std=c++20

SRC_DIR   := src
BIN_DIR   := bin

SRCS      := $(wildcard $(SRC_DIR)/*.cpp)

TARGETS   := $(patsubst $(SRC_DIR)/%.cpp, $(BIN_DIR)/%.exe, $(SRCS))


all: $(TARGETS)

$(BIN_DIR)/%.exe: $(SRC_DIR)/%.cpp | $(BIN_DIR)
	$(CXX) $(CXX_FLAGS) $< -o $@

$(BIN_DIR):
	if not exist "$@" mkdir "$@"

clean:
	if exist $(BIN_DIR) rmdir /S /Q $(BIN_DIR)