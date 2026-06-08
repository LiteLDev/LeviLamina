#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
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
#include "mc/platform/brstd/bitset.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/util/MolangVariableMap.h"
#include "mc/util/VariantParameterList.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDefinitionPtr.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorFlags.h"
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
class ActorOwnerComponent;
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
class GameEvent;
class GetCollisionShapeInterface;
class IConstBlockSource;
class ILevel;
class ITickingArea;
class InteractionResult;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class ListTag;
class LootTable;
class Matrix;
class MerchantRecipeList;
class Mob;
class MobEffect;
class MobEffectInstance;
class ModelPartLocator;
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
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct ActorRotationComponent;
struct DistanceSortedActor;
struct DynamicRenderOffsetComponent;
struct EquipmentTable;
struct InterpolationPair;
struct MutableAttributeWithContext;
struct StateVectorComponent;
struct ValidMutableAttributeWithContext;
struct VariantParameterListConst;
namespace Bedrock::Safety { class RedactableString; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
namespace VehicleUtils { struct VehicleRootInfo; }
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
    virtual void outOfWorld();

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    virtual void reloadHardcodedClient(::ActorInitializationMethod method);

    virtual void initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    virtual void _serverInitItemStackIds();

    virtual void _doInitialMove();

    virtual bool hasComponent(::HashedString const& name) const;

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

    virtual bool isValidTarget(::Actor*) const;

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

    virtual void changeDimension(::ChangeDimensionPacket const& packet);

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

    virtual bool swing(::ActorSwingSource swingSource);

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

    virtual ::ActorHurtResult _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

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

    MCAPI bool _applyPendingPropertyChanges();

    MCAPI bool _determineCanPickupItems() const;

    MCAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);

    MCFOLD ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();

    MCAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );

    MCAPI void _initActorProperties();

    MCAPI void _initAliasProperties();

    MCAPI void _initializeLeashRopeSystem(::Actor* holder);

    MCAPI void _initializeMaxAutoStep(float maxAutoStep);

    MCAPI bool _isDeathLootAllowed() const;

    MCAPI bool _isHeadInWater() const;

    MCAPI bool _isItemStackNetManagerEnabled() const;

    MCAPI bool _isValidBlockToTeleportOnto(::Block const& block, bool avoidLiquid) const;

    MCAPI void _notifyMobEffectsOnHurt(::ActorDamageSource const& source, float damage);

    MCAPI void _onVibrationDetected();

    MCAPI void _refreshAABB();

    MCAPI void _sendDirtyActorData();

    MCAPI void _serializeComponents(::CompoundTag& tag) const;

    MCAPI void _setActorTypeId(::ActorType type);

    MCAPI void _setDimensionTransitionComponent(::DimensionType fromId, ::DimensionType toId, int portalCooldown);

    MCAPI void _setHandContainerItem(::ItemStack const& item, ::HandSlot handSlot);

    MCAPI void _setHeightOffset(float heightOffset);

    MCAPI void _setLevelPtr(::ILevel* level);

    MCFOLD void _setPos(::Vec3 const& pos);

    MCFOLD void _setPosPrev(::Vec3 const& posPrev);

    MCAPI void _setupServerAnimationComponent();

    MCAPI void _syncTickCountIfAnimationComponentShared();

    MCAPI bool _tryApplyDye(::Player& player, ::ItemStack const& dyeItem, ::ActorInteraction& interaction);

    MCAPI void _tryPlantWitherRose();

    MCAPI void _updateComposition(bool reload);

    MCAPI void _upgradeActorVersion();

    MCAPI void addCategory(::ActorCategory const& category);

    MCAPI void addDefinitionGroup(::std::string const& name);

    MCAPI void addEffect(::MobEffectInstance const& effect);

    MCAPI bool addTag(::std::string const& tag);

    MCAPI void applyImpulse(::Vec3 const& impulse);

    MCAPI void applyOnBornPropertyChanges();

    MCAPI void buildDebugGroupInfo(::std::string& out) const;

    MCAPI ::Vec3 buildForward() const;

    MCAPI void burn(int damage, bool inFire);

    MCAPI bool canAttack(::Actor const& entity) const;

    MCAPI bool canBeginOrContinueClimbingLadder() const;

    MCAPI bool canCurrentlySwim() const;

