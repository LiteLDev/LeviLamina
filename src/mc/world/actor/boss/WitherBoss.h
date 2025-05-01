#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/WitherBossPreAIStepResult.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/monster/Monster.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorDefinitionGroup;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class EntityContext;
class Level;
class MobEffectInstance;
class Vec3;
struct ActorDefinitionIdentifier;
struct ActorUniqueID;
struct VariantParameterList;
namespace mce { class UUID; }
// clang-format on

class WitherBoss : public ::Monster {
public:
    // WitherBoss inner types define
    enum class WitherAttackType : int {
        Charge        = 0,
        HurtExplosion = 1,
        Projectile    = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkfb1661;
    ::ll::UntypedStorage<4, 4>  mUnk91e8c4;
    ::ll::UntypedStorage<4, 24> mUnkf73b85;
    ::ll::UntypedStorage<4, 24> mUnk42fb80;
    ::ll::UntypedStorage<4, 12> mUnkafb5ce;
    ::ll::UntypedStorage<4, 12> mUnkdbcf4c;
    ::ll::UntypedStorage<4, 4>  mUnk10623a;
    ::ll::UntypedStorage<4, 4>  mUnkb71073;
    ::ll::UntypedStorage<4, 4>  mUnk802c66;
    ::ll::UntypedStorage<1, 1>  mUnk409e03;
    ::ll::UntypedStorage<1, 1>  mUnk50435a;
    ::ll::UntypedStorage<4, 12> mUnkc20e00;
    ::ll::UntypedStorage<4, 4>  mUnkf587d8;
    ::ll::UntypedStorage<4, 4>  mUnk9b6d2a;
    ::ll::UntypedStorage<4, 4>  mUnkb77d38;
    ::ll::UntypedStorage<4, 4>  mUnk62a4f1;
    ::ll::UntypedStorage<4, 4>  mUnkb46cbf;
    ::ll::UntypedStorage<4, 4>  mUnkc1a831;
    ::ll::UntypedStorage<4, 4>  mUnk8cedff;
    ::ll::UntypedStorage<4, 4>  mUnkd4292b;
    ::ll::UntypedStorage<4, 4>  mUnkfcfb2e;
    ::ll::UntypedStorage<4, 4>  mUnkcb987d;
    ::ll::UntypedStorage<4, 4>  mUnkc03dfe;
    ::ll::UntypedStorage<1, 1>  mUnk5db70c;
    ::ll::UntypedStorage<1, 1>  mUnkacf26a;
    ::ll::UntypedStorage<4, 4>  mUnk8dfa8e;
    ::ll::UntypedStorage<4, 4>  mUnkbcd1e5;
    ::ll::UntypedStorage<4, 4>  mUnkf3ac9e;
    ::ll::UntypedStorage<4, 4>  mUnke43f8c;
    ::ll::UntypedStorage<4, 4>  mUnk95f423;
    ::ll::UntypedStorage<4, 4>  mUnkca0cd1;
    ::ll::UntypedStorage<4, 4>  mUnk56ff06;
    ::ll::UntypedStorage<4, 4>  mUnkfac4e5;
    ::ll::UntypedStorage<4, 4>  mUnk21dcc1;
    ::ll::UntypedStorage<4, 4>  mUnk5bb727;
    ::ll::UntypedStorage<1, 1>  mUnk33834c;
    ::ll::UntypedStorage<4, 4>  mUnkfa9266;
    ::ll::UntypedStorage<4, 4>  mUnk18c426;
    ::ll::UntypedStorage<4, 4>  mUnke678ef;
    ::ll::UntypedStorage<8, 8>  mUnk9c9e88;
    ::ll::UntypedStorage<4, 4>  mUnk42962d;
    // NOLINTEND

public:
    // prevent constructor by default
    WitherBoss& operator=(WitherBoss const&);
    WitherBoss(WitherBoss const&);
    WitherBoss();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 175
    virtual void newServerAiStep() /*override*/;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 105
    virtual bool canBeAffected(uint id) const /*override*/;

    // vIndex: 106
    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const /*override*/;

    // vIndex: 144
    virtual void hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 92
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource) /*override*/;

    // vIndex: 155
    virtual int getArmorValue() const /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 12
    virtual ::Vec3 getFiringPos() const /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 8
    virtual ~WitherBoss() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WitherBoss(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI void _destroyBlocks(
        ::Level&                       level,
        ::AABB const&                  bb,
        ::BlockSource&                 region,
        int                            range,
        ::WitherBoss::WitherAttackType attackType
    );

    MCNAPI void _performRangedAttack(int headID, ::Actor& target);

    MCNAPI void _performRangedAttack(int headID, ::Vec3 const& targetPos, bool dangerous);

    MCNAPI bool canShoot();

    MCNAPI bool getAerialAttack() const;

    MCNAPI ::ActorUniqueID getAlternativeTarget(int headIndex);

    MCNAPI ::Vec3 getHeadPos(int headID) const;

    MCNAPI int getInvulnerableTicks() const;

    MCNAPI bool hasAerialAttack() const;

    MCNAPI void postAiStep();

    MCNAPI ::WitherBossPreAIStepResult preAiStep();

    MCNAPI void setAerialAttack(bool aerialAttack);

    MCNAPI void setAlternativeTarget(int headIndex, ::ActorUniqueID entityId);

    MCNAPI void setInvulnerableTicks(int invulnerableTicks);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::UUID const& MAX_HEALTH_CAP_UUID();
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

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCNAPI void $aiStep();

    MCNAPI void $newServerAiStep();

    MCNAPI bool $canFreeze() const;

    MCNAPI bool $canBeAffected(uint id) const;

    MCNAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCNAPI void $hurtEffects(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCNAPI int $getArmorValue() const;

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI void $remove();

    MCNAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI ::Vec3 $getFiringPos() const;

    MCNAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
