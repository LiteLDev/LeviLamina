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
    virtual ~Minecart() /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void destroy(::ActorDamageSource const&, bool dropMinecartComponents);

    virtual ::MinecartType getType() = 0;

    virtual ::Block const* getDefaultDisplayBlock() const;

    virtual int getDefaultDisplayOffset() const;

    virtual float getShadowRadius() const /*override*/;

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual float getInterpolatedBodyYaw(float) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void kill() /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool) /*override*/;

    virtual void applyNaturalSlowdown(::BlockSource&);

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

    MCAPI_C ::Block const* getDisplayBlock() const;

    MCAPI_C int getDisplayOffset() const;

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