#ifdef LL_PLAT_C
    MCAPI bool canDescendBlockBelowByCrouching() const;
#endif

    MCAPI bool canFly() const;

    MCAPI bool canMate(::Actor const& partner) const;

    MCAPI bool canOpenContainer(::Player& player) const;

    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    MCAPI bool canSee(::Actor const& target, ::ShapeType obstructionType) const;

    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;

    MCAPI bool canSee(
        ::Actor const&                       target,
        ::SharedTypes::Legacy::ActorLocation targetLocationPart,
        ::ShapeType                          obstructionType
    ) const;

    MCAPI bool canSeeDaylight() const;

    MCAPI void celebrateHunt(int duration, bool special);

    MCAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);

    MCAPI void chorusFruitTeleport(::Vec3 const& range);

    MCAPI void clearFishingHookID();

    MCAPI bool closerThan(::Actor const& e, float distance) const;

    MCAPI bool closerThan(::Actor const& e, float distanceXZ, float distanceY) const;

    MCAPI void consumeItem(::ItemActor& itemActor, int count);

    MCAPI ::UpdateEquipPacket createUpdateEquipPacket(int containerID);

    MCAPI ::UpdateTradePacket createUpdateTradePacket(int containerID);

    MCAPI void deregisterTagsFromLevelCache();

    MCAPI float distanceSqrToBlockPosCenter(::BlockPos const& pos) const;

    MCAPI float distanceTo(::Actor const& e) const;

    MCAPI float distanceTo(::Vec3 const& pos) const;

    MCAPI float distanceToSqr(::Actor const& e) const;

    MCAPI float distanceToSqr(::Vec3 const& pos) const;

    MCAPI void dropTowards(::ItemStack const& item, ::Vec3 towards);

    MCAPI void enableAutoSendPosRot(bool enable);

    MCAPI void equip(::EquipmentTable const& equipmentTable);

    MCAPI void equip(::std::string const& lootTableFilePath);

    MCAPI void equipFromEquipmentDefinition();

    MCAPI float evaluateSeatRotation(::RideableComponent const& rideable, bool useVehicleRenderParams);

    MCAPI bool executeEvent(::std::string const& name, ::VariantParameterList const& list);

    MCAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);

    MCAPI ::FishingHook* fetchFishingHook();

    MCAPI ::std::vector<::DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const& distance);

    MCAPI ::std::vector<::DistanceSortedActor> fetchNearbyActorsSorted(::Vec3 const& distance, ::ActorType actorTypeId);

    MCAPI ::Vec2 const& getAABBDim() const;

#ifdef LL_PLAT_C
    MCAPI int getActiveEffectCount() const;
#endif

    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

#ifdef LL_PLAT_C
    MCAPI ::Matrix getActorToWorldTransform(float frameAlpha, bool useActorRotation, ::Vec3 const& offset) const;
#endif

    MCFOLD ::std::vector<::MobEffectInstance> const& getAllEffects() const;

    MCAPI ::ItemStack const& getArmor(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location) const;

    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location, float alpha) const;

    MCAPI ::AttributeInstanceConstRef getAttribute(::Attribute const& attribute) const;

    MCAPI ::gsl::not_null<::BaseAttributeMap const*> getAttributes() const;

    MCAPI ::gsl::not_null<::BaseAttributeMap*> getAttributes();

    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;

    MCAPI ::BlockPos getBlockTarget() const;

    MCAPI float getBrightness(float a = 0.0f) const;

#ifdef LL_PLAT_C
    MCAPI float getCameraDistance();
#endif

    MCFOLD bool getCanPickupItems() const;

    MCAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;

#ifdef LL_PLAT_C
    MCAPI ::Vec3 getCenter(float a) const;
