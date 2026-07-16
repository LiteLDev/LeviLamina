#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/util/VariantParameterList.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ActorVersion.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInActorComponents.h"
#include "mc/world/actor/SpawnRuleEnum.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/ShapeType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActionEvent;
class ActionQueue;
class ActorDamageSource;
class ActorDefinitionDescriptor;
class ActorDefinitionDiffList;
class ActorDefinitionGroup;
class ActorHurtResult;
class ActorInteraction;
class ActorRuntimeID;
class AnimationComponent;
class Attribute;
class AttributeInstanceConstRef;
class BaseAttributeMap;
class Block;
class BlockPos;
class BlockSource;
class ChangeDimensionPacket;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class DynamicProperties;
class EntityRegistry;
class FishingHook;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
class InteractionResult;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class LootTable;
class Matrix;
class MerchantRecipeList;
class Mob;
class MobEffect;
class MobEffectInstance;
class Packet;
class Player;
class Random;
class RenderParams;
class RideableComponent;
class RopeSystem;
class SpatialActorNetworkData;
class StrictEntityContext;
class UpdateEquipPacket;
class UpdateTradePacket;
class Vec2;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct DimensionType;
struct DistanceSortedActor;
struct DynamicRenderOffsetComponent;
struct EquipmentTable;
struct HurtParameters;
struct InterpolationPair;
struct MutableAttributeWithContext;
struct SoundEventIdentifier;
struct StateVectorComponent;
namespace Bedrock::Safety { class RedactableString; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
class IOptionsReader;
// clang-format on

class Level;

class Actor {
public:
    // Actor inner types define
    using EntityBlockCollisionCallback =
        ::std::function<void(::BlockSource&, ::Block const&, ::BlockPos const&, ::Actor&)>;

public:
    LLNDAPI class EntityContext&       getEntityContext() { return mEntityContext; }
    LLNDAPI class EntityContext const& getEntityContext() const { return mEntityContext; }

    LLAPI void refresh();

    LLAPI optional_ref<Actor> clone(Vec3 const& pos, std::optional<DimensionType> dimId = std::nullopt) const;

    LLNDAPI std::string const& getTypeName() const;

    LLNDAPI class Vec3 getFeetPos() const;

    LLNDAPI class Vec3 getHeadPos() const;

    LLNDAPI class BlockPos getFeetBlockPos() const;

    LLNDAPI bool isSimulatedPlayer() const;

    LLNDAPI bool isOnGround() const;

    LLAPI void setOnFire(int time, bool hasEffect = true);
    LLAPI void stopFire();

    LLNDAPI Vec3  getVelocity() const;
    LLNDAPI float getPosDeltaPerSecLength() const;

    LLAPI bool hurtByCause(
        float                                   damage,
        ::SharedTypes::Legacy::ActorDamageCause cause    = ::SharedTypes::Legacy::ActorDamageCause::Override,
        optional_ref<Actor>                     attacker = std::nullopt
    );

    LLNDAPI class HitResult traceRay(
        float                                                                          tMax         = 5.5f,
        bool                                                                           includeActor = true,
        bool                                                                           includeBlock = true,
        std::function<bool(class BlockSource const&, class Block const&, bool)> const& blockCheckFunction =
            [](auto&&...) -> bool { return true; }
    ) const;

    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId, class Vec2 const& rotation);
    LLAPI void teleport(class Vec3 const& pos, DimensionType dimId);

    LLAPI void setName(std::string const& name);

    LLNDAPI float evalMolang(std::string const& expression);

    LLNDAPI AABB const& getAABB() const { return mBuiltInComponents->mAABBShapeComponent->mAABB; }

    LLAPI static ::Actor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    [[nodiscard]] Level& getLevel() const { return *reinterpret_cast<Level*>(mLevel); }

    [[nodiscard]] Vec3 const& getPosition() const { return mBuiltInComponents->mStateVectorComponent->mPos; }

    [[nodiscard]] Vec3 const& getPosDelta() const { return mBuiltInComponents->mStateVectorComponent->mPosDelta; }

    [[nodiscard]] Vec2 const& getRotation() const { return mBuiltInComponents->mActorRotationComponent->mRot; }

    [[nodiscard]] bool hasCategory(ActorCategory category) const { return (mCategories & category) == category; }

    LLNDAPI ::DimensionType getDimensionId() const;

