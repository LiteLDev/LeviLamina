#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActorVersion.h"
#include "mc/world/level/block/actor/component/IBlockActorComponent.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class RandomizableContainerBlockActorComponent : public ::IBlockActorComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void save(::CompoundTag&) const /*override*/;

    virtual void load(::CompoundTag const&, ::BlockActorVersion) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $save(::CompoundTag&) const;

    MCFOLD void $load(::CompoundTag const&, ::BlockActorVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