#endif

    MCAPI ::Vec3 getCenteredPosition() const;

    MCAPI bool getChainedDamageEffects() const;

    MCAPI int getChestSlots() const;

    MCAPI bool getCollidableMob() const;

    MCAPI float getCurrentSwimAmount() const;

    MCAPI bool getDamageNearbyMobs() const;

    MCAPI ::ActorDefinitionDiffList* getDiffListNonConst();

    MCFOLD ::Dimension& getDimension() const;

    MCFOLD ::BlockSource& getDimensionBlockSource() const;

    MCFOLD ::BlockSource const& getDimensionBlockSourceConst() const;

    MCFOLD ::Dimension const& getDimensionConst() const;

    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;

    MCAPI ::MobEffectInstance const* getEffect(uint effectId) const;

    MCFOLD ::SynchedActorDataEntityWrapper const& getEntityData() const;

    MCFOLD ::SynchedActorDataEntityWrapper& getEntityData();

    MCAPI ::StackRefResult<::EntityRegistry> getEntityRegistry();

    MCFOLD ::ActorTerrainInterlockData& getEntityTerrainInterlockData();

    MCAPI ::ActorType getEntityTypeId() const;

    MCAPI int getEquipSlots() const;

    MCAPI int getEquipmentCount() const;

    MCAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;

    MCAPI ::ItemStack const& getEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    MCAPI ::Vec3 getEyePos() const;

    MCAPI float getFallDistance() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getFilteredNameTag() const;
#endif

    MCAPI bool getFirstAvailableSeatPos(::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI ::Actor* getFirstPassenger() const;

    MCAPI int getHealth() const;

#ifdef LL_PLAT_C
    MCAPI ::mce::Color const& getHurtColor() const;
#endif

    MCAPI int getHurtDir() const;

    MCAPI int getHurtTime() const;

    MCFOLD ::ILevel const& getILevel() const;

    MCFOLD ::ILevel& getILevel();

    MCFOLD ::ActorInitializationMethod getInitializationMethod() const;

#ifdef LL_PLAT_C
    MCAPI ::Block const* getInsideBlock() const;
#endif

    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;

    MCAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;

    MCAPI ::Vec2 getInterpolatedRotation(float a) const;

    MCAPI int getInventorySize() const;

    MCAPI bool getIsExperienceDropEnabled() const;

#ifdef LL_PLAT_C
    MCAPI bool getIsOnScreen() const;
#endif

    MCAPI ::Mob* getLastHurtByMob();

    MCAPI ::ActorUniqueID getLastHurtByMobID() const;

    MCAPI int getLastHurtByMobTime();

    MCFOLD int getLastHurtByMobTimestamp();

    MCAPI ::Player* getLastHurtByPlayer();

    MCAPI ::ActorUniqueID getLastHurtByPlayerID() const;

    MCFOLD ::SharedTypes::Legacy::ActorDamageCause getLastHurtCause() const;

    MCAPI float getLastHurtDamage() const;

    MCAPI ::Mob* getLastHurtMob();

    MCAPI int getLastHurtMobTimestamp();

    MCFOLD uint64 getLastHurtTimestamp() const;

    MCAPI ::ActorUniqueID getLeashHolder() const;

    MCFOLD ::Level& getLevel();

    MCAPI uint64 getLevelTimeStamp() const;

    MCAPI int getLimitedLifetimeTicks() const;

    MCAPI ::std::vector<::ActorLink> getLinks() const;

#ifdef LL_PLAT_C
    MCAPI ::ModelPartLocator const* getLocator(::HashedString const& locatorName);
#endif

    MCAPI ::LootTable* getLootTable();

    MCAPI int getMarkVariant() const;

    MCAPI float getMaxAutoStep() const;

    MCAPI int getMaxHealth() const;

#ifdef LL_PLAT_C
    MCAPI int64 getMetadataId() const;
#endif

    MCFOLD ::MolangVariableMap& getMolangVariables();

    MCAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const& attribute);

    MCAPI ::std::string const& getNameTag() const;

    MCFOLD uint64 getNameTagAsHash() const;

    MCAPI float getNameplateRenderDistanceMax() const;

    MCAPI ::ItemStack const& getOffhandSlot() const;

    MCAPI int getOnDeathExperience();

    MCAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCAPI ::ActorUniqueID const& getOrCreateUniqueID() const;

    MCAPI ::Mob* getOwner() const;

    MCAPI ::ActorUniqueID const getOwnerId() const;

    MCAPI int getPassengerIndex(::Actor const& passenger) const;

    MCAPI ::std::unique_ptr<::CompoundTag> getPersistingTradeOffers();

    MCAPI int getPersistingTradeRiches();

    MCAPI ::Player* getPlayerOwner() const;

    MCFOLD ::Vec3& getPosDeltaNonConst();

    MCAPI ::Vec3 const& getPosPrev() const;

    MCAPI float getRadius() const;

    MCAPI ::Random& getRandom() const;

    MCAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;

