#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/TagsComponent.h"
#include "mc/util/IDType.h"
#include "mc/world/level/biome/components/BiomeComponentBase.h"

// auto generated forward declare list
// clang-format off
struct BiomeTagSetIDType;
// clang-format on

struct BiomeTagComponent : public ::BiomeComponentBase, public ::TagsComponent<::IDType<::BiomeTagSetIDType>> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeTagComponent() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
