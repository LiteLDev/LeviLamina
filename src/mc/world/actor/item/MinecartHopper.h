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
    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents) /*override*/;

    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;

    virtual ::MinecartType getType() /*override*/;

    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    virtual int getDefaultDisplayOffset() const /*override*/;

    virtual ~MinecartHopper() /*override*/ = default;
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