#ifdef LL_PLAT_C
    MCAPI ::ActorUniqueID getRenderLeashHolder();
#endif

    MCAPI ::RenderParams& getRenderParams();

    MCAPI float getRidingHeight() const;

    MCAPI ::Vec2 const& getRotationPrev() const;

    MCAPI ::ActorRuntimeID getRuntimeID() const;

#ifdef LL_PLAT_C
    MCAPI float getScaleFactor(float a) const;

    MCAPI ::std::string const& getScoreTag() const;
#endif

    MCFOLD int getShakeTime() const;

    MCAPI int getSkinID() const;

    MCFOLD ::SpatialActorNetworkData& getSpatialNetworkData();

    MCAPI float getSpeedInMetersPerSecond() const;

    MCAPI ::Vec3 getSpeedVectorInMetersPerSecond() const;

    MCAPI bool getStatusFlag(::ActorFlags flag) const;

    MCAPI int getStrength() const;

    MCAPI int getStrengthMax() const;

    MCAPI int getStructuralIntegrity() const;

#ifdef LL_PLAT_C
    MCAPI ::SubClientId getSubClientId() const;
#endif

    MCAPI float getSwimAmount(float a) const;

    MCAPI ::std::vector<::std::string> const getTags() const;

    MCAPI ::Actor* getTarget() const;

    MCAPI ::ActorUniqueID getTargetId() const;

    MCAPI ::ITickingArea* getTickingArea();

    MCAPI bool getTradeInterest() const;

    MCAPI ::MerchantRecipeList* getTradeOffers();

    MCAPI ::Player* getTradingPlayer() const;

#ifdef LL_PLAT_C
    MCAPI bool getUIRendering() const;
#endif

    MCAPI ::ValidMutableAttributeWithContext getValidMutableAttribute(::Attribute const& attribute);

    MCAPI int getVariant() const;

    MCAPI ::Actor* getVehicle() const;

    MCAPI ::VehicleUtils::VehicleRootInfo getVehicleRoot() const;

    MCAPI ::ActorRuntimeID getVehicleRuntimeID() const;

    MCAPI float getVerticalSpeedInMetersPerSecond() const;

    MCAPI ::Vec3 getViewVector(float a = 0.0f) const;

#ifdef LL_PLAT_C
    MCAPI ::Vec2 getViewVector2(float a) const;
#endif

    MCAPI float getYHeadRot() const;

    MCAPI ::InterpolationPair getYHeadRotationsNewOld() const;

    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCAPI void handleLeftoverFallDamage(float damage, ::ActorDamageSource source);

    MCAPI bool hasAnyEffects() const;

    MCAPI bool hasBeenHurtByMobInLastTicks(int numberOfTicks) const;

#ifdef LL_PLAT_C
    MCAPI bool hasDefinitionGroup(::std::string const& name) const;
#endif

    MCAPI bool hasDimension() const;

    MCAPI bool hasEffect(::MobEffect const& effect) const;

    MCAPI bool hasFamily(::HashedString const& family) const;

#ifdef LL_PLAT_C
    MCAPI bool hasFilteredNameTag() const;
#endif

    MCAPI bool hasFishingHook() const;

    MCFOLD bool hasLevel() const;

    MCAPI bool hasPassenger() const;

    MCAPI bool hasPersistingTrade() const;

    MCAPI bool hasPlayerPassenger() const;

    MCAPI bool hasPriorityAmmunition() const;

    MCAPI bool hasRuntimeID() const;

    MCAPI bool hasSaddle() const;

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI bool hasTags() const;

    MCAPI bool hasTeleported() const;

    MCAPI bool hasTotemEquipped() const;

    MCAPI bool hasType(::ActorType types) const;

    MCAPI bool hasUniqueID() const;

    MCAPI void heal(int heal);

    MCAPI ::ActorHurtResult hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool inDownwardFlowingLiquid() const;

    MCFOLD void initParams(::VariantParameterList& params);

    MCAPI void initParams(::RenderParams& params);

    MCFOLD void initParams(::VariantParameterListConst& params) const;

    MCAPI bool intersects(::Vec3 const& pos1, ::Vec3 const& pos2) const;

    MCAPI bool isActorLocationInMaterial(
        ::SharedTypes::Legacy::ActorLocation  actorLocation,
        ::SharedTypes::v1_26_20::MaterialType type
    ) const;

    MCAPI bool isAdventure() const;

    MCAPI bool isAffectedByWaterBottle() const;

    MCAPI bool isAngry() const;

    MCAPI bool isAttackableGamemode() const;

    MCAPI bool isAutonomous() const;

    MCAPI bool isBaby() const;

    MCAPI bool isBreakingObstruction() const;

    MCAPI bool isBribed() const;

    MCAPI bool isCharged() const;

    MCAPI bool isChested() const;

    MCAPI bool isClientSide() const;

    MCAPI bool isClimbing() const;

