#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/entity/factory/DefinitionInstanceGroup.h"
#include "mc/world/actor/ActorAliasDescription.h"
#include "mc/world/actor/ActorPropertiesDescription.h"
#include "mc/world/actor/AnimationScriptsDescription.h"
#include "mc/world/actor/AnimationsDescription.h"
#include "mc/world/actor/IdentifierDescription.h"
#include "mc/world/actor/IsSpawnableDescription.h"
#include "mc/world/actor/IsSummonableDescription.h"
#include "mc/world/actor/RuntimeIdentifierDescription.h"
#include "mc/world/actor/SpawnCategoryDescription.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDefinitionEvent;
class ActorDefinitionTrigger;
struct ActorDefinitionAttribute;
struct Description;
struct LegacyGoalDefinition;
struct VariantParameterList;
namespace SharedTypes::v1_21_100 { struct TickWorldDefinition; }
// clang-format on

class ActorDefinitionDescriptor {
public:
    // ActorDefinitionDescriptor inner types declare
    // clang-format off
    struct IsHiddenWhenInvisibleDescription;
    // clang-format on
    
    // ActorDefinitionDescriptor inner types define
    struct IsHiddenWhenInvisibleDescription {
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>> mComponentNames;
    ::ll::TypedStorage<8, 40, ::IdentifierDescription> mIdentifier;
    ::ll::TypedStorage<8, 40, ::RuntimeIdentifierDescription> mRuntimeIdentifier;
    ::ll::TypedStorage<1, 16, ::IsSpawnableDescription> mIsSpawnable;
    ::ll::TypedStorage<1, 16, ::IsSummonableDescription> mIsSummonable;
    ::ll::TypedStorage<8, 72, ::AnimationsDescription> mAnimationsDescription;
    ::ll::TypedStorage<8, 32, ::AnimationScriptsDescription> mAnimationScriptsDescription;
    ::ll::TypedStorage<8, 24, ::ActorPropertiesDescription> mActorPropertiesDescription;
    ::ll::TypedStorage<8, 32, ::ActorAliasDescription> mActorAliasDescription;
    ::ll::TypedStorage<4, 16, ::SpawnCategoryDescription> mSpawnCategoryDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyGoalDefinition>> mGoalDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionAttribute>> mAttributes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorDefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup> mDefinitionGroup;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup> mGoalDefinitionGroup;
    ::ll::TypedStorage<8, 8, ::Description*> mAttack;
    ::ll::TypedStorage<8, 8, ::Description*> mMobEffects;
    ::ll::TypedStorage<8, 8, ::Description*> mAmphibiousMoveControl;
    ::ll::TypedStorage<8, 8, ::Description*> mBehavior;
    ::ll::TypedStorage<8, 8, ::Description*> mBreakBlocks;
    ::ll::TypedStorage<8, 8, ::Description*> mBreakDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::Description*> mBucketable;
    ::ll::TypedStorage<8, 8, ::Description*> mCommandBlock;
    ::ll::TypedStorage<8, 8, ::Description*> mContainer;
    ::ll::TypedStorage<8, 8, ::Description*> mDweller;
    ::ll::TypedStorage<8, 8, ::Description*> mGenericMoveControl;
    ::ll::TypedStorage<8, 8, ::Description*> mGlideMoveControl;
    ::ll::TypedStorage<8, 8, ::Description*> mHide;
    ::ll::TypedStorage<8, 8, ::Description*> mIllagerBeastBlocked;
    ::ll::TypedStorage<8, 8, ::Description*> mManagedWanderingTrader;
    ::ll::TypedStorage<8, 8, ::Description*> mMoveControl;
    ::ll::TypedStorage<8, 8, ::Description*> mDolphinSwimControl;
    ::ll::TypedStorage<8, 8, ::Description*> mFlyControl;
    ::ll::TypedStorage<8, 8, ::Description*> mHopControl;
    ::ll::TypedStorage<8, 8, ::Description*> mHoverControl;
    ::ll::TypedStorage<8, 8, ::Description*> mSwimControl;
    ::ll::TypedStorage<8, 8, ::Description*> mWallClimberNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mFloatNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mFlyingNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mHoverNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mGenericNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mWaterboundNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mNavigation;
    ::ll::TypedStorage<8, 8, ::Description*> mPersistent;
    ::ll::TypedStorage<8, 8, ::Description*> mPreferredPath;
    ::ll::TypedStorage<8, 8, ::Description*> mProjectile;
    ::ll::TypedStorage<8, 8, ::Description*> mPushable;
    ::ll::TypedStorage<8, 8, ::Description*> mSlimeMoveControl;
    ::ll::TypedStorage<8, 8, ::Description*> mStrength;
    ::ll::TypedStorage<8, 8, ::Description*> mTrail;
    ::ll::TypedStorage<8, 8, ::Description*> mTeleport;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_100::TickWorldDefinition*> mTickWorld;
    ::ll::TypedStorage<8, 8, ::Description*> mTradeResupply;
    ::ll::TypedStorage<8, 8, ::Description*> mTrust;
    ::ll::TypedStorage<8, 8, ::Description*> mEconomyTradeable;
    ::ll::TypedStorage<8, 8, ::Description*> mTransformation;
    ::ll::TypedStorage<8, 8, ::Description*> mDynamicJumpControl;
    ::ll::TypedStorage<8, 8, ::Description*> mJumpControl;
    ::ll::TypedStorage<8, 8, ::Description*> mOpenDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::Description*> mTripodCamera;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinitionDescriptor(ActorDefinitionDescriptor const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActorDefinitionDescriptor();

    MCAPI ActorDefinitionDescriptor(::ActorDefinitionDescriptor&&);

    MCAPI ::ActorDefinitionDescriptor& combine(::ActorDefinitionDescriptor const& rhs);

    MCAPI bool contains(::ActorDefinitionDescriptor const& rhs) const;

    MCAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor&&);

    MCAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor const&);

    MCAPI bool overlaps(::ActorDefinitionDescriptor const& rhs) const;

    MCAPI ::ActorDefinitionDescriptor& subtract(::ActorDefinitionDescriptor const& rhs);

    MCAPI ~ActorDefinitionDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _executeEvent(::Actor& entity, ::std::string const& name, ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack, ::VariantParameterList const& list);

    MCAPI static bool _executeTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack, ::VariantParameterList const& list);

    MCAPI static void _forceExecuteTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::std::vector<::std::pair<::std::string const, ::std::string const>>& eventStack, ::VariantParameterList const& list);

    MCAPI static bool executeEvent(::Actor& entity, ::std::string const& name, ::VariantParameterList const& list);

    MCAPI static bool executeTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorDefinitionDescriptor&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
