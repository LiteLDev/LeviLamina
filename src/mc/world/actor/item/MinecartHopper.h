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
    // vIndex: 143
    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents) /*override*/;

    // vIndex: 147
    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;

    // vIndex: 144
    virtual ::MinecartType getType() /*override*/;

    // vIndex: 145
    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    // vIndex: 146
    virtual int getDefaultDisplayOffset() const /*override*/;

    // vIndex: 8
    virtual ~MinecartHopper() /*override*/;
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

    MCAPI int $getDefaultDisplayOffset() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