    LLNDAPI bool isType(::ActorType type) const;

    LLNDAPI bool isPlayer() const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::EntityContext>                               mEntityContext;
    ::ll::TypedStorage<8, 72, ::VariantParameterList>                        mInitParams;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mCustomInitEventName;
    ::ll::TypedStorage<1, 1, ::ActorInitializationMethod>                    mInitMethod;
    ::ll::TypedStorage<1, 1, bool>                                           mForceInitMethodToSpawnOnReload;
    ::ll::TypedStorage<1, 1, bool>                                           mAdded;
    ::ll::TypedStorage<8, 8, ::ActorDefinitionGroup*>                        mDefinitions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDescriptor>> mCurrentDescription;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RopeSystem>>               mLeashRopeSystem;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mAlias;
    ::ll::TypedStorage<4, 68, ::std::optional<::glm::mat4x4>>                mPreviousRenderTransform;
    ::ll::TypedStorage<4, 4, int>                                            mLastHurtByPlayerTime;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::std::vector<::std::vector<::glm::mat4x4>>>>
                                                                           mPreviousBoneMatrices;
    ::ll::TypedStorage<8, 48, ::SynchedActorDataEntityWrapper>             mEntityData;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SpatialActorNetworkData>> mNetworkData;
    ::ll::TypedStorage<4, 12, ::Vec3>                                      mSentDelta;
    ::ll::TypedStorage<4, 4, float>                                        mScale;
    ::ll::TypedStorage<4, 4, float>                                        mScalePrev;
    ::ll::TypedStorage<1, 1, bool>                                         mIgnoreLighting;
    ::ll::TypedStorage<1, 1, bool>                                         mFilterLighting;
    ::ll::TypedStorage<4, 4, float>                                        mStepSoundVolume;
    ::ll::TypedStorage<4, 4, float>                                        mStepSoundPitch;
    ::ll::TypedStorage<8, 8, ::AABB*>                                      mLastHitBB;
    ::ll::TypedStorage<8, 8, uint64>                                       mNameTagHash;
    ::ll::TypedStorage<4, 4, float>                                        mShadowOffset;
    ::ll::TypedStorage<4, 4, float>                                        mPushThrough;
    ::ll::TypedStorage<4, 4, int>                                          mTickCount;
    ::ll::TypedStorage<4, 4, int>                                          mInvulnerableTime;
    ::ll::TypedStorage<4, 4, int>                                          mLastHealth;
    ::ll::TypedStorage<1, 1, bool>                                         mInvulnerable;
    ::ll::TypedStorage<4, 4, int>                                          mFlameTexFrameIndex;
    ::ll::TypedStorage<4, 4, float>                                        mFlameFrameIncrementTime;
    ::ll::TypedStorage<1, 1, bool>                                         mAlwaysFireImmune;
    ::ll::TypedStorage<1, 1, bool>                                         mInheritRotationWhenRiding;
    ::ll::TypedStorage<1, 1, bool>                                         mForcedLoading;
    ::ll::TypedStorage<1, 1, bool>                                         mHighlightedThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                         mInitialized;
    ::ll::TypedStorage<1, 1, bool>                                         mProcessedOnChunkDiscard;
    ::ll::TypedStorage<4, 4, float>                                        mSoundVolume;
    ::ll::TypedStorage<4, 4, int>                                          mShakeTime;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLegacyUniqueID;
    ::ll::TypedStorage<8, 16, ::WeakRef<::Dimension>>                      mDimension;
    ::ll::TypedStorage<8, 8, ::ILevel*>                                    mLevel;
    ::ll::TypedStorage<8, 48, ::HashedString>                              mActorRendererId;
    ::ll::TypedStorage<4, 4, ::ActorCategory>                              mCategories;
    ::ll::TypedStorage<4, 4, ::ActorVersion>                               mVersion;
    ::ll::TypedStorage<8, 32, ::BuiltInActorComponents>                    mBuiltInComponents;
    ::ll::TypedStorage<8, 48, ::HashedString> mActorRendererIdThatAnimationComponentWasInitializedWith;
    ::ll::TypedStorage<1, 1, bool>            mChanged;
    ::ll::TypedStorage<1, 1, bool>            mRemoved;
    ::ll::TypedStorage<1, 1, bool>            mMovedToLimbo;
    ::ll::TypedStorage<1, 1, bool>            mMovedToUnloadedChunk;
    ::ll::TypedStorage<1, 1, bool>            mBlocksBuilding;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>     mAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>     mUIAnimationComponent;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mTargetId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mInLovePartner;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>             mPersistingTradeOffers;
    ::ll::TypedStorage<4, 4, int>                                          mPersistingTradeRiches;
    ::ll::TypedStorage<1, 1, bool>                                         mPersistingTrade;
    ::ll::TypedStorage<1, 1, bool>                                         mEffectsDirty;
    ::ll::TypedStorage<1, 1, bool>                                         mLootDropped;
    ::ll::TypedStorage<1, 1, bool>                                         mLoadedFromNBTThisFrame;
    ::ll::TypedStorage<4, 16, ::mce::Color>                                mHurtColor;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActorDefinitionDiffList>> mDefinitionList;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompoundTag>>             mLoadedActorPropertyTag;
    ::ll::TypedStorage<8, 16, ::ActorDefinitionPtr>                        mActorDefinitionPtr;
    ::ll::TypedStorage<8, 32, ::std::string>                               mFilteredNameTag;
    ::ll::TypedStorage<8, 24, ::ActorTerrainInterlockData>                 mTerrainInterlockData;
    ::ll::TypedStorage<1, 1, bool>                                         mWasHurtThisTick;
    ::ll::TypedStorage<1, 1, bool>                                         mWasHurtLastTick;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByPlayerId;
    ::ll::TypedStorage<8, 8, uint64>                                       mLastHurtTimestamp;
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::ActorDamageCause>      mLastHurtCause;
    ::ll::TypedStorage<4, 4, float>                                        mLastHurt;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtMobTimestamp;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTime;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                         mIsPredictableProjectile;
    ::ll::TypedStorage<1, 1, bool>                                         mIsRenderingInUI;
#ifdef LL_PLAT_C
    ::ll::TypedStorage<1, 1, bool> mIsOnScreen;
    ::ll::TypedStorage<1, 1, bool> mUpdateBonesAndEffects;
#endif
    ::ll::TypedStorage<1, 1, bool>                             mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool>                             mCanPickupItems;
    ::ll::TypedStorage<1, 1, bool>                             mHasSetCanPickupItems;
    ::ll::TypedStorage<1, 1, bool>                             mChainedDamageEffects;
    ::ll::TypedStorage<4, 4, int>                              mAffectedByWaterBottleTicksToEffect;
    ::ll::TypedStorage<4, 4, ::SpawnRuleEnum>                  mSpawnRulesEnum;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActionQueue>> mActionQueue;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>             mMolangVariables;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                  mFishingHookID;
    // NOLINTEND

public:
    // prevent constructor by default
    Actor();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool hasComponent(::HashedString const& name) const;

