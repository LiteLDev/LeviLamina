#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Actor.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/item/MinecartType.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class Minecart : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>> mDisplayBlockSerId;
    ::ll::TypedStorage<1, 1, bool>                             mFlipped;
    ::ll::TypedStorage<4, 4, float>                            mRailRenderRot;
    ::ll::TypedStorage<8, 8, uint64>                           mBaseLoop;
    ::ll::TypedStorage<8, 8, uint64>                           mRidingLoop;
    ::ll::TypedStorage<4, 4, float>                            mSmoothSpeed;
    // NOLINTEND

public:
    // prevent constructor by default
    Minecart();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~Minecart() /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 138
    virtual void destroy(::ActorDamageSource const&, bool dropMinecartComponents);

    // vIndex: 139
    virtual ::MinecartType getType() = 0;

    // vIndex: 140
    virtual ::Block const* getDefaultDisplayBlock() const;

    // vIndex: 141
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 15
    virtual float getInterpolatedBodyYaw(float) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 122
    virtual void kill() /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool) /*override*/;

    // vIndex: 142
    virtual void applyNaturalSlowdown(::BlockSource&);

    // vIndex: 143
    virtual void _lazyInitDisplayBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Minecart(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _registerLoopingSounds();

    MCAPI void dropMinecartWithContentsAndRemove(::std::string_view vanillaMinecartName, bool dropMinecartComponents);

    MCAPI void postNormalTick(::BlockPos const& preNormalTickBlockPos);

    MCAPI ::BlockPos preNormalTick();

    MCAPI void setDisplayBlock(::Block const& block);
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
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $destroy(::ActorDamageSource const&, bool dropMinecartComponents);

    MCFOLD ::Block const* $getDefaultDisplayBlock() const;

    MCFOLD int $getDefaultDisplayOffset() const;

    MCFOLD float $getShadowRadius() const;

    MCFOLD ::ActorUniqueID $getControllingPlayer() const;

    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI float $getInterpolatedBodyYaw(float) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $kill();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool, bool);

    MCAPI void $applyNaturalSlowdown(::BlockSource&);

    MCAPI void $_lazyInitDisplayBlock();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
