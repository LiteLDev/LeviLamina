#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
struct BiomeReplacement;
// clang-format on

struct ReplaceBiomesComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeReplacement>> mBiomeReplacements;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReplaceBiomesComponent() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
