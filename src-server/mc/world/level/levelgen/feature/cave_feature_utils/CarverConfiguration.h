#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockType;
class Random;
// clang-format on

namespace CaveFeatureUtils {

struct CarverConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mIs_1_16_terrainGen;
    ::ll::TypedStorage<4, 4, int> mMinHeight;
    ::ll::TypedStorage<8, 8, float(*) (::Random&)> mGetTunnelThickness;
    ::ll::TypedStorage<8, 8, int(*) (::Random&)> mGetDistance;
    ::ll::TypedStorage<8, 8, bool(*) (::Block const&, ::Block const&)> mIsDiggable;
    ::ll::TypedStorage<8, 8, bool(*) (::BlockType const&)> mIsSurface;
    ::ll::TypedStorage<8, 8, int(*) (::Random&, int const)> mGetRandomY;
    // NOLINTEND

};

}
