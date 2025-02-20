#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class Player;
class Vec3;
struct ActorDefinitionIdentifier;
struct VariantParameterList;
// clang-format on

class ThrownTrident : public ::AbstractArrow {
public:
    // ThrownTrident inner types define
    enum class Data : int {
        OwnerID = 17,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk5a0d0e;
    ::ll::UntypedStorage<4, 4>   mUnk1626c9;
    ::ll::UntypedStorage<8, 152> mUnkfcbd41;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrownTrident& operator=(ThrownTrident const&);
    ThrownTrident(ThrownTrident const&);
    ThrownTrident();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 138
    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed) /*override*/;

    // vIndex: 39
    virtual void playerTouch(::Player& player) /*override*/;

    // vIndex: 71
    virtual void despawn() /*override*/;

    // vIndex: 1
    virtual void outOfWorld() /*override*/;

    // vIndex: 61
    virtual bool isEnchanted() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 139
    virtual ::ItemStack _getPickupItem() const /*override*/;

    // vIndex: 8
    virtual ~ThrownTrident() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ThrownTrident(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void returnWithLoyalty(int enchantLevel);
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCFOLD void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCAPI void $playerTouch(::Player& player);

    MCAPI void $despawn();

    MCAPI void $outOfWorld();

    MCAPI bool $isEnchanted() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::ItemStack $_getPickupItem() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