    virtual void outOfWorld();

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    virtual void reloadHardcodedClient(::ActorInitializationMethod method);

    virtual void initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void _doInitialMove();

    virtual ~Actor();

    virtual void resetUserPos(::ActorResetRule resetRule);

    virtual ::ActorType getOwnerEntityType();

    virtual void remove();

    virtual ::Vec3 getFiringPos() const;

    virtual float getInterpolatedBodyRot(float a = 0.0f) const;

    virtual float getInterpolatedHeadRot(float a = 0.0f) const;

    virtual float getInterpolatedBodyYaw(float a = 0.0f) const;

    virtual float getYawSpeedInDegreesPerSecond() const;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual bool isFireImmune() const;

    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    virtual bool canDisableShield();

    virtual void
    teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    virtual void lerpMotion(::Vec3 const& delta);

    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket();

    virtual void normalTick();

    virtual void baseTick();

    virtual void passengerTick();

    virtual bool startRiding(::Actor& vehicle, bool forceRiding);

    virtual void addPassenger(::Actor& passenger);

    virtual ::std::string getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    virtual ::std::string getEntityLocNameString() const;

    virtual bool isInvisible() const;

    virtual bool canShowNameTag() const;

    virtual ::mce::Color getNameTagTextColor() const;

    virtual float getShadowRadius() const;

    virtual ::Vec3 getHeadLookVector(float a = 0.0f) const;

    virtual bool canInteractWithOtherEntitiesInGame() const;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const;

    virtual void playerTouch(::Player& player);

    virtual bool isImmobile() const;

    virtual bool isSilentObserver() const;

    virtual bool isSleeping() const;

