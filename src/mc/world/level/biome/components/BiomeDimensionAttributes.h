#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

struct BiomeDimensionAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType> mDimensionType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeDimensionAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
