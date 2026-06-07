#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/small_vector_base.h"
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
struct ActorDefinitionEventStackEntry;
struct AmphibiousMoveControlDescription;
struct AttackDescription;
struct BehaviorTreeDescription;
struct BreakBlocksDescription;
struct BreakDoorAnnotationDescription;
struct BucketableDescription;
struct CommandBlockDescription;
struct ContainerDescription;
struct DwellerDescription;
struct DynamicJumpControlDescription;
struct EconomyTradeableDescription;
struct GenericMoveControlDescription;
struct GlideMoveControlDescription;
struct HideDescription;
struct IllagerBeastBlockedDescription;
struct JumpControlDescription;
struct LegacyGoalDefinition;
struct ManagedWanderingTraderDescription;
struct MobEffectChangeDescription;
struct MoveControlBasicDescription;
struct MoveControlDolphinDescription;
struct MoveControlFlyDescription;
struct MoveControlHoverDescription;
struct MoveControlSkipDescription;
struct MoveControlSwayDescription;
struct NavigationClimbDescription;
struct NavigationFloatDescription;
struct NavigationFlyDescription;
struct NavigationGenericDescription;
struct NavigationHoverDescription;
struct NavigationSwimDescription;
struct NavigationWalkDescription;
struct OpenDoorAnnotationDescription;
struct PersistentDescription;
struct PreferredPathDescription;
struct ProjectileDescription;
struct SlimeMoveControlDescription;
struct StrengthDescription;
struct TeleportDescription;
struct TradeResupplyDescription;
struct TrailDescription;
struct TransformationDescription;
struct TripodCameraDescription;
struct TrustDescription;
struct VariantParameterList;
namespace SharedTypes::v1_21_100 { struct TickWorldDefinition; }
// clang-format on

