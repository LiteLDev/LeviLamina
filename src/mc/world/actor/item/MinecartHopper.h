#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class Block;
class BlockSource;
// clang-format on

class MinecartHopper : public ::Minecart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkfdb702;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartHopper& operator=(MinecartHopper const&);
    MinecartHopper(MinecartHopper const&);
    MinecartHopper();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 138
    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents) /*override*/;

    // vIndex: 142
    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;

    // vIndex: 139
    virtual ::MinecartType getType() /*override*/;

    // vIndex: 140
    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    // vIndex: 141
    virtual int getDefaultDisplayOffset() const /*override*/;

    // vIndex: 8
    virtual ~MinecartHopper() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);

    MCFOLD void $applyNaturalSlowdown(::BlockSource& region);

    MCFOLD ::MinecartType $getType();

    MCAPI ::Block const* $getDefaultDisplayBlock() const;

    MCFOLD int $getDefaultDisplayOffset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
