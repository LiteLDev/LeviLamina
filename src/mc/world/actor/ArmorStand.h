#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/world/actor/Mob.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class ActorInteraction;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class ItemStack;
class Player;
struct ActorDefinitionIdentifier;
// clang-format on

class ArmorStand : public ::Mob {
public:
    // ArmorStand inner types declare
    // clang-format off
    struct Pose;
    // clang-format on

    // ArmorStand inner types define
    struct Pose {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mHeadPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mBodyPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mRightArmPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mLeftArmPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mRightLegPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mLeftLegPose;
        ::ll::TypedStorage<4, 12, ::Vec3> mRightItemPose;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mLastHit;
    ::ll::TypedStorage<4, 4, int>    mLastCircuitStrength;
    // NOLINTEND

public:
    // prevent constructor by default
    ArmorStand();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getShadowRadius() const /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location) /*override*/;

    virtual void kill() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float, bool, bool) /*override*/;

    virtual void normalTick() /*override*/;

    virtual void pushActors() /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual ~ArmorStand() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArmorStand(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI void _causeDamage(float dmg);

    MCAPI void _destroyWithEffects(::Actor* sourceActor);

    MCAPI void _dropHeldItems();

    MCAPI void _dropHeldItemsAndResource();

    MCAPI void _dropItem(::ItemStack const& item);

    MCAPI bool _trySwapItem(::Player& player, ::SharedTypes::Legacy::EquipmentSlot slot);

    MCAPI void setPoseIndex(int poseIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ArmorStand::Pose const& POSE_ATHENA();

    MCAPI static ::ArmorStand::Pose const& POSE_BRANDISH();

    MCAPI static ::ArmorStand::Pose const& POSE_CANCAN_A();

    MCAPI static ::ArmorStand::Pose const& POSE_CANCAN_B();

    MCAPI static ::ArmorStand::Pose const& POSE_DEFAULT();

    MCAPI static ::ArmorStand::Pose const& POSE_ENTERTAIN();

    MCAPI static ::ArmorStand::Pose const& POSE_HERO();

    MCAPI static ::ArmorStand::Pose const& POSE_HONOR();

    MCAPI static ::ArmorStand::Pose const& POSE_RIPOSTE();

    MCAPI static ::ArmorStand::Pose const& POSE_SALUTE();

    MCAPI static ::ArmorStand::Pose const& POSE_SOLEMN();

    MCAPI static ::ArmorStand::Pose const& POSE_ZERO_ROTATION();

    MCAPI static ::ArmorStand::Pose const& POSE_ZOMBIE();
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
    MCFOLD float $getShadowRadius() const;

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float, bool, bool);

    MCAPI void $normalTick();

    MCAPI void $pushActors();

    MCFOLD bool $isInvulnerableTo(::ActorDamageSource const& source) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
