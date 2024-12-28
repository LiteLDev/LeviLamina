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
    // prevent constructor by default
    BiomeTagComponent& operator=(BiomeTagComponent const&);
    BiomeTagComponent(BiomeTagComponent const&);
    BiomeTagComponent();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BiomeTagComponent() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