    virtual void setSleeping(bool val);

    virtual void setSneaking(bool value);

    virtual bool isBlocking() const;

    virtual bool isDamageBlocked(::ActorDamageSource const& source) const;

    virtual bool isAlive() const;

    virtual bool isOnFire() const;

    virtual bool isSurfaceMob() const;

    virtual bool isTargetable() const;

    virtual void setTarget(::Actor* entity);

#ifdef LL_PLAT_S
    virtual bool isValidTarget(::Actor*) const;
#else // LL_PLAT_C
    virtual bool isValidTarget(::Actor* attacker) const;
#endif

    virtual ::ActorHurtResult attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    virtual void performRangedAttack(::Actor& target, float);

    virtual void setOwner(::ActorUniqueID const ownerId);

    virtual void setSitting(bool value);

    virtual void onTame();

    virtual void onFailedTame();

    virtual void setStanding(bool value);

    virtual bool canPowerJump() const;

    virtual bool isEnchanted() const;

    virtual void playAmbientSound();

    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const;

    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const& block) const;

    virtual ::ActorHurtResult doFireHurt(int amount);

    virtual void onLightningHit();

    virtual void feed(int itemId);

    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    virtual ::HashedString const& getActorRendererId() const;

    virtual void despawn();

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;

    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    virtual void setCarriedItem(::ItemStack const& item);

    virtual ::ItemStack const& getCarriedItem() const;

    virtual void setOffhandSlot(::ItemStack const& item);

    virtual ::ItemStack const& getEquippedTotem() const;

    virtual bool consumeTotem();

    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    virtual ::HashedString const& queryEntityRenderer() const;

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual bool canFreeze() const;

    virtual ::AABB getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;

    virtual void handleInsidePortal(::BlockPos const& portalPos);

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual void changeDimension(::DimensionType toId);

    virtual void changeDimension(::ChangeDimensionPacket const&);

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    virtual void onSynchedDataUpdate(int dataId);

    virtual bool canAddPassenger(::Actor& passenger) const;

    virtual bool canPickupItem(::ItemStack const& item) const;

    virtual bool canBePulledIntoVehicle() const;

    virtual bool inCaravan() const;

    virtual void sendMotionPacketIfNeeded();

    virtual bool canSynchronizeNewEntity() const;

    virtual void startSwimming();

    virtual void stopSwimming();

    virtual void buildDebugInfo(::std::string& out) const;

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    virtual int getDeathTime() const;

    virtual bool canBeAffected(uint id) const;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    virtual void onEffectRemoved(::MobEffectInstance& effect);

    virtual bool canObstructSpawningAndBlockPlacement() const;

    virtual ::AnimationComponent& getAnimationComponent();

    virtual void openContainerComponent(::Player& player);

#ifdef LL_PLAT_S
    virtual bool swing(::ActorSwingSource);
#else // LL_PLAT_C
    virtual bool swing(::ActorSwingSource swingSource);
