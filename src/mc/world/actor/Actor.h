#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/ActorFlags.h"
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
#include "mc/platform/brstd/bitset.h"
#include "mc/platform/brstd/flat_map.h"
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
class Interaction;
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
struct BoneCacheKey;
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

    LLNDAPI float distanceTo(::Vec3 const& pos) const;

    LLNDAPI float distanceToSqr(::Actor const& e) const;

    LLNDAPI float distanceToSqr(::Vec3 const& pos) const;

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

    [[nodiscard]] inline bool isType(::ActorType type) const { return getEntityTypeId() == type; }

    LLNDAPI bool isPlayer() const;

    [[nodiscard]] inline bool isClientSide() const { return !mLevel; }

    LLNDAPI bool isTouchingDamageBlock() const;

    LLNDAPI int getHealth() const;

    LLNDAPI int getMaxHealth() const;

    LLNDAPI bool isInWorld() const;

    LLNDAPI ItemStack const& getArmor(::SharedTypes::Legacy::ArmorSlot slot) const;

    LLNDAPI bool getStatusFlag(::ActorFlags flag) const;

    LLNDAPI bool isOnHotBlock() const;

    [[nodiscard]] bool isSwimming() const { return getStatusFlag(::ActorFlags::Swimming); }
    [[nodiscard]] bool isMoving() const { return getStatusFlag(::ActorFlags::Moving); }
    [[nodiscard]] bool isSprinting() const { return getStatusFlag(::ActorFlags::Sprinting); }
    [[nodiscard]] bool isSneaking() const { return getStatusFlag(::ActorFlags::Sneaking); }
    [[nodiscard]] bool isCrawling() const { return getStatusFlag(::ActorFlags::Crawling); }
    [[nodiscard]] bool isGliding() const { return getStatusFlag(::ActorFlags::Gliding); }
    [[nodiscard]] bool isDancing() const { return getStatusFlag(::ActorFlags::Dancing); }
    [[nodiscard]] bool canFly() const { return getStatusFlag(::ActorFlags::Canfly); }
    [[nodiscard]] bool isHurt() const {
        if (auto health = getHealth(); health > 0 && health < getMaxHealth()) {
            return true;
        } else {
            return false;
        }
    }

    LLNDAPI ::ItemStack const& getOffhandSlot() const;

    LLNDAPI bool isDead() const;

    LLNDAPI ::ItemStack const& getEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::EntityContext>                               mEntityContext;
    ::ll::TypedStorage<8, 80, ::VariantParameterList>                        mInitParams;
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
    ::ll::TypedStorage<
        8,
        48,
        ::brstd::flat_map<
            ::BoneCacheKey,
            ::Matrix,
            ::std::less<::BoneCacheKey>,
            ::std::vector<::BoneCacheKey>,
            ::std::vector<::Matrix>>>
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
    ::ll::TypedStorage<8, 24, ::BuiltInActorComponents>                    mBuiltInComponents;
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

    virtual bool isValidTarget(::Actor* attacker) const;

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

    virtual ::AABB getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;

    virtual void handleInsidePortal(::BlockPos const& portalPos);

    virtual bool canChangeDimensionsUsingPortal() const;

    virtual void changeDimension(::DimensionType toId);