#ifdef LL_PLAT_C
    MCAPI bool isControlledByLocalInstance() const;
#endif

    MCAPI bool isCreative() const;

    MCAPI bool isDancing() const;

    MCAPI bool isDead() const;

    MCAPI bool isDoorBreaker() const;

    MCAPI bool isDoorOpener() const;

    MCAPI bool isGlobal() const;

    MCAPI bool isIgnited() const;

    MCAPI bool isImmersedInWater() const;

    MCAPI bool isInClouds() const;

    MCAPI bool isInContactWithWater() const;

    MCAPI bool isInLava() const;

    MCAPI bool isInLove() const;

    MCAPI bool isInPrecipitation() const;

    MCAPI bool isInRain() const;

    MCAPI bool isInScaffolding() const;

    MCAPI bool isInSnow() const;

    MCAPI bool isInThunderstorm() const;

    MCAPI bool isInWater() const;

    MCAPI bool isInWaterOrRain() const;

    MCAPI bool isInWorld() const;

    MCAPI bool isInsidePortal() const;

    MCAPI bool isInvertedHealAndHarm() const;

    MCAPI bool isJumping() const;

    MCAPI bool isLayingDown() const;

    MCAPI bool isLeashed() const;

    MCAPI bool isLocalPlayer() const;

    MCAPI bool isMovedToLimbo() const;

    MCAPI bool isMovedToUnloadedChunk() const;

    MCAPI bool isMoving() const;

    MCAPI bool isNameplateDepthTested() const;

    MCAPI bool isOrphan() const;

    MCAPI bool isOutOfControl() const;

    MCAPI bool isOverScaffolding() const;

    MCAPI bool isOverWater() const;

    MCAPI bool isPacified() const;

#ifdef LL_PLAT_C
    MCAPI bool isPassenger(::ActorUniqueID const& id) const;