#endif

    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    virtual void getDebugText(::std::vector<::std::string>& outputInfo);

    virtual float getMapDecorationRotation() const;

    virtual float getPassengerYRotation(::Actor const& passenger) const;

    virtual bool add(::ItemStack& item);

    virtual bool drop(::ItemStack const& item, bool const randomly);

    virtual ::InteractionResult
    getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    virtual bool canDestroyBlock(::Block const& block) const;

    virtual void setAuxValue(int aux);

    virtual void renderDebugServerState(::IOptionsReader const& options);

    virtual void kill();

    virtual void die(::ActorDamageSource const& source);

    virtual bool shouldDropDeathLoot() const;

    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    virtual void onPush(::Actor& source);

    virtual ::std::optional<::BlockPos> getLastDeathPos() const;

    virtual ::std::optional<::DimensionType> getLastDeathDimension() const;

    virtual bool hasDiedBefore() const;

    virtual void doEnterWaterSplashEffect();

    virtual void doExitWaterSplashEffect();

    virtual void doWaterSplashEffect();

    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    virtual void addAdditionalSaveData(::CompoundTag& tag) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Actor(::ILevel& level, ::EntityContext& entityContext);

    MCAPI Actor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCAPI bool _applyPendingPropertyChanges();

    MCAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);

    MCFOLD ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();

    MCAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );

    MCAPI void _initializeMaxAutoStep(float maxAutoStep);

    MCAPI bool _isDeathLootAllowed() const;

    MCAPI void _notifyMobEffectsOnHurt(::ActorDamageSource const& source, float damage);

    MCAPI void _refreshAABB();

    MCAPI void _sendDirtyActorData();

    MCAPI void _setActorTypeId(::ActorType type);

    MCAPI void _setDimensionTransitionComponent(::DimensionType fromId, ::DimensionType toId, int portalCooldown);

    MCAPI void _setHandContainerItem(::ItemStack const& item, ::HandSlot handSlot);

    MCAPI void _setPos(::Vec3 const& pos);

    MCAPI void _setupServerAnimationComponent();

    MCAPI void addEffect(::MobEffectInstance const& effect);

    MCAPI bool addTag(::std::string const& tag);

    MCAPI void applyOnBornPropertyChanges();

    MCAPI void buildDebugGroupInfo(::std::string& out) const;

    MCAPI void burn(int damage, bool inFire);

    MCAPI bool canAttack(::Actor const& entity) const;

    MCAPI bool canBeginOrContinueClimbingLadder() const;

    MCAPI bool canFly() const;

    MCAPI bool canMate(::Actor const& partner) const;

    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;

    MCAPI bool canSeeDaylight() const;

    MCAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);

    MCAPI void chorusFruitTeleport(::Vec3 const& range);

    MCAPI bool closerThan(::Actor const& e, float distance) const;

    MCAPI bool closerThan(::Actor const& e, float distanceXZ, float distanceY) const;

    MCAPI void consumeItem(::ItemActor& itemActor, int count);

    MCAPI ::UpdateEquipPacket createUpdateEquipPacket(int containerID);

    MCAPI ::UpdateTradePacket createUpdateTradePacket(int containerID);

    MCAPI void deregisterTagsFromLevelCache();

    MCAPI float distanceSqrToBlockPosCenter(::BlockPos const& pos) const;

    MCAPI float distanceTo(::Actor const& e) const;

    MCAPI void dropTowards(::ItemStack const& item, ::Vec3 towards);

    MCAPI void equip(::EquipmentTable const& equipmentTable);

    MCAPI void equip(::std::string const& lootTableFilePath);

    MCAPI void equipFromEquipmentDefinition();

    MCAPI float evaluateSeatRotation(::RideableComponent const& rideable, bool useVehicleRenderParams);

    MCAPI bool executeEvent(::std::string const& name, ::VariantParameterList const& list);

    MCAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);

    MCAPI ::FishingHook* fetchFishingHook();

    MCAPI ::std::vector<::DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const& distance, ::ActorType actorTypeId);

#ifdef LL_PLAT_C
    MCAPI int getActiveEffectCount() const;
#endif

    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

#ifdef LL_PLAT_C
    MCAPI ::Matrix getActorToWorldTransform(float frameAlpha, bool useActorRotation, ::Vec3 const& offset) const;
#endif

    MCFOLD ::std::vector<::MobEffectInstance> const& getAllEffects() const;

    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location, float alpha) const;

    MCAPI ::AttributeInstanceConstRef getAttribute(::Attribute const& attribute) const;

    MCAPI ::gsl::not_null<::BaseAttributeMap const*> getAttributes() const;

#ifdef LL_PLAT_C
    MCAPI ::gsl::not_null<::BaseAttributeMap*> getAttributes();
#endif

    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;

    MCAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;

    MCAPI int getChestSlots() const;

    MCAPI float getCurrentSwimAmount() const;

    MCAPI ::Dimension& getDimension() const;

    MCAPI ::BlockSource& getDimensionBlockSource() const;

    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;

    MCAPI ::MobEffectInstance const* getEffect(uint effectId) const;

    MCAPI ::StackRefResult<::EntityRegistry> getEntityRegistry();

    MCAPI ::ActorType getEntityTypeId() const;

    MCAPI int getEquipSlots() const;

    MCAPI int getEquipmentCount() const;

    MCAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;

    MCAPI ::Vec3 getEyePos() const;

    MCAPI float getFallDistance() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getFilteredNameTag() const;