#ifdef LL_PLAT_S
    virtual void changeDimension(::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    virtual void changeDimension(::ChangeDimensionPacket const& packet);
#endif

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

    virtual bool swing(::ActorSwingSource swingSource, ::HandSlot handSlot);

    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    virtual void getDebugText(::std::vector<::std::string>& outputInfo);

    virtual float getMapDecorationRotation() const;

    virtual float getPassengerYRotation(::Actor const& passenger) const;

    virtual bool add(::ItemStack& item);

    virtual bool drop(::ItemStack const& item, bool const randomly);

    virtual ::Interaction getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot);

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
    MCNAPI Actor(::ILevel& level, ::EntityContext& entityContext);

    MCNAPI Actor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );

    MCNAPI ::BuiltInActorComponents _addActorBuiltInComponents();

    MCNAPI void _addActorNonBuiltInComponents();

    MCNAPI bool _applyPendingPropertyChanges();

    MCNAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);

    MCFOLD ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();

    MCNAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );

    MCNAPI void _initializeMaxAutoStep(float maxAutoStep);

    MCNAPI bool _isDeathLootAllowed() const;

    MCNAPI void _notifyMobEffectsOnHurt(::ActorDamageSource const& source, float damage);

    MCNAPI void _refreshAABB();

    MCAPI void _sendDirtyActorData();

    MCNAPI void _setActorTypeId(::ActorType type);

    MCNAPI void _setDimensionTransitionComponent(::DimensionType fromId, ::DimensionType toId, int portalCooldown);

    MCNAPI void _setHandContainerItem(::ItemStack const& item, ::HandSlot handSlot);

    MCAPI void _setPos(::Vec3 const& pos);

    MCNAPI void _setupServerAnimationComponent();

    MCNAPI void _updateComposition(bool reload);

    MCAPI void addEffect(::MobEffectInstance const& effect);

    MCAPI bool addTag(::std::string const& tag);

    MCNAPI void applyOnBornPropertyChanges();

    MCNAPI void buildDebugGroupInfo(::std::string& out) const;

    MCAPI void burn(int damage, bool inFire);

    MCNAPI bool canAttack(::Actor const& entity) const;

    MCNAPI bool canBeginOrContinueClimbingLadder() const;

    MCNAPI bool canMate(::Actor const& partner) const;

    MCNAPI bool canReceiveMobEffectsFromGameplay() const;

    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;

    MCAPI bool canSeeDaylight() const;

    MCNAPI void celebrateHunt(int duration, bool special);

    MCNAPI void checkFallDamage(float ya, bool onGround, bool recheckLiquid);

    MCNAPI void chorusFruitTeleport(::Vec3 const& range);

    MCNAPI bool closerThan(::Actor const& e, float distance) const;

    MCNAPI bool closerThan(::Actor const& e, float distanceXZ, float distanceY) const;

    MCNAPI void consumeItem(::ItemActor& itemActor, int count);

    MCNAPI ::UpdateEquipPacket createUpdateEquipPacket(int containerID);

    MCNAPI ::UpdateTradePacket createUpdateTradePacket(int containerID);

    MCNAPI void deregisterTagsFromLevelCache();

    MCNAPI float distanceSqrToBlockPosCenter(::BlockPos const& pos) const;

    MCAPI float distanceTo(::Actor const& e) const;

    MCNAPI void dropTowards(::ItemStack const& item, ::Vec3 towards);

    MCNAPI void equip(::EquipmentTable const& equipmentTable);

    MCNAPI void equip(::std::string const& lootTableFilePath);

    MCNAPI void equipFromEquipmentDefinition();

    MCNAPI float evaluateSeatRotation(::RideableComponent const& rideable, bool useVehicleRenderParams);

#ifdef LL_PLAT_S
    MCAPI bool executeEvent(::std::string const& name, ::VariantParameterList const& list);
#endif

    MCNAPI void exitVehicle(bool exitFromPassenger, bool actorIsBeingDestroyed, bool wasEjectedByActivatorRail);

    MCNAPI ::FishingHook* fetchFishingHook();

    MCNAPI ::std::vector<::DistanceSortedActor>
    fetchNearbyActorsSorted(::Vec3 const& distance, ::ActorType actorTypeId);

#ifdef LL_PLAT_C
    MCNAPI int getActiveEffectCount() const;
#endif

    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

#ifdef LL_PLAT_C
    MCNAPI ::Matrix getActorToWorldTransform(float frameAlpha, bool useActorRotation, ::Vec3 const& offset) const;
#endif

    MCFOLD ::std::vector<::MobEffectInstance> const& getAllEffects() const;

    MCAPI ::Vec3 getAttachPos(::SharedTypes::Legacy::ActorLocation location, float alpha = 0.0f) const;

    MCAPI ::AttributeInstanceConstRef getAttribute(::Attribute const& attribute) const;

    MCAPI ::gsl::not_null<::BaseAttributeMap const*> getAttributes() const;

#ifdef LL_PLAT_C
    MCAPI ::gsl::not_null<::BaseAttributeMap*> getAttributes();
#endif

    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;

    MCNAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;

    MCNAPI int getChestSlots() const;

    MCNAPI float getCurrentSwimAmount() const;

    MCAPI ::Dimension& getDimension() const;

    MCFOLD ::BlockSource& getDimensionBlockSource() const;

    MCFOLD ::BlockSource const& getDimensionBlockSourceConst() const;

    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;

    MCAPI ::MobEffectInstance const* getEffect(uint effectId) const;

    MCAPI ::ActorType getEntityTypeId() const;

    MCNAPI int getEquipSlots() const;

    MCNAPI int getEquipmentCount() const;

    MCNAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;

    MCAPI ::Vec3 getEyePos() const;

    MCAPI float getFallDistance() const;

