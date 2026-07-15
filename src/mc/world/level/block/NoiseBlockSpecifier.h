#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

struct NoiseBlockSpecifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>            mNoise;
    ::ll::TypedStorage<4, 4, float>                     mThreshold;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRange;
    ::ll::TypedStorage<8, 8, ::Block const*>            mBlock;
    // NOLINTEND
};