#endif

    MCAPI bool getFirstAvailableSeatPos(::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI ::Actor* getFirstPassenger() const;

#ifdef LL_PLAT_C
    MCAPI ::Block const* getInsideBlock() const;
#endif

    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;

    MCAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;

    MCAPI ::Vec2 getInterpolatedRotation(float a) const;

    MCAPI int getInventorySize() const;

    MCAPI ::ActorUniqueID getLeashHolder() const;

    MCAPI uint64 getLevelTimeStamp() const;

    MCAPI ::std::vector<::ActorLink> getLinks() const;

    MCAPI ::LootTable* getLootTable();

    MCAPI int getMarkVariant() const;

    MCAPI float getMaxAutoStep() const;

#ifdef LL_PLAT_C
    MCAPI int64 getMetadataId() const;
#endif

    MCAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const& attribute);

    MCAPI ::std::string const& getNameTag() const;

    MCAPI int getOnDeathExperience();

    MCAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCAPI ::ActorUniqueID const& getOrCreateUniqueID() const;

    MCAPI ::Mob* getOwner() const;

    MCAPI ::ActorUniqueID const getOwnerId() const;

    MCAPI int getPassengerIndex(::Actor const& passenger) const;

    MCAPI ::Player* getPlayerOwner() const;

    MCAPI ::Random& getRandom() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;

    MCAPI float getRidingHeight() const;

    MCAPI ::ActorRuntimeID getRuntimeID() const;

    MCAPI int getStrength() const;

    MCAPI float getSwimAmount(float a) const;

    MCAPI ::std::vector<::std::string> const getTags() const;

    MCAPI ::MerchantRecipeList* getTradeOffers();

    MCAPI int getVariant() const;

    MCAPI ::Actor* getVehicle() const;

    MCAPI ::ActorRuntimeID getVehicleRuntimeID() const;

    MCAPI ::Vec3 getViewVector(float a) const;

    MCFOLD float getYHeadRot() const;

#ifdef LL_PLAT_C
    MCAPI ::InterpolationPair getYHeadRotationsNewOld() const;
#endif

    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCAPI bool hasAnyEffects() const;

    MCAPI bool hasDimension() const;

    MCAPI bool hasFamily(::HashedString const& family) const;

    MCAPI bool hasPassenger() const;

    MCAPI bool hasPlayerPassenger() const;

    MCAPI bool hasPriorityAmmunition() const;

    MCAPI bool hasRuntimeID() const;

    MCAPI bool hasSaddle() const;

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI bool hasTags() const;

    MCAPI bool hasType(::ActorType types) const;

    MCAPI bool hasUniqueID() const;

    MCAPI void heal(int heal);

    MCAPI ::ActorHurtResult
    hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI bool inDownwardFlowingLiquid() const;

    MCAPI void initParams(::RenderParams& params);

    MCAPI bool isActorLocationInMaterial(
        ::SharedTypes::Legacy::ActorLocation  actorLocation,
        ::SharedTypes::v1_26_20::MaterialType type
    ) const;

    MCAPI bool isAdventure() const;

    MCAPI bool isAngry() const;

    MCAPI bool isBaby() const;

    MCAPI bool isCreative() const;

    MCAPI bool isDoorOpener() const;

    MCAPI bool isImmersedInWater() const;

    MCAPI bool isInClouds() const;

    MCAPI bool isInLove() const;

    MCAPI bool isInPrecipitation() const;

    MCAPI bool isInRain() const;

    MCAPI bool isInSnow() const;

    MCAPI bool isInThunderstorm() const;

    MCAPI bool isInWater() const;

    MCAPI bool isInWaterOrRain() const;

    MCAPI bool isInsidePortal() const;

    MCAPI bool isInvertedHealAndHarm() const;

    MCAPI bool isJumping() const;

    MCAPI bool isLeashed() const;

    MCAPI bool isLocalPlayer() const;

    MCAPI bool isOrphan() const;

    MCAPI bool isOverWater() const;

    MCAPI bool isPassenger(::Actor const& passenger) const;

    MCAPI bool isResting() const;

    MCAPI bool isRiding(::Actor* targetVehicle) const;

    MCAPI bool isSilent() const;

    MCAPI bool isSitting() const;

    MCAPI bool isSpectator() const;

    MCAPI bool isStanding() const;

    MCAPI bool isSurvival() const;

    MCAPI bool isSwimmer() const;

    MCAPI bool isTame() const;

    MCAPI bool isTrading() const;

    MCAPI bool isUnderLiquid(::SharedTypes::v1_26_20::MaterialType type) const;

    MCAPI bool isUseNewTradeScreen() const;

    MCAPI bool isWearingLeatherArmor() const;

    MCAPI bool isWorldBuilder() const;

    MCAPI void killed(::Actor& entity);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, int steps);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, float headYaw, int steps);

    MCAPI void
    loadLinks(::CompoundTag const& entityTag, ::std::vector<::ActorLink>& links, ::DataLoadHelper& dataLoadHelper);

    MCFOLD void migrateUniqueID(::ActorUniqueID id);

    MCAPI void move(::Vec3 const& posDelta);

    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    MCAPI bool onClimbableBlock() const;

    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    MCAPI void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data
    );

    MCAPI void playSynchronizedSound(
        ::SoundEventIdentifier const& soundEvent,
        ::Vec3 const&                 pos,
        int                           data,
        bool                          isGlobal,
        ::Player*                     primaryLocalPlayer
    );

    MCAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&
    );

    MCAPI void positionPassenger(::Actor& passenger);

    MCAPI void postSplashGameEvent();

    MCAPI bool pullInEntity(::Actor& e);

    MCAPI void pushBackActionEventToActionQueue(::ActionEvent actionEvent);

    MCAPI void pushOutOfBlocks(::Vec3 const& vec);

    MCAPI void reload();

    MCAPI void removeAllEffects();

    MCAPI void removeAllPassengers(bool actorIsBeingDestroyed, bool exitFromPassenger);

    MCAPI void removeEffect(int effectId);

    MCAPI bool removeTag(::std::string const& tag);

    MCAPI bool save(::CompoundTag& entityTag) const;

    MCAPI void setActorRendererId(::HashedString actorRendererId);

    MCAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCAPI void setDead(bool isDead);

    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

