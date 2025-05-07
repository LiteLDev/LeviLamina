#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"
#include "mc/world/actor/ai/goal/BaseGoalDefinition.h"
#include "mc/world/actor/ai/goal/Goal.h"
#include "mc/world/actor/ai/util/ExpiringTick.h"

// auto generated forward declare list
// clang-format off
class Mob;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SonicBoomGoal : public ::Goal {
public:
    // SonicBoomGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SonicBoomGoal inner types define
    class Definition : public ::BaseGoalDefinition {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnk11af3a;
        ::ll::UntypedStorage<4, 4>  mUnka719e0;
        ::ll::UntypedStorage<4, 4>  mUnkd8351d;
        ::ll::UntypedStorage<4, 4>  mUnk5a0044;
        ::ll::UntypedStorage<4, 4>  mUnkf88d75;
        ::ll::UntypedStorage<4, 4>  mUnkc5eeb7;
        ::ll::UntypedStorage<4, 4>  mUnk620727;
        ::ll::UntypedStorage<4, 4>  mUnk36eafc;
        ::ll::UntypedStorage<4, 4>  mUnk73df70;
        ::ll::UntypedStorage<4, 4>  mUnkab5d4f;
        ::ll::UntypedStorage<8, 32> mUnka60694;
        ::ll::UntypedStorage<8, 32> mUnkb8a8a1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&);
        Definition(Definition const&);
        Definition();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~Definition() /*override*/ = default;
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void buildSchema(
            ::std::string const& name,
            ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::SonicBoomGoal::Definition>>&
                root
        );
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Mob&>                                 mMob;
    ::ll::TypedStorage<4, 4, float>                                  mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float>                                  mAttackDamage;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRangeHorizontal;
    ::ll::TypedStorage<4, 4, float>                                  mAttackRangeVertical;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHorizontalStrength;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackVerticalStrength;
    ::ll::TypedStorage<4, 4, float>                                  mKnockbackHeightCap;
    ::ll::TypedStorage<2, 2, ushort>                                 mAttackCooldownTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDurationTicks;
    ::ll::TypedStorage<2, 2, ushort>                                 mDurationTicksUntilAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mAttackSound;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mChargeSound;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mAnimationLength;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSoundCooldown;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSoundDelay;
    ::ll::TypedStorage<8, 24, ::std::optional<::ExpiringTick>>       mSonicBoomCooldown;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool canUse() /*override*/;

    // vIndex: 2
    virtual bool canContinueToUse() /*override*/;

    // vIndex: 4
    virtual void start() /*override*/;

    // vIndex: 5
    virtual void stop() /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void appendDebugInfo(::std::string& str) const /*override*/;

    // vIndex: 0
    virtual ~SonicBoomGoal() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $canUse();

    MCNAPI bool $canContinueToUse();

    MCNAPI void $start();

    MCNAPI void $stop();

    MCNAPI void $tick();

    MCNAPI void $appendDebugInfo(::std::string& str) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
