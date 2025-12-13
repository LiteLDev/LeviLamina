#include "mc/util/VarIntDataInput.h"

Bedrock::Result<std::string> VarIntDataInput::readLongStringResult() { return readStringResult(); }
