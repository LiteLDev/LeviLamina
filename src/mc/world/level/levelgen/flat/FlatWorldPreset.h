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
    // member functions
    // NOLINTBEGIN
    MCFOLD_C ushort getBiomeId() const;

    MCAPI ::Json::Value toJson() const;

    MCAPI ~FlatWorldPreset();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
