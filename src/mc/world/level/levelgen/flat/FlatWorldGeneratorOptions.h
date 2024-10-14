#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"
#include "mc/world/level/WorldVersion.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Block;

class FlatWorldGeneratorOptions {
public:
    struct Layer {
        Block const* mBlock;
        int          mNumLayers;
    };

    int                mEncodingVersion;  // this+0x0
    std::vector<Layer> mBlockLayers;      // this+0x8
    int                mBiomeId;          // this+0x20
    Json::Value        mStructureOptions; // this+0x28
    WorldVersion       mWorldVersion;     // this+0x38

    FlatWorldGeneratorOptions() = default;

public:
    // prevent constructor by default
    FlatWorldGeneratorOptions& operator=(FlatWorldGeneratorOptions const&);
    FlatWorldGeneratorOptions(FlatWorldGeneratorOptions const&);

public:
    // NOLINTBEGIN
    MCAPI ~FlatWorldGeneratorOptions();

    MCAPI static class Json::Value getLayers(class LevelData const& levelData);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _load(class Json::Value const& root, class LevelData const& levelData);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
