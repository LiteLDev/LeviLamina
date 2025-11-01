#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/util/FloatRange.h"
#include "mc/util/IntRange.h"
#include "mc/util/TargetSelectionMethod.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionIdentifier.h"
#include "mc/world/actor/ActorDefinitionTrigger.h"
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/actor/ai/village/POIType.h"
#include "mc/world/item/ItemDescriptor.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class Goal;
class Mob;
struct ConstDeserializeDataParams;
struct DrinkPotionData;
struct MobDescriptor;
struct SendEventData;
struct SummonSpellData;
namespace Json { class Value; }
// clang-format on

struct LegacyGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    ::ll::TypedStorage<4, 4, int> mPriority;
    ::ll::TypedStorage<4, 4, int> mRequiredControlFlags;
    ::ll::TypedStorage<4, 4, int> mScanInterval;
    ::ll::TypedStorage<4, 4, float> mTargetSearchHeight;
    ::ll::TypedStorage<4, 4, int> mPersistTargetTicks;
    ::ll::TypedStorage<1, 1, bool> mNearestSetPersistent;
    ::ll::TypedStorage<4, 4, float> mWithinDefault;
    ::ll::TypedStorage<4, 4, float> mMaxDist;
    ::ll::TypedStorage<4, 4, float> mWalkSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mSprintSpeedModifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobDescriptor>> mMobDescriptions;
    ::ll::TypedStorage<4, 4, float> mSneakSpeedModifier;
    ::ll::TypedStorage<8, 32, ::std::string> mPreferredActorType;
    ::ll::TypedStorage<1, 1, bool> mUseHomePositionRestrictionFollowMob;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mFollowMobFilters;
    ::ll::TypedStorage<4, 4, float> mStartDistance;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mStopDistance;
    ::ll::TypedStorage<1, 1, bool> mCanTeleport;
    ::ll::TypedStorage<4, 4, int> mPostTeleportDistance;
    ::ll::TypedStorage<1, 1, bool> mIgnoreVibrations;
    ::ll::TypedStorage<4, 4, float> mMaxDistance;
    ::ll::TypedStorage<4, 4, float> mYd;
    ::ll::TypedStorage<1, 1, bool> mLeapSetPersistent;
    ::ll::TypedStorage<4, 4, float> mStalkSpeed;
    ::ll::TypedStorage<4, 4, float> mMaxStalkDist;
    ::ll::TypedStorage<4, 4, float> mLeapHeight;
    ::ll::TypedStorage<4, 4, float> mLeapDistance;
    ::ll::TypedStorage<4, 4, float> mPounceMaxDistance;
    ::ll::TypedStorage<4, 4, float> mStrikeDistance;
    ::ll::TypedStorage<4, 4, float> mStuckTime;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mBlockFilter;
    ::ll::TypedStorage<1, 1, bool> mStalkSetPersistent;
    ::ll::TypedStorage<4, 4, float> mLookDistance;
    ::ll::TypedStorage<4, 4, int> mAngleOfViewX;
    ::ll::TypedStorage<4, 4, int> mAngleOfViewY;
    ::ll::TypedStorage<4, 4, float> mProbability;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mTargetFilter;
    ::ll::TypedStorage<4, 4, int> mMinLookTime;
    ::ll::TypedStorage<4, 4, int> mMaxLookTime;
    ::ll::TypedStorage<1, 1, bool> mContinueSitting;
    ::ll::TypedStorage<1, 1, bool> mContinueIfLeashed;
    ::ll::TypedStorage<4, 4, float> mMinAngleOfViewY;
    ::ll::TypedStorage<4, 4, float> mMaxAngleOfViewY;
    ::ll::TypedStorage<4, 4, int> mMinLookAroundTime;
    ::ll::TypedStorage<4, 4, int> mMaxLookAroundTime;
    ::ll::TypedStorage<4, 4, int> mMinLookCount;
    ::ll::TypedStorage<4, 4, int> mMaxLookCount;
    ::ll::TypedStorage<4, 4, int> mRandomLookAroundCooldown;
    ::ll::TypedStorage<4, 4, float> mMinimumRadius;
    ::ll::TypedStorage<1, 1, bool> mBroadcast;
    ::ll::TypedStorage<4, 4, float> mBroadcastRange;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mWithinRadiusEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mHurtByTargetEvent;
    ::ll::TypedStorage<4, 4, float> mPercentChance;
    ::ll::TypedStorage<4, 4, ::ActorCategory> mAttackTypes;
    ::ll::TypedStorage<4, 4, int> mRandomStopInterval;
    ::ll::TypedStorage<4, 4, float> mReachMultiplier;
    ::ll::TypedStorage<4, 4, float> mMeleeFOV;
    ::ll::TypedStorage<1, 1, bool> mAttackOnce;
    ::ll::TypedStorage<4, 4, int> mRandomSoundInterval;
    ::ll::TypedStorage<1, 1, bool> mRequireCompletePath;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAttack;
    ::ll::TypedStorage<4, 4, float> mAttackDuration;
    ::ll::TypedStorage<4, 4, float> mHitDelay;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mDelayedAttackSound;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnEat;
    ::ll::TypedStorage<4, 4, int> mDelayBeforeEating;
    struct {
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mTargetBlocks;
        ::ll::TypedStorage<8, 24, ::std::vector<::MaterialType>> mTargetMaterialsAboveBlock;
        ::ll::TypedStorage<1, 1, bool> mAllowLayingFromBelow;
        ::ll::TypedStorage<1, 1, bool> mUseDefaultAnimation;
        ::ll::TypedStorage<4, 4, float> mLaySeconds;
        ::ll::TypedStorage<8, 16, ::ItemDescriptor> mEggType;
        ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnLayEvent;
        ::ll::TypedStorage<8, 32, ::std::string> mLayEggSound;
    } mLayEggGoalData;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnWorkArrivalEvent;
    ::ll::TypedStorage<4, 4, float> mTargetDist;
    ::ll::TypedStorage<4, 4, float> mSpeedModifier;
    ::ll::TypedStorage<4, 4, ::MaterialType> mMaterialType;
    ::ll::TypedStorage<4, 4, int> mSearchRange;
    ::ll::TypedStorage<4, 4, int> mSearchHeight;
    ::ll::TypedStorage<4, 4, int> mSearchCount;
    ::ll::TypedStorage<4, 4, float> mGoalRadius;
    struct {
        ::ll::TypedStorage<4, 4, float> speedModifier;
        ::ll::TypedStorage<4, 4, int> tickInterval;
        ::ll::TypedStorage<4, 4, float> stayDuration;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> onReachTriggers;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTrigger>> onStayCompletedTriggers;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> targetDescriptors;
        ::ll::TypedStorage<4, 12, ::Vec3> targetPositionOffset;
        ::ll::TypedStorage<4, 4, float> chanceToStart;
        ::ll::TypedStorage<1, 1, ::TargetSelectionMethod> targetSelectionMethod;
        ::ll::TypedStorage<8, 64, ::ActorFilterGroup> targetBlockFilter;
    } mMoveToBlockGoalData;
    ::ll::TypedStorage<4, 4, float> mWithin;
    ::ll::TypedStorage<1, 1, bool> mIgnoreMobDamage;
    ::ll::TypedStorage<1, 1, bool> mForceUse;
    ::ll::TypedStorage<8, 32, ::std::string> mPanicSound;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::ActorDamageCause>> mDamageSources;
    ::ll::TypedStorage<4, 4, float> mLookAhead;
    ::ll::TypedStorage<4, 4, float> mCenteredGap;
    ::ll::TypedStorage<4, 4, float> mMoveSpeed;
    ::ll::TypedStorage<4, 4, int> mEntityCount;
    ::ll::TypedStorage<4, 4, int> mXZDist;
    ::ll::TypedStorage<4, 4, int> mYDist;
    ::ll::TypedStorage<4, 4, float> mYOffset;
    ::ll::TypedStorage<4, 4, int> mInterval;
    ::ll::TypedStorage<1, 1, bool> mAvoidSurface;
    ::ll::TypedStorage<4, 4, float> mCooldown;
    ::ll::TypedStorage<1, 1, bool> mCanLandOnTrees;
    ::ll::TypedStorage<4, 4, float> mRangedFOV;
    ::ll::TypedStorage<4, 4, int> mAttackIntervalMin;
    ::ll::TypedStorage<4, 4, int> mAttackIntervalMax;
    ::ll::TypedStorage<4, 4, float> mAttackRadius;
    ::ll::TypedStorage<4, 4, float> mAttackRadiusMin;
    ::ll::TypedStorage<4, 4, float> mChargeChargedTrigger;
    ::ll::TypedStorage<4, 4, float> mChargeShootTrigger;
    ::ll::TypedStorage<4, 4, int> mBurstShots;
    ::ll::TypedStorage<4, 4, float> mBurstInterval;
    ::ll::TypedStorage<1, 1, bool> mRangedSetPersistent;
    bool mMustSee : 1;
    bool mMustReach : 1;
    bool mCloseDoorAfter : 1;
    bool mCanGetScared : 1;
    bool mOnlyAtNight : 1;
    bool mMustBeOnGround : 1;
    bool mTrackTarget : 1;
    bool mAlertSameType : 1;
    bool mReselectTargets : 1;
    ::ll::TypedStorage<1, 1, bool> mHurtOwner;
    ::ll::TypedStorage<4, 4, int> mMustSeeForgetTicks;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mItemList;
    ::ll::TypedStorage<1, 1, bool> mCanTemptVertically;
    ::ll::TypedStorage<1, 1, bool> mCanTemptWhileRidden;
    ::ll::TypedStorage<8, 32, ::std::string> mTemptSound;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnTemptStartEvent;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnTemptEndEvent;
    ::ll::TypedStorage<4, 4, int> mMaxToEat;
    ::ll::TypedStorage<4, 4, int> mEatDelay;
    ::ll::TypedStorage<4, 4, int> mFullDelay;
    ::ll::TypedStorage<4, 4, int> mInitialEatDelay;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mBlockDescriptors;
    ::ll::TypedStorage<4, 4, float> mFloatHeightOffset;
    ::ll::TypedStorage<1, 1, bool> mRandomReselect;
    ::ll::TypedStorage<4, 8, ::FloatRange> mFloatDuration;
    ::ll::TypedStorage<1, 1, bool> mUseHomePositionRestriction;
    ::ll::TypedStorage<1, 1, bool> mFloatWanderHasMoveControlFlag;
    ::ll::TypedStorage<4, 4, int> mSurfaceXZDist;
    ::ll::TypedStorage<4, 4, int> mSurfaceYDist;
    ::ll::TypedStorage<1, 1, bool> mAdditionalCollisionBuffer;
    ::ll::TypedStorage<1, 1, bool> mNavigateAroundSurface;
    ::ll::TypedStorage<1, 1, bool> mAllowNavigatingThroughLiquids;
    ::ll::TypedStorage<4, 8, ::IntRange> mHoverHeight;
    ::ll::TypedStorage<4, 4, float> mDuration;
    ::ll::TypedStorage<4, 8, ::FloatRange> mRadiusRange;
    ::ll::TypedStorage<4, 4, int> mRadiusChangeChance;
    ::ll::TypedStorage<4, 8, ::FloatRange> mAboveTargetRange;
    ::ll::TypedStorage<4, 8, ::FloatRange> mHeightOffsetRange;
    ::ll::TypedStorage<4, 4, int> mHeightChangeChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::SummonSpellData>> mSummonSpellData;
    ::ll::TypedStorage<4, 4, ::POIType> mPOIType;
    ::ll::TypedStorage<4, 4, int> mGoalCooldown;
    ::ll::TypedStorage<4, 4, int> mActiveTime;
    ::ll::TypedStorage<4, 4, int> mRandomSoundIntervalMin;
    ::ll::TypedStorage<4, 4, int> mRandomSoundIntervalMax;
    ::ll::TypedStorage<1, 1, bool> mCanWorkInRain;
    ::ll::TypedStorage<4, 4, int> mWorkInRainTolerance;
    ::ll::TypedStorage<4, 4, float> mFollowDistance;
    ::ll::TypedStorage<4, 4, float> mBlockDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::SendEventData>> mSendEventData;
    ::ll::TypedStorage<4, 4, int> mStartDelay;
    ::ll::TypedStorage<4, 4, int> mMaxFailedAttempts;
    ::ll::TypedStorage<1, 1, bool> mAvoidWater;
    ::ll::TypedStorage<1, 1, bool> mPreferWater;
    ::ll::TypedStorage<1, 1, bool> mTargetNeeded;
    ::ll::TypedStorage<4, 4, float> mMountDistance;
    ::ll::TypedStorage<8, 24, ::std::vector<::DrinkPotionData>> mDrinkPotionData;
    ::ll::TypedStorage<4, 4, float> mDrinkSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mDropItemChance;
    ::ll::TypedStorage<8, 32, ::std::string> mLootTable;
    ::ll::TypedStorage<4, 4, float> mSnackingCooldown;
    ::ll::TypedStorage<4, 4, float> mSnackingCooldownMin;
    ::ll::TypedStorage<4, 4, float> mStopSnackingChance;
    ::ll::TypedStorage<4, 4, float> mStopChance;
    ::ll::TypedStorage<4, 4, float> mStartChance;
    ::ll::TypedStorage<4, 4, float> mSittingTimeMin;
    ::ll::TypedStorage<4, 4, float> mSittingCooldown;
    ::ll::TypedStorage<8, 32, ::std::string> mSound;
    ::ll::TypedStorage<8, 32, ::std::string> mPrepareSound;
    ::ll::TypedStorage<4, 4, float> mPrepareTime;
    ::ll::TypedStorage<8, 32, ::std::string> mAggroSound;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnDefendEvent;
    ::ll::TypedStorage<4, 4, float> mSleepYOffset;
    ::ll::TypedStorage<4, 4, float> mSleepColliderHeight;
    ::ll::TypedStorage<4, 4, float> mSleepColliderWidth;
    ::ll::TypedStorage<1, 1, bool> mCanSleepWhileRiding;
    ::ll::TypedStorage<1, 1, bool> mSinkWithPassengers;
    ::ll::TypedStorage<4, 4, float> mCooldownMax;
    ::ll::TypedStorage<4, 4, float> mCooldownMin;
    ::ll::TypedStorage<4, 4, float> mDetectMobDistance;
    ::ll::TypedStorage<4, 4, float> mDetectMobHeight;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mCanNapFilters;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup> mWakeMobExceptionFilters;
    ::ll::TypedStorage<4, 4, float> mInterestTime;
    ::ll::TypedStorage<4, 4, float> mRemoveItemTime;
    ::ll::TypedStorage<4, 4, float> mCarriedItemSwitchTime;
    ::ll::TypedStorage<4, 4, float> mInterestCooldown;
    ::ll::TypedStorage<4, 4, float> mCooldownTimeoutTime;
    ::ll::TypedStorage<8, 176, ::ActorDefinitionIdentifier> mDesiredMingleType;
    ::ll::TypedStorage<4, 4, float> mMingleDistance;
    ::ll::TypedStorage<1, 1, bool> mPickupBasedOnChance;
    ::ll::TypedStorage<1, 1, bool> mCanPickupAnyItem;
    ::ll::TypedStorage<4, 4, int> mTimeoutAfterBeingAttacked;
    ::ll::TypedStorage<1, 1, bool> mCanPickupToHandOrEquipment;
    ::ll::TypedStorage<1, 1, bool> mPickupSameItemsAsInHand;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemDescriptor>> mExcludedItemsList;
    ::ll::TypedStorage<1, 1, bool> mSlimeSetPersistent;
    ::ll::TypedStorage<8, 32, ::std::string> mAdmireItemSound;
    ::ll::TypedStorage<4, 8, ::FloatRange> mSoundInterval;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAdmireItemStart;
    ::ll::TypedStorage<8, 104, ::ActorDefinitionTrigger> mOnAdmireItemStop;
    ::ll::TypedStorage<4, 4, float> mLiquidYOffset;
    ::ll::TypedStorage<4, 4, float> mRiseDelta;
    ::ll::TypedStorage<4, 4, float> mSinkDelta;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyGoalDefinition();

    MCAPI LegacyGoalDefinition(::LegacyGoalDefinition const&);

    MCAPI LegacyGoalDefinition(::LegacyGoalDefinition&&);

    MCAPI ::LegacyGoalDefinition& operator=(::LegacyGoalDefinition&&);

    MCAPI ::LegacyGoalDefinition& operator=(::LegacyGoalDefinition const&);

    MCAPI bool parse(::ConstDeserializeDataParams const& deserializeDataParams, int priority);

    MCAPI ~LegacyGoalDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static int _controlFlagsFromArr(::Json::Value const& flags);

    MCAPI static ::POIType _getPOITypeFromString(::std::string poiStr);

    MCAPI static ::std::vector<::SharedTypes::Legacy::ActorDamageCause> _getPanicGoalDamageSources(::ConstDeserializeDataParams const& deserializeDataParams);

    MCAPI static ::TargetSelectionMethod _getTargetSelectionMethodFromString(::std::string const& methodStr);

    MCAPI static bool goalExists(::std::string const& name);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::function<::std::unique_ptr<::Goal>(::Mob&, ::LegacyGoalDefinition const&)>>& mGoalMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::LegacyGoalDefinition const&);

    MCAPI void* $ctor(::LegacyGoalDefinition&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
