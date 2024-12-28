#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class Block;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class MinecartCommandBlock : public ::Minecart {
public:
    // prevent constructor by default
    MinecartCommandBlock& operator=(MinecartCommandBlock const&);
    MinecartCommandBlock(MinecartCommandBlock const&);
    MinecartCommandBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 33
    virtual bool canShowNameTag() const /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 144
    virtual ::MinecartType getType() /*override*/;

    // vIndex: 145
    virtual ::Block const* getDefaultDisplayBlock() const /*override*/;

    // vIndex: 147
    virtual void applyNaturalSlowdown(::BlockSource& region) /*override*/;

    // vIndex: 148
    virtual void _lazyInitDisplayBlock() /*override*/;

    // vIndex: 8
    virtual ~MinecartCommandBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MinecartCommandBlock(
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
    MCAPI bool $canShowNameTag() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI ::MinecartType $getType();

    MCAPI ::Block const* $getDefaultDisplayBlock() const;

    MCAPI void $applyNaturalSlowdown(::BlockSource& region);

    MCAPI void $_lazyInitDisplayBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
