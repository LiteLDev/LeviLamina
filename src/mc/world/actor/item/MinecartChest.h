#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockSource;
class EntityContext;
struct ActorDefinitionIdentifier;
// clang-format on

class MinecartChest : public ::Minecart {
public:
    // prevent constructor by default
    MinecartChest& operator=(MinecartChest const&);
    MinecartChest(MinecartChest const&);
    MinecartChest();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 143
    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents) /*override*/;

    // vIndex: 147
    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;

    // vIndex: 144
    virtual ::MinecartType getType() /*override*/;

    // vIndex: 145
    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    // vIndex: 8
    virtual ~MinecartChest() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecartChest(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& ITEMS_SIZE();
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);

    MCAPI void $applyNaturalSlowdown(::BlockSource& region);

    MCAPI ::MinecartType $getType();

    MCAPI ::Block const* $getDefaultDisplayBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
