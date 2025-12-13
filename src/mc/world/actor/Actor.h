#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ActorLocation.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/util/VariantParameterList.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorTerrainInterlockData.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/BuiltInActorComponents.h"
#include "mc/world/actor/SpawnRuleEnum.h"
#include "mc/world/actor/SynchedActorDataEntityWrapper.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/material/MaterialType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class ActionEvent;
class ActionQueue;
class ActorDamageSource;
class ActorDefinitionDescriptor;
class ActorDefinitionDiffList;
class ActorDefinitionGroup;
class ActorInteraction;
class ActorRuntimeID;
class AnimationComponent;
class Attribute;
class AttributeInstance;
class Block;
class BlockPos;
class BlockSource;
class ChangeDimensionPacket;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class DynamicProperties;
class EntityRegistry;
class GameEvent;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
class IOptionsReader;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class ListTag;
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
struct DistanceSortedActor;
struct EquipmentTable;
struct MutableAttributeWithContext;
struct ValidMutableAttributeWithContext;
namespace Bedrock::Safety { class RedactableString; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
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

    LLAPI void setOnFire(int time, bool isEffect = true);
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

    [[nodiscard]] Vec2 const& getRotation() const {
        return mBuiltInComponents->mActorRotationComponent->mRotationDegree;
    }

    [[nodiscard]] bool hasCategory(ActorCategory category) const { return (mCategories & category) == category; }

