#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/WorldVersion.h"

// auto generated forward declare list
// clang-format off
class LevelData;
struct BlockLayer;
namespace Json { class Value; }
// clang-format on

class FlatWorldGeneratorOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                          mEncodingVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockLayer>> mBlockLayers;
    ::ll::TypedStorage<4, 4, int>                          mBiomeId;
    ::ll::TypedStorage<8, 16, ::Json::Value>               mStructureOptions;
    ::ll::TypedStorage<1, 1, ::WorldVersion>               mWorldVersion;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldGeneratorOptions& operator=(FlatWorldGeneratorOptions const&);
    FlatWorldGeneratorOptions(FlatWorldGeneratorOptions const&);
    FlatWorldGeneratorOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatWorldGeneratorOptions(::Json::Value const& root, ::LevelData const& levelData);

    MCAPI bool _load(::Json::Value const& root, ::LevelData const& levelData);

    MCAPI ~FlatWorldGeneratorOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Json::Value getLayers(::LevelData const& levelData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Json::Value const& root, ::LevelData const& levelData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