#endif

    MCAPI bool isPassenger(::Actor const& passenger) const;

    MCAPI bool isPersistent() const;

    MCAPI bool isPlayingDead() const;

    MCAPI bool isPowered() const;

    MCAPI bool isRemotePlayer() const;

    MCAPI bool isRemoved() const;

    MCAPI bool isResting() const;

    MCAPI bool isRiding() const;

    MCAPI bool isRiding(::Actor* targetVehicle) const;

    MCAPI bool isSheared() const;

    MCAPI bool isSilent() const;

    MCAPI bool isSitting() const;

    MCAPI bool isSneaking() const;

    MCAPI bool isSpectator() const;

    MCAPI bool isStanding() const;

    MCAPI bool isSurvival() const;

    MCAPI bool isSwimmer() const;

    MCAPI bool isSwimming() const;

    MCAPI bool isTame() const;

    MCAPI bool isTickingEntity() const;

    MCAPI bool isTouchingDamageBlock() const;

    MCAPI bool isTrading() const;

    MCAPI bool isTrusting() const;

    MCAPI bool isUnderLiquid(::SharedTypes::v1_26_20::MaterialType type) const;

    MCAPI bool isUseNewTradeScreen() const;

    MCAPI bool isWalker() const;

    MCAPI bool isWearingLeatherArmor() const;

    MCAPI bool isWorldBuilder() const;

    MCAPI void killed(::Actor& entity);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, int steps);

    MCAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, float headYaw, int steps);

    MCAPI void loadEntityFlags(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void
    loadLinks(::CompoundTag const& entityTag, ::std::vector<::ActorLink>& links, ::DataLoadHelper& dataLoadHelper);

    MCFOLD ::ActorUniqueID const& lovePartnerId() const;

    MCAPI void markHurt();

    MCFOLD void migrateUniqueID(::ActorUniqueID id);

    MCAPI void move(::Vec3 const& posDelta);

    MCAPI void moveRelative(float xa, float ya, float za, float speed);

    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    MCAPI void onAffectedByWaterBottle();

    MCAPI bool onClimbableBlock() const;

    MCAPI void onEffectAdded(::MobEffectInstance& effect);

    MCAPI void onEffectUpdated(::MobEffectInstance& effect);

    MCAPI void onOrphan();

#ifdef LL_PLAT_C
    MCAPI void onSynchedFlagUpdate(::brstd::bitset<130, uint64> const& changedFlags);
#endif

    MCAPI bool operator!=(::Actor const& rhs) const;

    MCAPI bool operator==(::Actor const& rhs) const;

    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    MCAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data);

    MCAPI void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data
    );

    MCAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&         fireAtPosition
    );

    MCAPI void positionAllPassengers();

    MCAPI void positionPassenger(::Actor& passenger);

    MCAPI void postGameEvent(::GameEvent const& gameEvent, ::Vec3 const& originPos, ::Block const* affectedBlock);

    MCAPI void postSplashGameEvent();

    MCAPI bool pullInEntity(::Actor& e);

    MCAPI void pushBackActionEventToActionQueue(::ActionEvent actionEvent);

    MCAPI void pushOutOfBlocks(::Vec3 const& vec);

    MCAPI void queueBBUpdateFromDefinition();

    MCAPI void queueBBUpdateFromValue(::Vec2 const& value);

    MCAPI void refreshComponents();

    MCAPI void reload();

    MCAPI void removeAllEffects();

    MCAPI void removeAllPassengers(bool actorIsBeingDestroyed, bool exitFromPassenger);

    MCAPI void removeEffect(int effectId);

    MCAPI void removePersistingTrade();

    MCAPI bool removeTag(::std::string const& tag);

    MCAPI bool save(::CompoundTag& entityTag) const;

    MCAPI void saveEntityFlags(::CompoundTag& entityTag) const;

    MCAPI ::std::unique_ptr<::ListTag> saveLinks() const;

    MCAPI void savePersistingTrade(::std::unique_ptr<::CompoundTag> offersTag, int riches);

    MCAPI void saveWithoutId(::CompoundTag& entityTag) const;

    MCAPI void serializationSetHealth(int newHealth);

    MCAPI void setAABB(::AABB const& aabb);

    MCAPI void setAABBDim(::Vec2 const& dim);

    MCAPI void setActorRendererId(::HashedString actorRendererId);

    MCAPI void setAutonomous(bool g);

    MCAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCFOLD void setBlockTarget(::BlockPos const& target);

    MCAPI void setBreakingObstruction(bool breaking);

#ifdef LL_PLAT_C
    MCAPI void setCameraDistance(float cameraDistance);
#endif

    MCAPI void setCanFly(bool value);

    MCAPI void setChainedDamageEffects(bool active);

#ifdef LL_PLAT_C
    MCAPI void setChanged();
#endif

    MCAPI void setCharged(bool value);

    MCAPI void setClimbing(bool value);

    MCAPI void setDancing(bool dancing);

    MCAPI void setDead(bool isDead);

    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

    MCAPI void setDoorBreaker(bool breaker);

    MCAPI void setDoorOpener(bool opener);

    MCAPI void setEnchanted(bool value);

#ifdef LL_PLAT_C
    MCAPI void setEquipFromPacket(::UpdateEquipPacket const& packet);
#endif

    MCAPI void setFallDistance(float distance);

#ifdef LL_PLAT_C
    MCAPI void setFilteredNameTag(::std::string const& filteredName);
#endif

    MCAPI void setFishingHookID(::ActorUniqueID newUniqueID);

    MCAPI void setGlobal(bool g);

    MCAPI void setHurtDir(int hurtDir);

    MCAPI void setHurtTime(int hurtTime);

    MCAPI void setInLove(::Actor* lovePartner);

    MCAPI void setInterpolation();

    MCAPI void setInvisible(bool value);

    MCAPI void setIsExperienceDropEnabled(bool isExperienceDropEnabled);

#ifdef LL_PLAT_C
    MCAPI void setIsOnScreen(bool isOnScreen);