    LLNDAPI ::DimensionType getDimensionId() const;

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
    ::ll::TypedStorage<1, 1, bool>                                         mForceSendMotionPacket;
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

    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    virtual void initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const&);

    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void _doInitialMove();

    virtual ~Actor();

    virtual void resetUserPos(::ActorResetRule);

    virtual ::ActorType getOwnerEntityType();

    virtual void remove();

    virtual ::Vec3 getFiringPos() const;

    virtual float getInterpolatedBodyRot(float a = 0.0f) const;

    virtual float getInterpolatedHeadRot(float = 0.0f) const;

    virtual float getInterpolatedBodyYaw(float = 0.0f) const;

    virtual float getYawSpeedInDegreesPerSecond() const;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    virtual bool isFireImmune() const;

    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    virtual bool canDisableShield();

    virtual void teleportTo(::Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

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

    virtual ::std::string getFormattedNameTag() const;

    virtual ::mce::Color getNameTagTextColor() const;

    virtual float getShadowRadius() const;

    virtual ::Vec3 getHeadLookVector(float a = 0.0f) const;

    virtual bool canInteractWithOtherEntitiesInGame() const;

    virtual float getBrightness(float a, ::IConstBlockSource const& region) const;

    virtual void playerTouch(::Player&);

    virtual bool isImmobile() const;

    virtual bool isSilentObserver() const;

    virtual bool isSleeping() const;

    virtual void setSleeping(bool);

    virtual void setSneaking(bool value);

    virtual bool isBlocking() const;

    virtual bool isDamageBlocked(::ActorDamageSource const&) const;

    virtual bool isAlive() const;

    virtual bool isOnFire() const;

    virtual bool isSurfaceMob() const;

    virtual bool isTargetable() const;

    virtual void setTarget(::Actor* entity);

    virtual bool isValidTarget(::Actor*) const;

    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&);

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

    virtual ::SharedTypes::Legacy::ActorDamageCause getBlockDamageCause(::Block const&) const;

    virtual bool doFireHurt(int amount);

    virtual void onLightningHit();

    virtual void feed(int itemId);

    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    virtual ::HashedString const& getActorRendererId() const;

    virtual void despawn();

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    virtual int getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    virtual float getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    virtual void setCarriedItem(::ItemStack const& item);

    virtual ::ItemStack const& getCarriedItem() const;

    virtual void setOffhandSlot(::ItemStack const& item);

    virtual ::ItemStack const& getEquippedTotem() const;

    virtual bool consumeTotem();

    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    virtual ::HashedString const& queryEntityRenderer() const;

    virtual ::ActorUniqueID getSourceUniqueID() const;

    virtual bool canFreeze() const;

    virtual ::AABB getLiquidAABB(::MaterialType const) const;

    virtual void handleInsidePortal(::BlockPos const& portalPos);

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual void changeDimension(::DimensionType toId);

    virtual void changeDimension(::ChangeDimensionPacket const&);

    virtual ::ActorUniqueID getControllingPlayer() const;

    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    virtual void onSynchedDataUpdate(int dataId);

    virtual bool canAddPassenger(::Actor& passenger) const;

    virtual bool canPickupItem(::ItemStack const&) const;

    virtual bool canBePulledIntoVehicle() const;

    virtual bool inCaravan() const;

    virtual void sendMotionPacketIfNeeded();

    virtual bool canSynchronizeNewEntity() const;

    virtual void startSwimming();

    virtual void stopSwimming();

    virtual void buildDebugInfo(::std::string&) const;

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    virtual int getDeathTime() const;

    virtual bool canBeAffected(uint id) const;

    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    virtual void onEffectRemoved(::MobEffectInstance& effect);

    virtual bool canObstructSpawningAndBlockPlacement() const;

    virtual ::AnimationComponent& getAnimationComponent();

    virtual void openContainerComponent(::Player& player);

    virtual bool swing();

    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    virtual void getDebugText(::std::vector<::std::string>& outputInfo);

    virtual float getMapDecorationRotation() const;

    virtual float getPassengerYRotation(::Actor const& passenger) const;

    virtual bool add(::ItemStack& item);

    virtual bool drop(::ItemStack const& item, bool const randomly);

    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const&);

    virtual bool canDestroyBlock(::Block const&) const;

    virtual void setAuxValue(int);

    virtual void renderDebugServerState(::IOptionsReader const&);

    virtual void kill();

    virtual void die(::ActorDamageSource const& source);

    virtual bool shouldDropDeathLoot() const;

    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    virtual void onPush(::Actor&);

    virtual ::std::optional<::BlockPos> getLastDeathPos() const;

    virtual ::std::optional<::DimensionType> getLastDeathDimension() const;

    virtual bool hasDiedBefore() const;

    virtual void doEnterWaterSplashEffect();

    virtual void doExitWaterSplashEffect();

    virtual void doWaterSplashEffect();

    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool);

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

    MCAPI ::BuiltInActorComponents _addActorBuiltInComponents();

    MCAPI void _addActorNonBuiltInComponents();

    MCAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);

    MCFOLD ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();

    MCAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );

    MCAPI void _initializeLeashRopeSystem(::Actor* holder);

    MCAPI bool _isHeadInWater() const;

    MCAPI bool _isItemStackNetManagerEnabled() const;

    MCAPI void _onVibrationDetected();

    MCAPI void _sendDirtyActorData();

    MCAPI void _serializeComponents(::CompoundTag& tag) const;

    MCAPI void _setDimensionTransitionComponent(::DimensionType fromId, ::DimensionType toId, int portalCooldown);

    MCAPI void _setHandContainerItem(::ItemStack const& item, ::HandSlot handSlot);

    MCAPI void _setHeightOffset(float heightOffset);

    MCAPI void _setupServerAnimationComponent();

    MCAPI void _setupTagsComponent();

    MCAPI void _syncTickCountIfAnimationComponentShared();

    MCAPI bool _tryApplyDye(::Player& player, ::ItemStack const& dyeItem, ::ActorInteraction& interaction);

    MCAPI void _tryPlantWitherRose();

    MCAPI void _updateComposition(bool reload);

    MCAPI void addEffect(::MobEffectInstance const& effect);

    MCAPI bool addTag(::std::string const& tag);

    MCAPI void buildDebugGroupInfo(::std::string& out) const;

    MCAPI void burn(int damage, bool inFire);

    MCAPI bool canAttack(::Actor const& entity) const;

    MCAPI bool canBeginOrContinueClimbingLadder() const;

    MCAPI bool canCurrentlySwim() const;

    MCAPI bool canFly() const;

    MCAPI bool canMate(::Actor const& partner) const;

    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    MCAPI bool canSee(::Actor const& target, ::ShapeType obstructionType) const;

    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;

    MCAPI bool canSeeDaylight() const;

    MCAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);

    MCAPI void chorusFruitTeleport(::Vec3 const& range);

    MCAPI bool closerThan(::Actor const& e, float distanceXZ, float distanceY) const;

    MCAPI void consumeItem(::ItemActor& itemActor, int count);

    MCAPI ::UpdateEquipPacket createUpdateEquipPacket(int containerID);

    MCAPI void deregisterTagsFromLevelCache();

    MCAPI void dropTowards(::ItemStack const& item, ::Vec3 towards);

    MCAPI void equip(::EquipmentTable const& equipmentTable);

    MCAPI void equip(::std::string const& lootTableFilePath);

    MCAPI void equipFromEquipmentDefinition();

    MCAPI float evaluateSeatRotation(::RideableComponent const& rideable, bool useVehicleRenderParams);

    MCAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);

    MCAPI ::std::vector<::DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const& distance, ::ActorType actorTypeId);

    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

    MCAPI_C ::Matrix getActorToWorldTransform(float frameAlpha, bool useActorRotation, ::Vec3 const& offset) const;

    MCFOLD_C ::std::vector<::MobEffectInstance> const& getAllEffects() const;

    MCAPI ::ItemStack const& getArmor(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location) const;

    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location, float alpha) const;

    MCAPI ::AttributeInstance const& getAttribute(::Attribute const& attribute) const;

    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;

    MCAPI float getBrightness(float a = 0.0f) const;

    MCAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;

    MCAPI int getChestSlots() const;

    MCFOLD ::Dimension& getDimension() const;

    MCFOLD ::BlockSource& getDimensionBlockSource() const;

    MCFOLD ::BlockSource const& getDimensionBlockSourceConst() const;

    MCFOLD ::Dimension const& getDimensionConst() const;

    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;

    MCAPI ::ActorType getEntityTypeId() const;

    MCAPI int getEquipSlots() const;

    MCAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;

    MCAPI ::ItemStack const& getEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    MCAPI ::Vec3 getEyePos() const;

    MCAPI float getFallDistance() const;

    MCAPI ::Actor* getFirstPassenger() const;

    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;

    MCAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;

    MCAPI bool getIsExperienceDropEnabled() const;

    MCAPI ::Mob* getLastHurtByMob();

    MCAPI ::Player* getLastHurtByPlayer();

    MCAPI ::ActorUniqueID getLeashHolder() const;

    MCAPI uint64 getLevelTimeStamp() const;

    MCAPI ::std::vector<::ActorLink> getLinks() const;

    MCAPI ::LootTable* getLootTable();

    MCAPI int getMarkVariant() const;

    MCAPI int getMaxHealth() const;

    MCAPI_C int64 getMetadataId() const;

    MCAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const& attribute);

    MCAPI ::std::string const& getNameTag() const;

    MCAPI ::ItemStack const& getOffhandSlot() const;

    MCAPI int getOnDeathExperience();

    MCAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCAPI ::ActorUniqueID const& getOrCreateUniqueID() const;

    MCAPI ::Mob* getOwner() const;

    MCFOLD ::ActorUniqueID const getOwnerId() const;

    MCAPI int getPassengerIndex(::Actor const& passenger) const;

    MCAPI ::std::unique_ptr<::CompoundTag> getPersistingTradeOffers();

    MCAPI ::Player* getPlayerOwner() const;

    MCAPI ::Random& getRandom() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;

    MCAPI float getRidingHeight() const;

    MCAPI ::ActorRuntimeID getRuntimeID() const;

    MCAPI float getSpeedInMetersPerSecond() const;

    MCAPI bool getStatusFlag(::ActorFlags flag) const;

    MCAPI int getStrength() const;

    MCAPI int getStructuralIntegrity() const;

    MCAPI ::Actor* getTarget() const;

    MCAPI ::MerchantRecipeList* getTradeOffers();

    MCAPI ::Player* getTradingPlayer() const;

    MCAPI ::ValidMutableAttributeWithContext getValidMutableAttribute(::Attribute const& attribute);

    MCFOLD int getVariant() const;

    MCAPI ::Actor* getVehicle() const;

    MCAPI ::Actor* getVehicleRoot() const;

    MCFOLD ::Vec3 getViewVector(float a = 0.0f) const;

    MCAPI_C ::Vec2 getViewVector2(float a) const;

    MCAPI ::WeakRef<::EntityContext> const getWeakEntity() const;

    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCAPI void handleLeftoverFallDamage(float damage, ::ActorDamageSource source);

    MCAPI bool hasDimension() const;

    MCAPI bool hasEffect(::MobEffect const& effect) const;

    MCAPI bool hasFamily(::HashedString const& family) const;

    MCAPI bool hasPlayerPassenger() const;

    MCAPI bool hasSaddle() const;

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI void heal(int heal);

    MCAPI bool hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool inDownwardFlowingLiquid() const;

    MCAPI void initActorProperties();

    MCAPI void initParams(::RenderParams& params);

    MCAPI_C bool
    isActorLocationInMaterial(::SharedTypes::Legacy::ActorLocation actorLocation, ::MaterialType type) const;

    MCAPI bool isAdventure() const;

    MCAPI bool isAttackableGamemode() const;

    MCAPI bool isAutonomous() const;

    MCAPI bool isBaby() const;

    MCAPI bool isChested() const;

    MCAPI bool isClientSide() const;

    MCAPI bool isCreative() const;

    MCAPI bool isDead() const;

    MCAPI bool isDoorOpener() const;

    MCAPI bool isGlobal() const;

    MCAPI bool isInClouds() const;

    MCAPI bool isInLava() const;

    MCAPI bool isInLove() const;

    MCAPI bool isInPrecipitation() const;

    MCAPI bool isInRain() const;

    MCAPI bool isInSnow() const;

    MCAPI bool isInThunderstorm() const;

    MCAPI bool isInWater() const;

    MCAPI bool isInWaterOrRain() const;

    MCAPI bool isInWorld() const;

    MCAPI bool isInvertedHealAndHarm() const;

    MCAPI bool isJumping() const;

    MCAPI bool isLeashed() const;

    MCFOLD bool isLocalPlayer() const;

    MCAPI bool isOverWater() const;

    MCAPI bool isPassenger(::Actor const& passenger) const;

    MCAPI bool isPersistent() const;

    MCFOLD bool isPlayer() const;

    MCAPI bool isPowered() const;

    MCAPI bool isRemotePlayer() const;

    MCAPI bool isRiding() const;

    MCAPI bool isRiding(::Actor* targetVehicle) const;

    MCAPI bool isSilent() const;

    MCAPI bool isSitting() const;

    MCAPI bool isSpectator() const;

    MCAPI bool isSurvival() const;

    MCAPI bool isSwimming() const;

    MCAPI bool isTame() const;

    MCAPI bool isTouchingDamageBlock() const;

    MCAPI bool isTrading() const;

    MCAPI bool isType(::ActorType type) const;

    MCAPI bool isUnderLiquid(::MaterialType type) const;

    MCAPI bool isWearingLeatherArmor() const;

    MCAPI bool isWorldBuilder() const;

    MCAPI void killed(::Actor& entity);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, int steps);

    MCAPI void loadEntityFlags(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void
    loadLinks(::CompoundTag const& entityTag, ::std::vector<::ActorLink>& links, ::DataLoadHelper& dataLoadHelper);

    MCAPI void move(::Vec3 const& posDelta);

    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    MCAPI bool onClimbableBlock() const;

    MCAPI void onEffectAdded(::MobEffectInstance& effect);

    MCAPI void onEffectUpdated(::MobEffectInstance& effect);

    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    MCAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data);

    MCAPI void
    playSynchronizedSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data, bool isGlobal);

    MCAPI_C void positionAllPassengers();

    MCAPI void positionPassenger(::Actor& passenger);

    MCAPI void postGameEvent(::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);

    MCAPI void postSplashGameEvent();

    MCAPI void pushBackActionEventToActionQueue(::ActionEvent actionEvent);

    MCAPI void pushOutOfBlocks(::Vec3 const& vec);

    MCAPI void refreshComponents();

    MCAPI void reload();

    MCAPI void removeAllEffects();

    MCAPI void removeAllPassengers(bool actorIsBeingDestroyed, bool exitFromPassenger);

    MCAPI void removeEffect(int effectId);

    MCAPI bool removeTag(::std::string const& tag);

    MCAPI bool save(::CompoundTag& entityTag) const;

    MCAPI void saveEntityFlags(::CompoundTag& entityTag) const;

    MCAPI ::std::unique_ptr<::ListTag> saveLinks() const;

    MCAPI void savePersistingTrade(::std::unique_ptr<::CompoundTag> offersTag, int riches);

    MCAPI void saveWithoutId(::CompoundTag& entityTag) const;

    MCAPI void sendActorDefinitionEventTriggered(::std::string const& event);

    MCAPI void serializationSetHealth(int newHealth);

    MCAPI void setActorRendererId(::HashedString actorRendererId);

    MCAPI void setAutonomous(bool g);

    MCAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCAPI void setBlockTarget(::BlockPos const& target);

    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

    MCAPI void setInLove(::Actor* lovePartner);

    MCAPI void setInvisible(bool value);

    MCAPI void setJumping(bool jump);

    MCAPI void setLastHurtByMob(::Mob* mob);

    MCAPI void setLastHurtByPlayer(::Player* player);

    MCAPI void setLastHurtMob(::Mob const& target);

    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);

    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setMarkVariant(int value);

    MCAPI void setNameTag(::std::string const& name);

    MCAPI_C void setOffersFromPacket(::UpdateTradePacket const& packet);

    MCAPI void setPersistent();

    MCAPI void setPreviousPosRot();

    MCAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const& name);

    MCAPI_C void setRuntimeID(::ActorRuntimeID id);

    MCAPI void setSkinID(int value);

    MCAPI void setStatusFlag(::ActorFlags flag, bool value);

    MCAPI void setStrength(int strength);

    MCAPI void setStrengthMax(int strength);

    MCAPI void setTradingPlayer(::Player* player);

    MCAPI_C void setUniqueID(::ActorUniqueID id);

    MCFOLD void setVariant(int value);

    MCAPI_C void setYHeadRotations(float yHeadRot, float oldYHeadRot);

    MCAPI bool shouldOrphan(::BlockSource& source);

    MCAPI_C bool shouldRender() const;

    MCAPI bool shouldTick() const;

    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    MCAPI void spawnEatParticles(::ItemStack const& itemInUse, int count);

    MCAPI void spawnTrailBubbles();

    MCAPI void
    stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles, bool isBeingTeleported);

    MCAPI void synchronousSetSize(float w, float h);

    MCAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    MCAPI bool tick(::BlockSource& region);

    MCAPI void tickBlockDamage();

    MCAPI void tickLeash();

    MCAPI void triggerActorRemovedEvent();

    MCAPI ::std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor item) const;

    MCAPI bool tryTeleportTo(::Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    MCAPI_S void updateAnimationComponentOnServer();

    MCAPI void updateDescription();

    MCAPI void updateInsideBlock();

    MCAPI void updateInvisibilityStatus();

    MCAPI void updateMolangVariables(::RenderParams& renderParams);

    MCAPI void updateTickingData();

    MCAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _moveRelative(::Vec3& posDelta, float yRotDegrees, float xa, float ya, float za, float speed);

    MCAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&                                      pos,
        ::AABB const&                                      aabb,
        ::IConstBlockSource const&                         region,
        float                                              ignoreGapBelow,
        ::optional_ref<::GetCollisionShapeInterface const> other
    );

    MCAPI static ::std::vector<::BlockPos> getBlocksCurrentlyStandingOn(
        ::AABB const&                                      aabb,
        ::IConstBlockSource const&                         region,
        float                                              ignoreGapBelow,
        ::optional_ref<::GetCollisionShapeInterface const> other
    );

    MCAPI static ::MobEffectInstance const*
    getEffect(::std::vector<::MobEffectInstance> const& effects, ::MobEffect const& effect);

    MCAPI_C static ::Vec2 getInterpolatedRotation(::Vec2 const& prevRot, ::Vec2 const& rot, float a);

    MCAPI static ::AABB getLiquidAABB(::AABB const& aabb, ::MaterialType liquidType);

    MCAPI static ::Vec3 getViewVector(::Vec2 const& prevRot, ::Vec2 const& rot, float a);

    MCAPI static bool isImmobile(::EntityContext const& entity);

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

    MCFOLD void $reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const&);

    MCAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $_serverInitItemStackIds();

    MCAPI void $_doInitialMove();

    MCFOLD void $resetUserPos(::ActorResetRule);

    MCAPI ::ActorType $getOwnerEntityType();

    MCAPI void $remove();

    MCAPI ::Vec3 $getFiringPos() const;

    MCAPI float $getInterpolatedBodyRot(float a) const;

    MCFOLD float $getInterpolatedHeadRot(float) const;

    MCFOLD float $getInterpolatedBodyYaw(float) const;

    MCAPI float $getYawSpeedInDegreesPerSecond() const;

    MCFOLD ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI bool $isFireImmune() const;

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI bool $canDisableShield();

    MCAPI void $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

    MCAPI void $lerpMotion(::Vec3 const& delta);

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $passengerTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $addPassenger(::Actor& passenger);