#ifdef LL_PLAT_C
    MCAPI ::std::string getFilteredNameTag() const;
#endif

    MCNAPI bool getFirstAvailableSeatPos(::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI ::Actor* getFirstPassenger() const;

#ifdef LL_PLAT_C
    MCNAPI ::Block const* getInsideBlock() const;
#endif

    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;

    MCNAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;

    MCNAPI int getInventorySize() const;

    MCAPI ::ItemStack const& getItemInHandSlot(::HandSlot slot) const;

    MCAPI ::ActorUniqueID getLeashHolder() const;

    MCAPI uint64 getLevelTimeStamp() const;

    MCNAPI ::std::vector<::ActorLink> getLinks() const;

    MCNAPI ::LootTable* getLootTable();

    MCAPI int getMarkVariant() const;

    MCAPI float getMaxAutoStep() const;

#ifdef LL_PLAT_C
    MCNAPI int64 getMetadataId() const;
#endif

    MCAPI ::MutableAttributeWithContext getMutableAttribute(::Attribute const& attribute);

    MCAPI ::std::string const& getNameTag() const;

    MCNAPI int getOnDeathExperience();

    MCNAPI ::DynamicProperties& getOrAddDynamicProperties();

    MCAPI ::ActorUniqueID const& getOrCreateUniqueID() const;

    MCAPI ::Mob* getOwner() const;

    MCAPI ::ActorUniqueID const getOwnerId() const;

    MCAPI int getPassengerIndex(::Actor const& passenger) const;

    MCAPI ::Player* getPlayerOwner() const;

    MCAPI ::Random& getRandom() const;

    MCNAPI ::Bedrock::Safety::RedactableString getRedactableNameTag() const;

    MCNAPI float getRidingHeight() const;

    MCAPI ::ActorRuntimeID getRuntimeID() const;

    MCNAPI int getStrength() const;

    MCNAPI float getSwimAmount(float a) const;

    MCAPI ::std::vector<::std::string> const getTags() const;

    MCAPI ::MerchantRecipeList* getTradeOffers();

    MCAPI int getVariant() const;

    MCAPI ::Actor* getVehicle() const;

    MCNAPI ::ActorRuntimeID getVehicleRuntimeID() const;

    MCAPI ::Vec3 getViewVector(float a = 0.0f) const;

    MCFOLD float getYHeadRot() const;

#ifdef LL_PLAT_C
    MCNAPI ::InterpolationPair getYHeadRotationsNewOld() const;
#endif

    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCNAPI void handleLeftoverFallDamage(float damage, ::ActorDamageSource source);

    MCAPI bool hasAnyEffects() const;

    MCAPI bool hasDimension() const;

    MCAPI bool hasFamily(::HashedString const& family) const;

    MCAPI bool hasPassenger() const;

    MCNAPI bool hasPlayerPassenger() const;

    MCNAPI bool hasPriorityAmmunition() const;

    MCAPI bool hasRuntimeID() const;

    MCAPI bool hasSaddle() const;

    MCAPI bool hasTag(::std::string const& tag) const;

    MCAPI bool hasTags() const;

    MCAPI bool hasType(::ActorType types) const;

    MCNAPI bool hasUniqueID() const;

    MCAPI void heal(int heal);

    MCAPI ::ActorHurtResult
    hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI bool inDownwardFlowingLiquid() const;

    MCNAPI void initParams(::RenderParams& params);

    MCNAPI bool isActorLocationInMaterial(
        ::SharedTypes::Legacy::ActorLocation  actorLocation,
        ::SharedTypes::v1_26_20::MaterialType type
    ) const;

    MCAPI bool isAdventure() const;

    MCNAPI bool isAngry() const;

    MCAPI bool isBaby() const;

    MCAPI bool isCreative() const;

    MCNAPI bool isDoorOpener() const;

    MCAPI bool isImmersedInWater() const;

    MCNAPI bool isInClouds() const;

    MCAPI bool isInLove() const;

    MCNAPI bool isInPrecipitation() const;

    MCAPI bool isInRain() const;

    MCAPI bool isInSnow() const;

    MCAPI bool isInThunderstorm() const;

    MCAPI bool isInWater() const;

    MCAPI bool isInWaterOrRain() const;

    MCNAPI bool isInsidePortal() const;

    MCNAPI bool isInvertedHealAndHarm() const;

    MCNAPI bool isJumping() const;

    MCNAPI bool isLayingDown() const;

    MCAPI bool isLeashed() const;

    MCAPI bool isLocalPlayer() const;

    MCNAPI bool isOrphan() const;

    MCNAPI bool isOverWater() const;

    MCAPI bool isPassenger(::Actor const& passenger) const;

    MCNAPI bool isResting() const;

    MCAPI bool isRiding(::Actor* targetVehicle) const;

    MCNAPI bool isSilent() const;

    MCAPI bool isSitting() const;

    MCAPI bool isSpectator() const;

    MCNAPI bool isStanding() const;

    MCAPI bool isSurvival() const;

    MCAPI bool isTame() const;

    MCAPI bool isTrading() const;

    MCAPI bool isUnderLiquid(::SharedTypes::v1_26_20::MaterialType type) const;

    MCNAPI bool isUseNewTradeScreen() const;

    MCAPI bool isWearingLeatherArmor() const;

    MCNAPI bool isWorldBuilder() const;

    MCNAPI void killed(::Actor& entity);

    MCNAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, int steps);

    MCNAPI void lerpTo(::Vec3 const& pos, ::Vec2 const& rot, float headYaw, int steps);

    MCNAPI void
    loadLinks(::CompoundTag const& entityTag, ::std::vector<::ActorLink>& links, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void migrateUniqueID(::ActorUniqueID id);

    MCAPI void move(::Vec3 const& posDelta);

    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    MCAPI bool onClimbableBlock() const;

    MCNAPI void onEffectUpdated(::MobEffectInstance& effect);

#ifdef LL_PLAT_C
    MCNAPI void onSynchedFlagUpdate(::brstd::bitset<131, uint64> const& changedFlags);
#endif

    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    MCAPI void playSound(
        ::IConstBlockSource const&             region,
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data
    );

    MCNAPI void playSynchronizedSound(
        ::SoundEventIdentifier const& soundEvent,
        ::Vec3 const&                 pos,
        int                           data,
        bool                          isGlobal,
        ::Player*                     primaryLocalPlayer
    );

    MCNAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal,
        ::std::optional<::Vec3> const&
    );