class ActorDefinitionDescriptor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::HashedString>>                        mComponentNames;
    ::ll::TypedStorage<8, 40, ::IdentifierDescription>                                     mIdentifier;
    ::ll::TypedStorage<8, 40, ::RuntimeIdentifierDescription>                              mRuntimeIdentifier;
    ::ll::TypedStorage<8, 16, ::IsSpawnableDescription>                                    mIsSpawnable;
    ::ll::TypedStorage<8, 16, ::IsSummonableDescription>                                   mIsSummonable;
    ::ll::TypedStorage<8, 72, ::AnimationsDescription>                                     mAnimationsDescription;
    ::ll::TypedStorage<8, 32, ::AnimationScriptsDescription>                               mAnimationScriptsDescription;
    ::ll::TypedStorage<8, 24, ::ActorPropertiesDescription>                                mActorPropertiesDescription;
    ::ll::TypedStorage<8, 32, ::ActorAliasDescription>                                     mActorAliasDescription;
    ::ll::TypedStorage<8, 16, ::SpawnCategoryDescription>                                  mSpawnCategoryDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::LegacyGoalDefinition>>                       mGoalDefinitions;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionAttribute>>                   mAttributes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorDefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                                   mDefinitionGroup;
    ::ll::TypedStorage<8, 72, ::DefinitionInstanceGroup>                                   mGoalDefinitionGroup;
    ::ll::TypedStorage<8, 8, ::AttackDescription const*>                                   mAttack;
    ::ll::TypedStorage<8, 8, ::MobEffectChangeDescription const*>                          mMobEffects;
    ::ll::TypedStorage<8, 8, ::AmphibiousMoveControlDescription const*>                    mAmphibiousMoveControl;
    ::ll::TypedStorage<8, 8, ::BehaviorTreeDescription const*>                             mBehavior;
    ::ll::TypedStorage<8, 8, ::BreakBlocksDescription const*>                              mBreakBlocks;
    ::ll::TypedStorage<8, 8, ::BreakDoorAnnotationDescription const*>                      mBreakDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::BucketableDescription const*>                               mBucketable;
    ::ll::TypedStorage<8, 8, ::CommandBlockDescription const*>                             mCommandBlock;
    ::ll::TypedStorage<8, 8, ::ContainerDescription const*>                                mContainer;
    ::ll::TypedStorage<8, 8, ::DwellerDescription const*>                                  mDweller;
    ::ll::TypedStorage<8, 8, ::GenericMoveControlDescription const*>                       mGenericMoveControl;
    ::ll::TypedStorage<8, 8, ::GlideMoveControlDescription const*>                         mGlideMoveControl;
    ::ll::TypedStorage<8, 8, ::HideDescription const*>                                     mHide;
    ::ll::TypedStorage<8, 8, ::IllagerBeastBlockedDescription const*>                      mIllagerBeastBlocked;
    ::ll::TypedStorage<8, 8, ::ManagedWanderingTraderDescription const*>                   mManagedWanderingTrader;
    ::ll::TypedStorage<8, 8, ::MoveControlBasicDescription const*>                         mMoveControl;
    ::ll::TypedStorage<8, 8, ::MoveControlDolphinDescription const*>                       mDolphinSwimControl;
    ::ll::TypedStorage<8, 8, ::MoveControlFlyDescription const*>                           mFlyControl;
    ::ll::TypedStorage<8, 8, ::MoveControlSkipDescription const*>                          mHopControl;
    ::ll::TypedStorage<8, 8, ::MoveControlHoverDescription const*>                         mHoverControl;
    ::ll::TypedStorage<8, 8, ::MoveControlSwayDescription const*>                          mSwimControl;
    ::ll::TypedStorage<8, 8, ::NavigationClimbDescription const*>                          mWallClimberNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationFloatDescription const*>                          mFloatNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationFlyDescription const*>                            mFlyingNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationHoverDescription const*>                          mHoverNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationGenericDescription const*>                        mGenericNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationSwimDescription const*>                           mWaterboundNavigation;
    ::ll::TypedStorage<8, 8, ::NavigationWalkDescription const*>                           mNavigation;
    ::ll::TypedStorage<8, 8, ::PersistentDescription const*>                               mPersistent;
    ::ll::TypedStorage<8, 8, ::PreferredPathDescription const*>                            mPreferredPath;
    ::ll::TypedStorage<8, 8, ::ProjectileDescription const*>                               mProjectile;
    ::ll::TypedStorage<8, 8, ::SlimeMoveControlDescription const*>                         mSlimeMoveControl;
    ::ll::TypedStorage<8, 8, ::StrengthDescription const*>                                 mStrength;
    ::ll::TypedStorage<8, 8, ::TrailDescription const*>                                    mTrail;
    ::ll::TypedStorage<8, 8, ::TeleportDescription const*>                                 mTeleport;
    ::ll::TypedStorage<8, 8, ::SharedTypes::v1_21_100::TickWorldDefinition const*>         mTickWorld;
    ::ll::TypedStorage<8, 8, ::TradeResupplyDescription const*>                            mTradeResupply;
    ::ll::TypedStorage<8, 8, ::TrustDescription const*>                                    mTrust;
    ::ll::TypedStorage<8, 8, ::EconomyTradeableDescription const*>                         mEconomyTradeable;
    ::ll::TypedStorage<8, 8, ::TransformationDescription const*>                           mTransformation;
    ::ll::TypedStorage<8, 8, ::DynamicJumpControlDescription const*>                       mDynamicJumpControl;
    ::ll::TypedStorage<8, 8, ::JumpControlDescription const*>                              mJumpControl;
    ::ll::TypedStorage<8, 8, ::OpenDoorAnnotationDescription const*>                       mOpenDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::TripodCameraDescription const*>                             mTripodCamera;
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

    MCAPI ::std::optional<::ActorDefinitionAttribute> findAttributeByName(::std::string const& attributeName) const;

    MCAPI bool hasJumpSubComponent();

    MCAPI bool hasMovementSubComponent();

    MCAPI bool hasNavigationSubComponent();

    MCAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor&&);

    MCAPI ::ActorDefinitionDescriptor& operator=(::ActorDefinitionDescriptor const&);

    MCAPI bool overlaps(::ActorDefinitionDescriptor const& rhs) const;

    MCAPI ::ActorDefinitionDescriptor& subtract(::ActorDefinitionDescriptor const& rhs);

    MCAPI ~ActorDefinitionDescriptor();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool executeEvent(::Actor& entity, ::std::string const& name, ::VariantParameterList const& list);

    MCAPI static bool
    executeTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);

    MCAPI static void
    forceExecuteTrigger(::Actor& entity, ::ActorDefinitionTrigger const& trigger, ::VariantParameterList const& list);

    MCAPI static void forceExecuteTriggerChain(
        ::Actor&                                                        entity,
        ::ActorDefinitionTrigger const&                                 trigger,
        ::Bedrock::small_vector_base<::ActorDefinitionEventStackEntry>& eventStack,
        ::VariantParameterList const&                                   list
    );

    MCAPI static bool hasEvent(::Actor const& entity, ::std::string const& name);
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