#ifdef LL_PLAT_S
    MCAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;
#endif

    MCAPI ::std::string $getEntityLocNameString() const;

    MCAPI bool $isInvisible() const;

    MCAPI bool $canShowNameTag() const;

    MCAPI ::std::string $getFormattedNameTag() const;

    MCFOLD ::mce::Color $getNameTagTextColor() const;

    MCAPI float $getShadowRadius() const;

    MCFOLD ::Vec3 $getHeadLookVector(float a) const;

    MCFOLD bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD void $playerTouch(::Player&);

    MCFOLD bool $isImmobile() const;

    MCAPI bool $isSilentObserver() const;

    MCFOLD bool $isSleeping() const;

    MCFOLD void $setSleeping(bool);

    MCAPI void $setSneaking(bool value);

    MCFOLD bool $isBlocking() const;

    MCFOLD bool $isDamageBlocked(::ActorDamageSource const&) const;

    MCFOLD bool $isAlive() const;

    MCFOLD bool $isOnFire() const;

    MCFOLD bool $isSurfaceMob() const;

    MCFOLD bool $isTargetable() const;

    MCAPI void $setTarget(::Actor* entity);

    MCFOLD bool $isValidTarget(::Actor*) const;

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

    MCAPI bool $doFireHurt(int amount);

    MCAPI void $onLightningHit();

    MCAPI void $feed(int itemId);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD ::HashedString const& $getActorRendererId() const;

    MCAPI void $despawn();

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCFOLD ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCFOLD int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot) const;

    MCFOLD float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot, int) const;

    MCFOLD void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::HashedString const& $queryEntityRenderer() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD bool $canFreeze() const;

    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $changeDimension(::DimensionType toId);

    MCFOLD void $changeDimension(::ChangeDimensionPacket const&);

    MCFOLD ::ActorUniqueID $getControllingPlayer() const;

    MCFOLD float $causeFallDamageToActor(float, float, ::ActorDamageSource);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCFOLD bool $canPickupItem(::ItemStack const&) const;

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCFOLD bool $inCaravan() const;

    MCAPI void $sendMotionPacketIfNeeded();

    MCFOLD bool $canSynchronizeNewEntity() const;

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCFOLD void $buildDebugInfo(::std::string&) const;

    MCFOLD int $getDeathTime() const;

    MCAPI bool $canBeAffected(uint id) const;

    MCAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);

    MCAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI void $openContainerComponent(::Player& player);

    MCFOLD bool $swing();

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const&);

    MCFOLD bool $canDestroyBlock(::Block const&) const;

    MCFOLD void $setAuxValue(int);

    MCFOLD void $renderDebugServerState(::IOptionsReader const&);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCFOLD void $onPush(::Actor&);

    MCFOLD ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCFOLD ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCFOLD bool $hasDiedBefore() const;

    MCFOLD void $doEnterWaterSplashEffect();

    MCFOLD void $doExitWaterSplashEffect();

    MCAPI void $doWaterSplashEffect();

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool, bool);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

#ifdef LL_PLAT_C
    MCAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
