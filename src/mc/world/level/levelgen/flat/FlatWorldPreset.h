#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/BiomeIdType.h"
#include "mc/world/level/levelgen/flat/FlatWorldPresetID.h"

// auto generated forward declare list
// clang-format off
struct FlatWorldLayer;
namespace Json { class Value; }
// clang-format on

struct FlatWorldPreset {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::FlatWorldPresetID>              id;
    ::ll::TypedStorage<2, 2, ::BiomeIdType>                    biome;
    ::ll::TypedStorage<8, 24, ::std::vector<::FlatWorldLayer>> layers;
    // NOLINTEND

public:
    // prevent constructor by default
    FlatWorldPreset& operator=(FlatWorldPreset const&);
    FlatWorldPreset(FlatWorldPreset const&);
    FlatWorldPreset();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FlatWorldPreset(::FlatWorldPreset&&);

    MCAPI ::Json::Value toJson() const;

    MCAPI ~FlatWorldPreset();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::FlatWorldPreset&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