#ifdef LL_PLAT_C
    MCNAPI void positionAllPassengers();
#endif

    MCAPI void positionPassenger(::Actor& passenger);

    MCNAPI void postSplashGameEvent();

    MCNAPI bool pullInEntity(::Actor& e);

    MCNAPI void pushBackActionEventToActionQueue(::ActionEvent actionEvent);

    MCNAPI void pushOutOfBlocks(::Vec3 const& vec);

#ifdef LL_PLAT_C
    MCNAPI void refreshComponents();
#endif

    MCNAPI void reload();

    MCAPI void removeAllEffects();

    MCAPI void removeAllPassengers(bool actorIsBeingDestroyed, bool exitFromPassenger);

    MCAPI void removeEffect(int effectId);

    MCAPI bool removeTag(::std::string const& tag);

    MCAPI bool save(::CompoundTag& entityTag) const;

    MCAPI void setActorRendererId(::HashedString actorRendererId);

    MCNAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCNAPI void setDead(bool isDead);

    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

#ifdef LL_PLAT_C
    MCNAPI void setEquipFromPacket(::UpdateEquipPacket const& packet);
#endif

    MCAPI void setFallDistance(float distance);

    MCAPI void setInLove(::Actor* lovePartner);

    MCAPI void setInvisible(bool value);

    MCNAPI void setLastHurtByMob(::Mob* mob);

    MCAPI void setLastHurtByPlayer(::Player* player);

    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);

    MCNAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setNameTag(::std::string const& name);

#ifdef LL_PLAT_C
    MCNAPI void setOffersFromPacket(::UpdateTradePacket const& packet);
#endif

    MCAPI void setPersistent();

    MCNAPI void setRedactableNameTag(::Bedrock::Safety::RedactableString const& name);

#ifdef LL_PLAT_C
    MCNAPI void setRotationWrapped(::Vec2 const& rot);
#endif

    MCNAPI void setRuntimeID(::ActorRuntimeID id);

    MCNAPI void setScoreTag(::std::string const& score);

    MCAPI void setStrength(int strength);

    MCNAPI void setStrengthMax(int strength);

#ifdef LL_PLAT_C
    MCAPI void setTradingPlayer(::Player* player);