#endif

    MCAPI void setJumping(bool jump);

    MCAPI void setLastHitBB(::Vec3 const& pos, ::Vec3 const& radius);

    MCAPI void setLastHurtByMob(::Mob* mob);

    MCAPI void setLastHurtByPlayer(::Player* player);

    MCAPI void setLastHurtMob(::Mob const& target);

    MCAPI void setLayingDown(bool value);

    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);

    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setMarkVariant(int value);

    MCAPI void setMovedToLimbo(bool moveToLimbo);

    MCAPI void setMovedToUnloadedChunk(bool movedToUnloadedChunk);

    MCAPI void setMoving(bool value);

    MCAPI void setNameTag(::std::string const& name);

    MCAPI void setNameTagVisible(bool visible);

    MCAPI void setNameplateDepthTested(bool value);

    MCAPI void setNameplateRenderDistanceMax(float distanceMax);

    MCAPI void setObstructsBlockPlacement(bool obstructs);

#ifdef LL_PLAT_C
    MCAPI void setOffersFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setPersistent();

    MCAPI void setPos(::Vec3 const& pos);

    MCFOLD void setPosDelta(::Vec3 const& posDelta);

    MCFOLD void setPosDirectLegacy(::Vec3 const& pos);

    MCFOLD void setPosPrev(::Vec3 const& posPrev);

    MCAPI void setPrevPosRotSetThisTick(bool value);

    MCAPI void setPreviousPosRot();

    MCAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const& name);

    MCAPI void setResting(bool value);

    MCAPI void setRotationDirectly(::Vec2 const& rot);

    MCAPI void setRotationPrev(::Vec2 const& rotation);

#ifdef LL_PLAT_C
    MCAPI void setRotationPrevX(float rotX);
#endif

    MCAPI void setRotationPrevY(float rotY);

    MCAPI void setRotationWrapped(::Vec2 const& rot);

    MCAPI void setRotationX(float rotX);

    MCAPI void setRotationY(float rotY);

    MCAPI void setRuntimeID(::ActorRuntimeID id);

    MCAPI void setSaddle(bool saddled);

    MCAPI void setScared(bool status);

    MCAPI void setScoreTag(::std::string const& score);

    MCAPI void setShakeTime(int time);

    MCAPI void setSkinID(int value);

    MCAPI void setStatusFlag(::ActorFlags flag, bool value);

    MCAPI void setStrength(int strength);

    MCAPI void setStrengthMax(int strength);

    MCAPI void setStructuralIntegrity(int damage);

    MCAPI void setSwimmer(bool swimmer);

    MCAPI void setTempted(bool tempted);

    MCAPI void setTradeInterest(bool interested);

    MCAPI void setTradingPlayer(::Player* player);

#ifdef LL_PLAT_C
    MCAPI void setUIRendering(bool isInUI);
#endif

    MCFOLD void setUniqueID(::ActorUniqueID id);

#ifdef LL_PLAT_C
    MCAPI void setUpdateBonesAndEffects(bool updateBonesAndEffects);

    MCAPI void setUpdateEffects(bool updateEffects);
#endif

    MCAPI void setVariant(int value);

    MCAPI void setVelocity(::Vec3 const& vel);

    MCAPI void setWalker(bool isWalker);

    MCAPI void setYHeadRot(float yHeadRot);

    MCAPI void setYHeadRotations(float yHeadRot, float oldYHeadRot);

#ifdef LL_PLAT_C
    MCFOLD bool shouldAddEntityToRenderQueue() const;
#endif

    MCAPI bool shouldOrphan(::BlockSource& source);

    MCAPI bool shouldRender() const;

    MCAPI bool shouldTick() const;

#ifdef LL_PLAT_C
    MCAPI bool shouldUpdateBonesAndEffects() const;