#ifdef LL_PLAT_C
    MCAPI void setEquipFromPacket(::UpdateEquipPacket const& packet);
#endif

    MCAPI void setFallDistance(float distance);

    MCAPI void setInLove(::Actor* lovePartner);

    MCAPI void setInvisible(bool value);

    MCAPI void setLastHurtByMob(::Mob* mob);

    MCAPI void setLastHurtByPlayer(::Player* player);

    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);

    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setNameTag(::std::string const& name);

#ifdef LL_PLAT_C
    MCAPI void setOffersFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setPersistent();

    MCAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const& name);

    MCAPI void setRuntimeID(::ActorRuntimeID id);

    MCAPI void setStrength(int strength);

#ifdef LL_PLAT_C
    MCAPI void setTradingPlayer(::Player* player);
#endif

    MCFOLD void setUniqueID(::ActorUniqueID id);

    MCAPI void setYHeadRot(float yHeadRot);

    MCAPI void setYHeadRotations(float yHeadRot, float oldYHeadRot);

    MCAPI bool shouldOrphan(::BlockSource& source);

    MCAPI bool shouldTick() const;

    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    MCAPI void spawnTrailBubbles();

    MCAPI void
    stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles, bool isBeingTeleported);

    MCAPI void synchronousSetSize(float w, float h);

    MCAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    MCAPI void thawFreezeEffect();

    MCAPI bool tick(::BlockSource& region);

    MCAPI void transferTickingArea(::Dimension const& toDimension);

    MCAPI void triggerActorRemovedEvent();

    MCAPI ::std::vector<::ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int slotNumber) const;

    MCAPI ::std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor item) const;

    MCAPI bool tryTeleportTo(::Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    MCAPI void updateDescription();

    MCAPI void updateDimensionChunkMove();

    MCAPI void updateInsideBlock();

    MCAPI void updateInvisibilityStatus();

    MCAPI void updateWaterState();

    MCAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::BlockPos> getBlocksCurrentlyStandingOn(
        ::AABB const&                                      aabb,
        ::IConstBlockSource const&                         region,
        float                                              ignoreGapBelow,
        ::optional_ref<::GetCollisionShapeInterface const> other
    );

#ifdef LL_PLAT_C
    MCAPI static ::Vec3 getInterpolatedPosition(
        float                                 a,
        ::StateVectorComponent const&         stateVectorComponent,
        ::DynamicRenderOffsetComponent const* dynamicRenderOffsets
    );
#endif

    MCAPI static bool isInLiquid(
        ::SharedTypes::v1_26_20::MaterialType liquidType,
        ::IConstBlockSource const&            region,
        ::AABB const&                         mainAABB,
        ::std::vector<::AABB> const&          subAABBs
    );

    MCAPI static ::Actor* tryGetFromEntity(::StackRefResult<::EntityContext> entity, bool includeRemoved);

    MCAPI static ::Actor*
    tryGetFromEntity(::StrictEntityContext const& entity, ::EntityRegistry& registry, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);

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
    MCAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI void $outOfWorld();

    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCFOLD void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $_serverInitItemStackIds();

    MCAPI void $_doInitialMove();

    MCFOLD void $resetUserPos(::ActorResetRule resetRule);

    MCAPI ::ActorType $getOwnerEntityType();

    MCAPI void $remove();

    MCAPI ::Vec3 $getFiringPos() const;

    MCAPI float $getInterpolatedBodyRot(float a) const;

    MCFOLD float $getInterpolatedHeadRot(float a) const;

    MCFOLD float $getInterpolatedBodyYaw(float a) const;

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCFOLD ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI bool $isFireImmune() const;

    MCFOLD void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI bool $canDisableShield();

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $passengerTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $addPassenger(::Actor& passenger);

    MCAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    MCAPI ::std::string $getEntityLocNameString() const;

    MCAPI bool $isInvisible() const;

    MCAPI bool $canShowNameTag() const;

    MCFOLD ::mce::Color $getNameTagTextColor() const;

    MCAPI float $getShadowRadius() const;

    MCAPI ::Vec3 $getHeadLookVector(float a) const;

    MCFOLD bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD void $playerTouch(::Player& player);

    MCAPI bool $isImmobile() const;

    MCAPI bool $isSilentObserver() const;

    MCFOLD bool $isSleeping() const;

    MCFOLD void $setSleeping(bool val);

    MCAPI void $setSneaking(bool value);

    MCFOLD bool $isBlocking() const;

    MCFOLD bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCAPI bool $isAlive() const;

    MCAPI bool $isOnFire() const;

    MCFOLD bool $isSurfaceMob() const;

    MCFOLD bool $isTargetable() const;

    MCAPI void $setTarget(::Actor* entity);

    MCFOLD bool $isValidTarget(::Actor*) const;

    MCAPI ::ActorHurtResult $attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCAPI void $performRangedAttack(::Actor& target, float);

    MCAPI void $setOwner(::ActorUniqueID const ownerId);

    MCFOLD void $setSitting(bool value);

    MCFOLD void $onTame();

    MCFOLD void $onFailedTame();

    MCAPI void $setStanding(bool value);

    MCAPI bool $canPowerJump() const;

    MCAPI bool $isEnchanted() const;

    MCAPI void $playAmbientSound();

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const& block) const;

    MCAPI ::ActorHurtResult $doFireHurt(int amount);

    MCAPI void $onLightningHit();

    MCAPI void $feed(int itemId);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD ::HashedString const& $getActorRendererId() const;

    MCAPI void $despawn();

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCFOLD ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCFOLD int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCFOLD float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;

    MCFOLD void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI ::HashedString const& $queryEntityRenderer() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD bool $canFreeze() const;

    MCAPI ::AABB $getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;

    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $changeDimension(::DimensionType toId);

    MCFOLD void $changeDimension(::ChangeDimensionPacket const&);

    MCFOLD ::ActorUniqueID $getControllingPlayer() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCFOLD bool $canPickupItem(::ItemStack const& item) const;

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCFOLD bool $inCaravan() const;

    MCAPI void $sendMotionPacketIfNeeded();

    MCFOLD bool $canSynchronizeNewEntity() const;

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCFOLD void $buildDebugInfo(::std::string& out) const;

    MCAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCFOLD int $getDeathTime() const;

    MCAPI bool $canBeAffected(uint id) const;

    MCAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);

    MCAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI void $openContainerComponent(::Player& player);

    MCFOLD bool $swing(::ActorSwingSource);

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCAPI ::InteractionResult
    $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const& location);

    MCFOLD bool $canDestroyBlock(::Block const& block) const;

    MCFOLD void $setAuxValue(int aux);

    MCFOLD void $renderDebugServerState(::IOptionsReader const& options);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCFOLD void $onPush(::Actor& source);

    MCFOLD ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCFOLD ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCFOLD bool $hasDiedBefore() const;

    MCFOLD void $doEnterWaterSplashEffect();

    MCFOLD void $doExitWaterSplashEffect();

    MCAPI void $doWaterSplashEffect();

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;


    // NOLINTEND
};