#endif

    MCNAPI void setUniqueID(::ActorUniqueID id);

    MCAPI void setYHeadRot(float yHeadRot);

    MCAPI void setYHeadRotations(float yHeadRot, float oldYHeadRot);

    MCNAPI bool shouldOrphan(::BlockSource& source);

    MCNAPI bool shouldTick() const;

    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    MCNAPI void spawnTrailBubbles();

    MCAPI void
    stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles, bool isBeingTeleported);

    MCNAPI void synchronousSetSize(float w, float h);

    MCNAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    MCNAPI void thawFreezeEffect();

    MCAPI bool tick(::BlockSource& region);

    MCNAPI void transferTickingArea(::Dimension const& toDimension);

    MCNAPI void triggerActorRemovedEvent();

    MCNAPI ::std::vector<::ItemDescriptor> const* tryGetEquippableSlotAllowedItems(int slotNumber) const;

    MCNAPI ::std::optional<int> tryGetEquippableSlotForItem(::ItemDescriptor item) const;

    MCNAPI bool tryTeleportTo(::Vec3 const& pos, bool landOnBlock, bool avoidLiquid, int cause, int entityType);

#ifdef LL_PLAT_S
    MCNAPI void updateDescription();
#endif

    MCNAPI void updateDimensionChunkMove();

    MCNAPI void updateInsideBlock();

    MCNAPI void updateInvisibilityStatus();

    MCNAPI void updateWaterState();

    MCNAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::BlockPos> getBlocksCurrentlyStandingOn(
        ::AABB const&                                      aabb,
        ::IConstBlockSource const&                         region,
        float                                              ignoreGapBelow,
        ::optional_ref<::GetCollisionShapeInterface const> other
    );

#ifdef LL_PLAT_C
    MCNAPI static ::Vec3 getInterpolatedPosition(
        float                                 a,
        ::StateVectorComponent const&         stateVectorComponent,
        ::DynamicRenderOffsetComponent const* dynamicRenderOffsets
    );
