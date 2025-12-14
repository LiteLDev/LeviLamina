#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/projectile/AbstractArrow.h"
#include "mc/world/item/ItemStack.h"

// auto generated forward declare list
// clang-format off
class ActorDamageSource;
class ActorDefinitionGroup;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
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
    ::ll::TypedStorage<1, 1, bool>          mDealtDamage;
    ::ll::TypedStorage<4, 4, int>           mClientSideReturnTridentTickCount;
    ::ll::TypedStorage<8, 152, ::ItemStack> mTrident;
    // NOLINTEND

public:
    // prevent constructor by default
    ThrownTrident();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed) /*override*/;

    virtual void playerTouch(::Player& player) /*override*/;

    virtual void despawn() /*override*/;

    virtual void outOfWorld() /*override*/;

    virtual bool isEnchanted() const /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual ::ItemStack _getPickupItem() const /*override*/;

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
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $shoot(::Vec3 const& dir, float pow, float uncertainty, ::Vec3 const& baseSpeed);

    MCAPI void $playerTouch(::Player& player);

    MCAPI void $despawn();

    MCAPI void $outOfWorld();

    MCAPI bool $isEnchanted() const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::ItemStack $_getPickupItem() const;

#ifdef LL_PLAT_C
    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
