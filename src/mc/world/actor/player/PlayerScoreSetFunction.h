#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PlayerScoreSetFunction : unsigned char {
	Set = 0x0,
	Add = 0x1,
	Subtract = 0x2,
};