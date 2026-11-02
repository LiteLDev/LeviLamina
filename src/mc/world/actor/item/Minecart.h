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
class ActorHurtResult;
class Block;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct HurtParameters;
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

    virtual void destroy(::ActorDamageSource const& source, bool dropMinecartComponents);

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

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void applyNaturalSlowdown(::BlockSource& region);

    virtual void _lazyInitDisplayBlock();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Minecart(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _registerLoopingSounds();

    MCNAPI void dropMinecartWithContentsAndRemove(::std::string_view vanillaMinecartName, bool dropMinecartComponents);

#ifdef LL_PLAT_C
    MCNAPI ::Block const* getDisplayBlock() const;

    MCNAPI int getDisplayOffset() const;
#endif

    MCNAPI void postNormalTick(::BlockPos const& preNormalTickBlockPos);

    MCNAPI ::BlockPos preNormalTick();

    MCNAPI void setDisplayBlock(::Block const& block);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCNAPI void $destroy(::ActorDamageSource const& source, bool dropMinecartComponents);

    MCNAPI ::Block const* $getDefaultDisplayBlock() const;

    MCNAPI int $getDefaultDisplayOffset() const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI float $getInterpolatedBodyYaw(float) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $kill();

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI void $applyNaturalSlowdown(::BlockSource& region);

    MCNAPI void $_lazyInitDisplayBlock();


    // NOLINTEND
};
