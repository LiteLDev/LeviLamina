#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/shared_types/v1_21_100/actor/TickWorldDefinition.h"
#include "mc/entity/components/BehaviorTreeDescription.h"
#include "mc/entity/components/BreakDoorAnnotationDescription.h"
#include "mc/entity/components/CommandBlockDescription.h"
#include "mc/entity/components/TripodCameraDescription.h"
#include "mc/entity/components_json_legacy/BreakBlocksDescription.h"
#include "mc/entity/components_json_legacy/BucketableDescription.h"
#include "mc/entity/components_json_legacy/ContainerDescription.h"
#include "mc/entity/components_json_legacy/DwellerDescription.h"
#include "mc/entity/components_json_legacy/EconomyTradeableDescription.h"
#include "mc/entity/components_json_legacy/HideDescription.h"
#include "mc/entity/components_json_legacy/IllagerBeastBlockedDescription.h"
#include "mc/entity/components_json_legacy/ManagedWanderingTraderDescription.h"
#include "mc/entity/components_json_legacy/OpenDoorAnnotationDescription.h"
#include "mc/entity/components_json_legacy/ProjectileDescription.h"
#include "mc/entity/components_json_legacy/TeleportDescription.h"
#include "mc/entity/components_json_legacy/TransformationDescription.h"
#include "mc/entity/definitions/AmphibiousMoveControlDescription.h"
#include "mc/entity/definitions/AttackDescription.h"
#include "mc/entity/definitions/DynamicJumpControlDescription.h"
#include "mc/entity/definitions/GenericMoveControlDescription.h"
#include "mc/entity/definitions/GlideMoveControlDescription.h"
#include "mc/entity/definitions/JumpControlDescription.h"
#include "mc/entity/definitions/MobEffectChangeDescription.h"
#include "mc/entity/definitions/MoveControlBasicDescription.h"
#include "mc/entity/definitions/MoveControlDolphinDescription.h"
#include "mc/entity/definitions/MoveControlFlyDescription.h"
#include "mc/entity/definitions/MoveControlHoverDescription.h"
#include "mc/entity/definitions/MoveControlSkipDescription.h"
#include "mc/entity/definitions/MoveControlSwayDescription.h"
#include "mc/entity/definitions/NavigationClimbDescription.h"
#include "mc/entity/definitions/NavigationFloatDescription.h"
#include "mc/entity/definitions/NavigationFlyDescription.h"
#include "mc/entity/definitions/NavigationGenericDescription.h"
#include "mc/entity/definitions/NavigationHoverDescription.h"
#include "mc/entity/definitions/NavigationSwimDescription.h"
#include "mc/entity/definitions/NavigationWalkDescription.h"
#include "mc/entity/definitions/PersistentDescription.h"
#include "mc/entity/definitions/PreferredPathDescription.h"
#include "mc/entity/definitions/SlimeMoveControlDescription.h"
#include "mc/entity/definitions/StrengthDescription.h"
#include "mc/entity/definitions/TradeResupplyDescription.h"
#include "mc/entity/definitions/TrailDescription.h"
#include "mc/entity/definitions/TrustDescription.h"
#include "mc/resources/JsonBetaState.h"
#include "mc/server/commands/CurrentCmdVersion.h"
#include "mc/world/actor/ActorAliasDescription.h"
#include "mc/world/actor/ActorDefinitionDescriptor.h"
#include "mc/world/actor/ActorDefinitionParseStatus.h"
#include "mc/world/actor/ActorPropertiesDescription.h"
#include "mc/world/actor/AnimationScriptsDescription.h"
#include "mc/world/actor/AnimationsDescription.h"
#include "mc/world/actor/IdentifierDescription.h"
#include "mc/world/actor/IsSpawnableDescription.h"
#include "mc/world/actor/IsSummonableDescription.h"
#include "mc/world/actor/RuntimeIdentifierDescription.h"
#include "mc/world/actor/SpawnCategoryDescription.h"
#include "mc/world/persistence/DynamicPropertiesDefinition.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionEvent;
class ActorEventResponseFactory;
class ActorFactory;
class CommonResourceDefinitionMap;
class Experiments;
class MinEngineVersion;
class PackLoadContext;
class SemVersion;
struct ActorDefinitionAttribute;
struct ActorDocumentDataParams;
namespace cereal { class DynamicValue; }
// clang-format on

class ActorDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 960, ::ActorDefinitionDescriptor>                                mDescription;
    ::ll::TypedStorage<8, 40, ::IdentifierDescription>                                     mIdentifier;
    ::ll::TypedStorage<8, 40, ::RuntimeIdentifierDescription>                              mRuntimeIdentifier;
    ::ll::TypedStorage<8, 16, ::IsSpawnableDescription>                                    mIsSpawnable;
    ::ll::TypedStorage<8, 16, ::IsSummonableDescription>                                   mIsSummonable;
    ::ll::TypedStorage<8, 72, ::AnimationsDescription>                                     mAnimationsDescription;
    ::ll::TypedStorage<8, 32, ::AnimationScriptsDescription>                               mAnimationScriptsDescription;
    ::ll::TypedStorage<8, 24, ::ActorPropertiesDescription>                                mActorPropertiesDescription;
    ::ll::TypedStorage<8, 32, ::ActorAliasDescription>                                     mActorAliasDescription;
    ::ll::TypedStorage<8, 16, ::SpawnCategoryDescription>                                  mSpawnCategoryDescription;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionAttribute>>                   mAttributes;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::ActorDefinitionEvent>> mEventHandlers;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::CommonResourceDefinitionMap>>            mCommonResourceDefinitionMap;
    ::ll::TypedStorage<8, 32, ::std::string>                                               mRelativeResourceFilepath;
    ::ll::TypedStorage<4, 4, ::CurrentCmdVersion>                                          mCommandVersion;
    ::ll::TypedStorage<8, 72, ::DynamicPropertiesDefinition>                               mDynamicPropertiesDefinition;
    ::ll::TypedStorage<8, 56, ::AttackDescription>                                         mAttack;
    ::ll::TypedStorage<8, 56, ::MobEffectChangeDescription>                                mMobEffects;
    ::ll::TypedStorage<8, 16, ::AmphibiousMoveControlDescription>                          mAmphibiousMoveControl;
    ::ll::TypedStorage<8, 40, ::BehaviorTreeDescription>                                   mBehavior;
    ::ll::TypedStorage<8, 72, ::BreakBlocksDescription>                                    mBreakBlocks;
    ::ll::TypedStorage<8, 16, ::BreakDoorAnnotationDescription>                            mBreakDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::BucketableDescription>                                      mBucketable;
    ::ll::TypedStorage<8, 24, ::CommandBlockDescription>                                   mCommandBlock;
    ::ll::TypedStorage<8, 24, ::ContainerDescription>                                      mContainer;
    ::ll::TypedStorage<8, 128, ::DwellerDescription>                                       mDweller;
    ::ll::TypedStorage<8, 16, ::GenericMoveControlDescription>                             mGenericMoveControl;
    ::ll::TypedStorage<8, 24, ::GlideMoveControlDescription>                               mGlideMoveControl;
    ::ll::TypedStorage<8, 8, ::HideDescription>                                            mHide;
    ::ll::TypedStorage<8, 40, ::IllagerBeastBlockedDescription>                            mIllagerBeastBlocked;
    ::ll::TypedStorage<8, 8, ::ManagedWanderingTraderDescription>                          mManagedWanderingTrader;
    ::ll::TypedStorage<8, 16, ::MoveControlBasicDescription>                               mMoveControl;
    ::ll::TypedStorage<8, 16, ::MoveControlDolphinDescription>                             mDolphinSwimControl;
    ::ll::TypedStorage<8, 16, ::MoveControlFlyDescription>                                 mFlyControl;
    ::ll::TypedStorage<8, 16, ::MoveControlSkipDescription>                                mHopControl;
    ::ll::TypedStorage<8, 16, ::MoveControlHoverDescription>                               mHoverControl;
    ::ll::TypedStorage<8, 24, ::MoveControlSwayDescription>                                mSwimControl;
    ::ll::TypedStorage<8, 88, ::NavigationClimbDescription>                                mWallClimberNavigation;
    ::ll::TypedStorage<8, 88, ::NavigationFloatDescription>                                mFloatNavigation;
    ::ll::TypedStorage<8, 88, ::NavigationFlyDescription>                                  mFlyingNavigation;
    ::ll::TypedStorage<8, 88, ::NavigationHoverDescription>                                mHoverNavigation;
    ::ll::TypedStorage<8, 88, ::NavigationGenericDescription>                              mGenericNavigation;
    ::ll::TypedStorage<8, 120, ::NavigationSwimDescription>                                mWaterboundNavigation;
    ::ll::TypedStorage<8, 88, ::NavigationWalkDescription>                                 mNavigation;
    ::ll::TypedStorage<8, 8, ::PersistentDescription>                                      mPersistent;
    ::ll::TypedStorage<8, 48, ::PreferredPathDescription>                                  mPreferredPath;
    ::ll::TypedStorage<8, 360, ::ProjectileDescription>                                    mProjectile;
    ::ll::TypedStorage<8, 24, ::SlimeMoveControlDescription>                               mSlimeMoveControl;
    ::ll::TypedStorage<8, 24, ::StrengthDescription>                                       mStrength;
    ::ll::TypedStorage<8, 136, ::TrailDescription>                                         mTrail;
    ::ll::TypedStorage<8, 48, ::TeleportDescription>                                       mTeleport;
    ::ll::TypedStorage<4, 12, ::SharedTypes::v1_21_100::TickWorldDefinition>               mTickWorld;
    ::ll::TypedStorage<8, 8, ::TradeResupplyDescription>                                   mTradeResupply;
    ::ll::TypedStorage<8, 8, ::TrustDescription>                                           mTrust;
    ::ll::TypedStorage<8, 112, ::EconomyTradeableDescription>                              mEconomyTradeable;
    ::ll::TypedStorage<8, 320, ::TransformationDescription>                                mTransformation;
    ::ll::TypedStorage<8, 48, ::DynamicJumpControlDescription>                             mDynamicJumpControl;
    ::ll::TypedStorage<8, 48, ::JumpControlDescription>                                    mJumpControl;
    ::ll::TypedStorage<8, 8, ::OpenDoorAnnotationDescription>                              mOpenDoorAnnotation;
    ::ll::TypedStorage<8, 8, ::TripodCameraDescription>                                    mTripodCamera;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ActorDefinition(::std::string const& id);

    MCAPI ::ActorDefinitionParseStatus parse(
        ::ActorDocumentDataParams    deserializeDataParams,
        ::ActorDefinitionDescriptor& desc,
        ::ActorFactory&              actorFactory,
        ::Experiments const&         experiments,
        ::LogArea                    logArea
    );

    MCAPI void parseAttributes(::ActorDocumentDataParams deserializeDataParams, ::ActorDefinitionDescriptor& desc);

    MCAPI bool parseEntityDescription(
        ::cereal::DynamicValue const& description,
        ::SemVersion const&           formatVersion,
        ::PackLoadContext const&      packLoadContext
    );

    MCAPI void parseEvents(
        ::cereal::DynamicValue const& root,
        ::MinEngineVersion const&     minEngineVersion,
        ::SemVersion const&           formatVersion,
        ::ActorEventResponseFactory*  responseFactory,
        ::Experiments const&          experiments,
        ::JsonBetaState               useBetaFeatures
    );

    MCAPI ~ActorDefinition();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
