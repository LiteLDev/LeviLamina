#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockSource;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class MinecartHopper : public ::Minecart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos> mLastPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecartHopper();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void destroy(::ActorDamageSource const& dropMinecartComponents, bool) /*override*/;

    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;

    virtual ::MinecartType getType() /*override*/;

    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    virtual int getDefaultDisplayOffset() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecartHopper(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $destroy(::ActorDamageSource const& dropMinecartComponents, bool);

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
