#include "mc/util/VarIntDataOutput.h"

void VarIntDataOutput::writeLongString(std::string_view v) { writeString(v); }