#endif

    MCNAPI static bool isInLiquid(
        ::SharedTypes::v1_26_20::MaterialType liquidType,
        ::IConstBlockSource const&            region,
        ::AABB const&                         mainAABB,
        ::std::vector<::AABB> const&          subAABBs
    );

    MCAPI static ::Actor* tryGetFromEntity(::StackRefResult<::EntityContext> entity, bool includeRemoved);

    MCNAPI static ::Actor*
    tryGetFromEntity(::StrictEntityContext const& entity, ::EntityRegistry& registry, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ILevel& level, ::EntityContext& entityContext);

    MCNAPI void* $ctor(
        ::ActorDefinitionGroup*            definitions,
        ::ActorDefinitionIdentifier const& definitionName,
        ::EntityContext&                   entityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $hasComponent(::HashedString const& name) const;

    MCAPI void $outOfWorld();

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    MCNAPI void $_serverInitItemStackIds();

    MCNAPI void $_doInitialMove();

    MCNAPI void $resetUserPos(::ActorResetRule resetRule);

    MCNAPI ::ActorType $getOwnerEntityType();

    MCAPI void $remove();

    MCNAPI ::Vec3 $getFiringPos() const;

    MCNAPI float $getInterpolatedBodyRot(float a) const;

    MCNAPI float $getInterpolatedHeadRot(float a) const;

    MCNAPI float $getInterpolatedBodyYaw(float a) const;

    MCNAPI float $getYawSpeedInDegreesPerSecond() const;

    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCNAPI bool $isFireImmune() const;

    MCNAPI void $blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    MCNAPI bool $canDisableShield();

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCNAPI void $lerpMotion(::Vec3 const& delta);

    MCNAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCAPI void $normalTick();

    MCNAPI void $baseTick();

    MCNAPI void $passengerTick();

    MCNAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $addPassenger(::Actor& passenger);

    MCNAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    MCNAPI ::std::string $getEntityLocNameString() const;

    MCNAPI bool $isInvisible() const;

    MCNAPI bool $canShowNameTag() const;

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCNAPI float $getShadowRadius() const;

    MCNAPI ::Vec3 $getHeadLookVector(float a) const;

    MCNAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCNAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCNAPI void $playerTouch(::Player& player);

    MCNAPI bool $isImmobile() const;

    MCNAPI bool $isSilentObserver() const;

    MCNAPI bool $isSleeping() const;

    MCNAPI void $setSleeping(bool val);

    MCNAPI void $setSneaking(bool value);

    MCNAPI bool $isBlocking() const;

    MCNAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCNAPI bool $isAlive() const;

    MCNAPI bool $isOnFire() const;

    MCNAPI bool $isSurfaceMob() const;

    MCNAPI bool $isTargetable() const;

    MCNAPI void $setTarget(::Actor* entity);

    MCNAPI bool $isValidTarget(::Actor* attacker) const;

    MCNAPI ::ActorHurtResult $attack(::Actor& target, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCNAPI void $performRangedAttack(::Actor& target, float);

    MCNAPI void $setOwner(::ActorUniqueID const ownerId);

    MCNAPI void $setSitting(bool value);

    MCNAPI void $onTame();

    MCNAPI void $onFailedTame();

    MCNAPI void $setStanding(bool value);

    MCNAPI bool $canPowerJump() const;

    MCNAPI bool $isEnchanted() const;

    MCNAPI void $playAmbientSound();

    MCNAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI ::SharedTypes::Legacy::ActorDamageCause $getBlockDamageCause(::Block const& block) const;

    MCNAPI ::ActorHurtResult $doFireHurt(int amount);

    MCAPI void $onLightningHit();

    MCNAPI void $feed(int itemId);

    MCNAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCNAPI ::HashedString const& $getActorRendererId() const;

    MCAPI void $despawn();

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCNAPI ::ArmorMaterialType $getArmorMaterialTypeInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCNAPI int $getArmorTextureIndexInSlot(::SharedTypes::Legacy::ArmorSlot slot) const;

    MCNAPI float $getArmorColorInSlot(::SharedTypes::Legacy::ArmorSlot slot, int channelRGBA) const;

    MCNAPI void $setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCNAPI ::ItemStack const& $getCarriedItem() const;

    MCNAPI void $setOffhandSlot(::ItemStack const& item);

    MCNAPI ::ItemStack const& $getEquippedTotem() const;

    MCNAPI bool $consumeTotem();

    MCAPI bool $load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI ::HashedString const& $queryEntityRenderer() const;

    MCNAPI ::ActorUniqueID $getSourceUniqueID() const;

    MCNAPI ::AABB $getLiquidAABB(::SharedTypes::v1_26_20::MaterialType const liquidType) const;

    MCNAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI void $changeDimension(::DimensionType toId);

#ifdef LL_PLAT_S
    MCNAPI void $changeDimension(::ChangeDimensionPacket const&);
#else // LL_PLAT_C
    MCNAPI void $changeDimension(::ChangeDimensionPacket const& packet);
#endif

    MCNAPI ::ActorUniqueID $getControllingPlayer() const;

    MCNAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCNAPI void $onSynchedDataUpdate(int dataId);

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCNAPI bool $canPickupItem(::ItemStack const& item) const;

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI bool $inCaravan() const;

    MCNAPI void $sendMotionPacketIfNeeded();

    MCNAPI bool $canSynchronizeNewEntity() const;

    MCNAPI void $startSwimming();

    MCNAPI void $stopSwimming();

    MCNAPI void $buildDebugInfo(::std::string& out) const;

    MCNAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCNAPI int $getDeathTime() const;

    MCNAPI bool $canBeAffected(uint id) const;

    MCNAPI bool $canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);

    MCNAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCNAPI ::AnimationComponent& $getAnimationComponent();

    MCNAPI void $openContainerComponent(::Player& player);

    MCNAPI bool $swing(::ActorSwingSource swingSource, ::HandSlot handSlot);

    MCNAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCNAPI void $getDebugText(::std::vector<::std::string>& outputInfo);

    MCNAPI float $getMapDecorationRotation() const;

    MCNAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCNAPI bool $add(::ItemStack& item);

    MCNAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCNAPI ::Interaction $getInteraction(::Player& player, ::Vec3 const& location, ::HandSlot handSlot);

    MCNAPI bool $canDestroyBlock(::Block const& block) const;

    MCNAPI void $setAuxValue(int aux);

    MCNAPI void $renderDebugServerState(::IOptionsReader const& options);

    MCNAPI void $kill();

    MCNAPI void $die(::ActorDamageSource const& source);

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCNAPI void $onPush(::Actor& source);

    MCNAPI ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCNAPI ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCNAPI bool $hasDiedBefore() const;

    MCNAPI void $doEnterWaterSplashEffect();

    MCNAPI void $doExitWaterSplashEffect();

    MCNAPI void $doWaterSplashEffect();

    MCNAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCNAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCNAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCNAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& tag) const;


    // NOLINTEND
};
