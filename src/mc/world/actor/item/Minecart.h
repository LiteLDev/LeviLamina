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
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
// clang-format on

class Minecart : public ::Actor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3355bb;
    ::ll::UntypedStorage<1, 1> mUnk74c1d6;
    ::ll::UntypedStorage<4, 4> mUnkd59223;
    ::ll::UntypedStorage<8, 8> mUnk80b5a7;
    ::ll::UntypedStorage<8, 8> mUnk8f8e51;
    ::ll::UntypedStorage<4, 4> mUnk34dff3;
    // NOLINTEND

public:
    // prevent constructor by default
    Minecart& operator=(Minecart const&);
    Minecart(Minecart const&);
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

    // vIndex: 143
    virtual void destroy(::ActorDamageSource const&, bool dropMinecartComponents);

    // vIndex: 144
    virtual ::MinecartType getType() = 0;

    // vIndex: 145
    virtual ::Block const* getDefaultDisplayBlock() const;

    // vIndex: 146
    virtual int getDefaultDisplayOffset() const;

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 93
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 15
    virtual float getInterpolatedBodyYaw(float) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 124
    virtual void kill() /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool) /*override*/;

    // vIndex: 147
    virtual void applyNaturalSlowdown(::BlockSource&);

    // vIndex: 148
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
    // static functions
    // NOLINTBEGIN
    MCAPI static float getHeightOffset(::AABBShapeComponent const& aabb);
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

    MCAPI ::Block const* $getDefaultDisplayBlock() const;

    MCAPI int $getDefaultDisplayOffset() const;

    MCAPI float $getShadowRadius() const;

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

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