#endif

    MCFOLD bool shouldUpdateEffects() const;

    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    MCAPI void spawnEatParticles(::ItemStack const& itemInUse, int count);

    MCAPI void spawnTrailBubbles();

    MCAPI void
    stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles, bool isBeingTeleported);

    MCAPI void synchronousSetSize(float w, float h);

    MCAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    MCAPI void thawFreezeEffect();

    MCAPI bool tick(::BlockSource& region);

    MCAPI void tickBlockDamage();

    MCAPI void tickLeash();

    MCAPI void transferTickingArea(::Dimension const& toDimension);

    MCAPI void triggerActorRemovedEvent();

    MCAPI ::std::vector<::ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int slotNumber) const;

    MCAPI ::std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor item) const;

    MCAPI bool tryTeleportTo(::Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

    MCAPI void updateAnimationComponentOnServer();

    MCAPI void updateDescription();

    MCAPI void updateDimensionChunkMove();

    MCAPI void updateInsideBlock();

    MCAPI void updateInvisibilityStatus();

    MCAPI void updateMolangVariables(::RenderParams& renderParams);

    MCAPI void updateTickingData();

    MCAPI void updateWaterState();

    MCFOLD bool wasHurt();

    MCAPI bool wasLastHitByPlayer();

    MCAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _moveRelative(::Vec3& posDelta, float yRotDegrees, float xa, float ya, float za, float speed);

    MCAPI static ::Vec3 buildForward(::Vec2 rotation);

#ifdef LL_PLAT_C
    MCAPI static int getActiveEffectCount(::std::vector<::MobEffectInstance> const& effects);
#endif

    MCAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&                                      pos,
        ::AABB const&                                      aabb,
        ::IConstBlockSource const&                         region,
        ::optional_ref<::GetCollisionShapeInterface const> other
    );

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

    MCAPI static ::Vec3 getCenter(
        float                         a,
        ::AABBShapeComponent const&   aabbShapeComponent,
        ::StateVectorComponent const& stateVectorComponent,
        float                         heightOffset
    );

    MCAPI static ::MobEffectInstance const*
    getEffect(::std::vector<::MobEffectInstance> const& effects, ::MobEffect const& effect);

    MCAPI static ::MobEffectInstance const* getEffect(::std::vector<::MobEffectInstance> const& effects, uint effectId);

    MCAPI static ::Vec3 getInterpolatedPosition(float a, ::StateVectorComponent const& stateVectorComponent);

#ifdef LL_PLAT_C
    MCAPI static ::Vec3 getInterpolatedPosition(
        float                                 a,
        ::StateVectorComponent const&         stateVectorComponent,
        ::DynamicRenderOffsetComponent const* dynamicRenderOffsets
    );
#endif

    MCAPI static ::AABB getLiquidAABB(::AABB const& aabb, ::SharedTypes::v1_26_20::MaterialType liquidType);

    MCAPI static float getLiquidFlowStrength(::SharedTypes::v1_26_20::MaterialType liquidType);

    MCAPI static ::Vec3 getViewVector(::ActorRotationComponent const& actorRotation, float a);

    MCAPI static ::Vec3 getViewVector(::Vec2 const& prevRot, ::Vec2 const& rot, float a);

    MCAPI static bool isImmobile(::EntityContext const& entity);

    MCAPI static bool isInLiquid(
        ::SharedTypes::v1_26_20::MaterialType liquidType,
        ::IConstBlockSource const&            region,
        ::AABB const&                         mainAABB,
        ::std::vector<::AABB> const&          subAABBs
    );

    MCFOLD static ::Actor const* tryGetFromComponent(::ActorOwnerComponent const& component, bool includeRemoved);

    MCFOLD static ::Actor* tryGetFromComponent(::ActorOwnerComponent& component, bool includeRemoved);

    MCFOLD static ::Actor const* tryGetFromEntity(::EntityContext const& entity, bool includeRemoved);

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
    MCAPI void $outOfWorld();

    MCFOLD void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCAPI void $_serverInitItemStackIds();

    MCAPI void $_doInitialMove();

    MCAPI bool $hasComponent(::HashedString const& name) const;

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

    MCAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCAPI bool $canDisableShield();

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCFOLD void $lerpMotion(::Vec3 const& delta);

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

    MCAPI void $setSitting(bool value);

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

    MCFOLD ::HashedString const& $queryEntityRenderer() const;

    MCFOLD ::ActorUniqueID $getSourceUniqueID() const;

    MCFOLD bool $canFreeze() const;

    MCAPI ::AABB $getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;

    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCAPI void $changeDimension(::DimensionType toId);

    MCFOLD void $changeDimension(::ChangeDimensionPacket const& packet);

    MCFOLD ::ActorUniqueID $getControllingPlayer() const;

    MCFOLD float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

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

    MCFOLD bool $swing(::ActorSwingSource swingSource);

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

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
