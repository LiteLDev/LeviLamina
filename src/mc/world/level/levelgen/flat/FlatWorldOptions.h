#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/biome/BiomeIdType.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct BlockLayer;
// clang-format on

class FlatWorldOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mEncodingVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockLayer>> mBlockLayers;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                mBiomeId;
    ::ll::TypedStorage<8, 16, ::Json::Value>               mStructureOptions;
    ::ll::TypedStorage<1, 1, ::WorldVersion>               mWorldVersion;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Json::Value getLayers(::LevelData const& levelData);
    // NOLINTEND
};
