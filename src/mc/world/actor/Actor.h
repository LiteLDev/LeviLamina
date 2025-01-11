#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/input/InputMode.h"
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/input/NewInteractionModel.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/actor/ActorCategory.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorFlags.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorLocation.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ArmorMaterialType.h"
#include "mc/world/actor/PaletteColor.h"
#include "mc/world/actor/SpawnRuleEnum.h"
#include "mc/world/actor/animation/AnimationComponentGroupType.h"
#include "mc/world/item/ArmorSlot.h"
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
class ActorDefinitionPtr;
class ActorInteraction;
class ActorOwnerComponent;
class ActorRuntimeID;
class ActorTerrainInterlockData;
class AddActorBasePacket;
class AnimationComponent;
class Attribute;
class AttributeInstance;
class BaseAttributeMap;
class Block;
class BlockPos;
class BlockSource;
class ChangeDimensionPacket;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class DynamicProperties;
class EntityContext;
class EntityRegistry;
class FishingHook;
class GameEvent;
class GetCollisionShapeInterface;
class HashedString;
class IConstBlockSource;
class ILevel;
class ItemActor;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class Level;
class ListTag;
class LootTable;
class MerchantRecipeList;
class Mob;
class MobEffect;
class MobEffectInstance;
class MolangVariableMap;
class Options;
class Player;
class Random;
class RenderParams;
class RideableComponent;
class RopeSystem;
class SpatialActorNetworkData;
class StrictEntityContext;
class SynchedActorDataEntityWrapper;
class UpdateEquipPacket;
class UpdateTradePacket;
class Vec2;
class Vec3;
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorLink;
struct ActorRotationComponent;
struct ActorUniqueID;
struct BuiltInActorComponents;
struct DistanceSortedActor;
struct EquipmentTable;
struct InterpolationPair;
struct PlayerMovementSettings;
struct StateVectorComponent;
struct VariantParameterList;
struct VariantParameterListConst;
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
namespace mce { class Color; }
// clang-format on

class Actor {
public:
    // Actor inner types define
    using EntityBlockCollisionCallback =
        ::std::function<void(::BlockSource&, ::Block const&, ::BlockPos const&, ::Actor&)>;

public:
    LLNDAPI class EntityContext&       getEntityContext();
    LLNDAPI class EntityContext const& getEntityContext() const;

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

    LLNDAPI float getPosDeltaPerSecLength() const;

    LLAPI bool hurtByCause(
        float               damage,
        ActorDamageCause    cause    = ActorDamageCause::Override,
        optional_ref<Actor> attacker = std::nullopt
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
    ::ll::TypedStorage<4, 4, float>                                        mPushthrough;
    ::ll::TypedStorage<4, 4, int>                                          mTickCount;
    ::ll::TypedStorage<4, 4, int>                                          mInvulnerableTime;
    ::ll::TypedStorage<4, 4, int>                                          mLastHealth;
    ::ll::TypedStorage<1, 1, bool>                                         mHurtMarked;
    ::ll::TypedStorage<1, 1, bool>                                         mWasHurtLastFrame;
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
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByMobId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mLastHurtByPlayerId;
    ::ll::TypedStorage<8, 8, uint64>                                       mLastHurtTimestamp;
    ::ll::TypedStorage<4, 4, ::ActorDamageCause>                           mLastHurtCause;
    ::ll::TypedStorage<4, 4, float>                                        mLastHurt;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtMobTimestamp;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTime;
    ::ll::TypedStorage<4, 4, int>                                          mLastHurtByMobTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                         mIsPredictableProjectile;
    ::ll::TypedStorage<1, 1, bool>                                         mIsRenderingInUI;
    ::ll::TypedStorage<1, 1, bool>                                         mUpdateEffects;
    ::ll::TypedStorage<1, 1, bool>                                         mCanPickupItems;
    ::ll::TypedStorage<1, 1, bool>                                         mHasSetCanPickupItems;
    ::ll::TypedStorage<1, 1, bool>                                         mChainedDamageEffects;
    ::ll::TypedStorage<1, 1, bool>                                         mWasInWallLastTick;
    ::ll::TypedStorage<4, 4, int>                                          mTicksInWall;
    ::ll::TypedStorage<4, 4, int>                                          mAffectedByWaterBottleTicksToEffect;
    ::ll::TypedStorage<4, 4, ::SpawnRuleEnum>                              mSpawnRulesEnum;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ActionQueue>>             mActionQueue;
    ::ll::TypedStorage<8, 56, ::MolangVariableMap>                         mMolangVariables;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                              mFishingHookID;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual bool hasComponent(::HashedString const& name) const;

    // vIndex: 1
    virtual void outOfWorld();

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod, ::VariantParameterList const&);

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod);

    // vIndex: 4
    virtual void initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const&);

    // vIndex: 5
    virtual void reloadComponents(::ActorInitializationMethod, ::VariantParameterList const&);

    // vIndex: 6
    virtual void _serverInitItemStackIds();

    // vIndex: 7
    virtual void _doInitialMove();

    // vIndex: 8
    virtual ~Actor();

    // vIndex: 9
    virtual void resetUserPos(bool);

    // vIndex: 10
    virtual ::ActorType getOwnerEntityType();

    // vIndex: 11
    virtual void remove();

    // vIndex: 12
    virtual ::Vec3 getFiringPos() const;

    // vIndex: 13
    virtual float getInterpolatedBodyRot(float a = 0.0f) const;

    // vIndex: 14
    virtual float getInterpolatedHeadRot(float = 0.0f) const;

    // vIndex: 15
    virtual float getInterpolatedBodyYaw(float = 0.0f) const;

    // vIndex: 16
    virtual float getYawSpeedInDegreesPerSecond() const;

    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const;

    // vIndex: 18
    virtual bool isFireImmune() const;

    // vIndex: 19
    virtual void blockedByShield(::ActorDamageSource const& source, ::Actor& blocker);

    // vIndex: 20
    virtual bool canDisableShield();

    // vIndex: 21
    virtual void teleportTo(::Vec3 const& pos, bool shouldStopRiding, int, int, bool keepVelocity);

    // vIndex: 22
    virtual void lerpMotion(::Vec3 const& delta);

    // vIndex: 23
    virtual ::std::unique_ptr<::AddActorBasePacket> tryCreateAddActorPacket();

    // vIndex: 24
    virtual void normalTick();

    // vIndex: 25
    virtual void baseTick();

    // vIndex: 26
    virtual void passengerTick();

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding);

    // vIndex: 28
    virtual void addPassenger(::Actor& passenger);

    // vIndex: 29
    virtual ::std::string getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    // vIndex: 30
    virtual ::std::string getEntityLocNameString() const;

    // vIndex: 31
    virtual bool isInWall() const;

    // vIndex: 32
    virtual bool isInvisible() const;

    // vIndex: 33
    virtual bool canShowNameTag() const;

    // vIndex: 34
    virtual ::std::string getFormattedNameTag() const;

    // vIndex: 35
    virtual ::mce::Color getNameTagTextColor() const;

    // vIndex: 36
    virtual float getShadowRadius() const;

    // vIndex: 37
    virtual ::Vec3 getHeadLookVector(float a = 0.0f) const;

    // vIndex: 38
    virtual bool canInteractWithOtherEntitiesInGame() const;

    // vIndex: 39
    virtual float getBrightness(float a, ::IConstBlockSource const& region) const;

    // vIndex: 40
    virtual void playerTouch(::Player&);

    // vIndex: 41
    virtual bool isImmobile() const;

    // vIndex: 42
    virtual bool isSilentObserver() const;

    // vIndex: 43
    virtual bool isSleeping() const;

    // vIndex: 44
    virtual void setSleeping(bool);

    // vIndex: 45
    virtual void setSneaking(bool value);

    // vIndex: 46
    virtual bool isBlocking() const;

    // vIndex: 47
    virtual bool isDamageBlocked(::ActorDamageSource const&) const;

    // vIndex: 48
    virtual bool isAlive() const;

    // vIndex: 49
    virtual bool isOnFire() const;

    // vIndex: 50
    virtual bool isSurfaceMob() const;

    // vIndex: 51
    virtual bool isTargetable() const;

    // vIndex: 52
    virtual void setTarget(::Actor* entity);

    // vIndex: 53
    virtual bool isValidTarget(::Actor*) const;

    // vIndex: 54
    virtual bool attack(::Actor& target, ::ActorDamageCause const&);

    // vIndex: 55
    virtual void performRangedAttack(::Actor& target, float);

    // vIndex: 56
    virtual void setOwner(::ActorUniqueID const ownerId);

    // vIndex: 57
    virtual void setSitting(bool value);

    // vIndex: 58
    virtual void onTame();

    // vIndex: 59
    virtual void onFailedTame();

    // vIndex: 60
    virtual void setStanding(bool value);

    // vIndex: 61
    virtual bool canPowerJump() const;

    // vIndex: 62
    virtual bool isEnchanted() const;

    // vIndex: 63
    virtual bool shouldRender() const;

    // vIndex: 64
    virtual void playAmbientSound();

    // vIndex: 65
    virtual ::SharedTypes::Legacy::LevelSoundEvent getAmbientSound() const;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const;

    // vIndex: 67
    virtual ::ActorDamageCause getBlockDamageCause(::Block const& block) const;

    // vIndex: 68
    virtual bool doFireHurt(int amount);

    // vIndex: 69
    virtual void onLightningHit();

    // vIndex: 70
    virtual void feed(int itemId);

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data);

    // vIndex: 72
    virtual ::HashedString const& getActorRendererId() const;

    // vIndex: 73
    virtual void despawn();

    // vIndex: 74
    virtual void setArmor(::ArmorSlot slot, ::ItemStack const& item);

    // vIndex: 75
    virtual ::ArmorMaterialType getArmorMaterialTypeInSlot(::ArmorSlot) const;

    // vIndex: 76
    virtual int getArmorTextureIndexInSlot(::ArmorSlot) const;

    // vIndex: 77
    virtual float getArmorColorInSlot(::ArmorSlot, int) const;

    // vIndex: 78
    virtual void setEquippedSlot(::SharedTypes::Legacy::EquipmentSlot, ::ItemStack const&);

    // vIndex: 79
    virtual void setCarriedItem(::ItemStack const& item);

    // vIndex: 80
    virtual ::ItemStack const& getCarriedItem() const;

    // vIndex: 81
    virtual void setOffhandSlot(::ItemStack const& item);

    // vIndex: 82
    virtual ::ItemStack const& getEquippedTotem() const;

    // vIndex: 83
    virtual bool consumeTotem();

    // vIndex: 84
    virtual bool load(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    // vIndex: 85
    virtual ::HashedString const& queryEntityRenderer() const;

    // vIndex: 86
    virtual ::ActorUniqueID getSourceUniqueID() const;

    // vIndex: 87
    virtual bool canFreeze() const;

    // vIndex: 88
    virtual ::AABB getLiquidAABB(::MaterialType const liquidType) const;

    // vIndex: 89
    virtual void handleInsidePortal(::BlockPos const& portalPos);

    // vIndex: 90
    virtual bool canChangeDimensionsUsingPortal() const;

    // vIndex: 92
    virtual void changeDimension(::DimensionType toId);

    // vIndex: 91
    virtual void changeDimension(::ChangeDimensionPacket const&);

    // vIndex: 93
    virtual ::ActorUniqueID getControllingPlayer() const;

    // vIndex: 94
    virtual float causeFallDamageToActor(float, float, ::ActorDamageSource);

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId);

    // vIndex: 96
    virtual bool canAddPassenger(::Actor& passenger) const;

    // vIndex: 97
    virtual bool canPickupItem(::ItemStack const&) const;

    // vIndex: 98
    virtual bool canBePulledIntoVehicle() const;

    // vIndex: 99
    virtual bool inCaravan() const;

    // vIndex: 100
    virtual void sendMotionPacketIfNeeded(::PlayerMovementSettings const& playerMovementSettings);

    // vIndex: 101
    virtual bool canSynchronizeNewEntity() const;

    // vIndex: 102
    virtual void startSwimming();

    // vIndex: 103
    virtual void stopSwimming();

    // vIndex: 104
    virtual void buildDebugInfo(::std::string&) const;

    // vIndex: 105
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const;

    // vIndex: 106
    virtual int getDeathTime() const;

    // vIndex: 107
    virtual bool canBeAffected(uint id) const;

    // vIndex: 108
    virtual bool canBeAffectedByArrow(::MobEffectInstance const& effect) const;

    // vIndex: 109
    virtual void onEffectRemoved(::MobEffectInstance& effect);

    // vIndex: 110
    virtual bool canObstructSpawningAndBlockPlacement() const;

    // vIndex: 111
    virtual ::AnimationComponent& getAnimationComponent();

    // vIndex: 112
    virtual void openContainerComponent(::Player& player);

    // vIndex: 113
    virtual void swing();

    // vIndex: 114
    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    // vIndex: 115
    virtual void getDebugText(::std::vector<::std::string>& outputInfo);

    // vIndex: 116
    virtual float getMapDecorationRotation() const;

    // vIndex: 117
    virtual float getPassengerYRotation(::Actor const& passenger) const;

    // vIndex: 118
    virtual bool add(::ItemStack& item);

    // vIndex: 119
    virtual bool drop(::ItemStack const& item, bool const randomly);

    // vIndex: 120
    virtual bool getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const&);

    // vIndex: 121
    virtual bool canDestroyBlock(::Block const&) const;

    // vIndex: 122
    virtual void setAuxValue(int);

    // vIndex: 123
    virtual void renderDebugServerState(::Options const&);

    // vIndex: 124
    virtual void kill();

    // vIndex: 125
    virtual void die(::ActorDamageSource const& source);

    // vIndex: 126
    virtual bool shouldDropDeathLoot() const;

    // vIndex: 127
    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    // vIndex: 128
    virtual float getNextStep(float const moveDist);

    // vIndex: 129
    virtual void onPush(::Actor&);

    // vIndex: 130
    virtual ::std::optional<::BlockPos> getLastDeathPos() const;

    // vIndex: 131
    virtual ::std::optional<::DimensionType> getLastDeathDimension() const;

    // vIndex: 132
    virtual bool hasDiedBefore() const;

    // vIndex: 133
    virtual void doEnterWaterSplashEffect();

    // vIndex: 134
    virtual void doExitWaterSplashEffect();

    // vIndex: 135
    virtual void doWaterSplashEffect();

    // vIndex: 136
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    // vIndex: 137
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, ::ItemStack const& item) const;

    // vIndex: 138
    virtual bool shouldTryMakeStepSound();

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool, bool);

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const;

    // vIndex: 142
    virtual void _playStepSound(::BlockPos const& pos, ::Block const& onBlock);
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

    MCAPI void _convertOldSave(::CompoundTag const& tag);

    MCAPI bool _determineCanPickupItems() const;

    MCAPI ::ItemActor const* _drop(::ItemStack const& item, bool randomly);

    MCFOLD ::std::vector<::MobEffectInstance>& _getAllEffectsNonConst();

    MCAPI ::AnimationComponent& _getAnimationComponent(
        ::std::shared_ptr<::AnimationComponent>& animationComponent,
        ::AnimationComponentGroupType            group
    );

    MCAPI void _initAliasProperties();

    MCAPI void _initializeLeashRopeSystem(::Actor* holder);

    MCAPI void _initializeMaxAutoStep(float maxAutoStep);

    MCAPI bool _isDeathLootAllowed() const;

    MCAPI bool _isHeadInWater() const;

    MCAPI bool _isItemStackNetManagerEnabled() const;

    MCAPI void _moveHitboxTo(::Vec3 const& pos);

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

    MCAPI void _setupTagsComponent();

    MCAPI void _syncTickCountIfAnimationComponentShared();

    MCAPI void _tryPlantWitherRose();

    MCAPI void _updateComposition(bool reload);

    MCAPI void addCategory(::ActorCategory const& category);

    MCAPI void addDefinitionGroup(::std::string const& name);

    MCAPI void addEffect(::MobEffectInstance const& effect);

    MCAPI bool addTag(::std::string const& tag);

    MCAPI void applyImpulse(::Vec3 const& impulse);

    MCAPI void buildDebugGroupInfo(::std::string& out) const;

    MCAPI ::Vec3 buildForward() const;

    MCAPI void burn(int dmg, bool bInFire);

    MCAPI ::Vec3 calcCenterPos() const;

    MCAPI float calculateAttackDamage(::Actor& entity);

    MCAPI bool canAttack(::Actor const& entity) const;

    MCAPI bool canBeginOrContinueClimbingLadder() const;

    MCAPI bool canCurrentlySwim() const;

    MCAPI bool canFly() const;

    MCAPI bool canMate(::Actor const& partner) const;

    MCAPI bool canReceiveMobEffectsFromGameplay() const;

    MCAPI bool canSee(::Actor const& target, ::ShapeType obstructionType) const;

    MCAPI bool canSee(::Vec3 const& targetPos, ::ShapeType obstructionType) const;

    MCAPI bool canSee(::Actor const& target, ::ActorLocation targetLocationPart, ::ShapeType obstructionType) const;

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

    MCAPI void dropLeash(bool createItemDrop, bool cutRope);

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

    MCAPI void forEachLeashedActor(::std::function<void(::gsl::not_null<::Actor*>)> callback) const;

    MCAPI ::AABB const& getAABB() const;

    MCAPI ::Vec2 const& getAABBDim() const;

    MCAPI ::ActorDefinitionIdentifier const& getActorIdentifier() const;

    MCFOLD ::std::vector<::MobEffectInstance> const& getAllEffects() const;

    MCAPI ::ItemStack const& getArmor(::ArmorSlot slot) const;

    MCAPI ::Vec3 getAttachPos(::ActorLocation location) const;

    MCAPI ::Vec3 getAttachPos(::ActorLocation location, float alpha) const;

    MCAPI ::AttributeInstance const& getAttribute(::Attribute const& attribute) const;

    MCAPI ::gsl::not_null<::BaseAttributeMap const*> getAttributes() const;

    MCAPI ::gsl::not_null<::BaseAttributeMap*> getAttributes();

    MCAPI ::BlockPos getBlockPosCurrentlyStandingOn(::Actor const* actor) const;

    MCAPI ::BlockPos getBlockTarget() const;

    MCAPI ::Block const& getBlockWhenClimbing();

    MCAPI float getBrightness(float a = 0.0f) const;

    MCAPI bool getCanPickupItems() const;

    MCAPI ::ItemStack const& getCarriedItemInSlotPreferredBy(::ItemStack const& item) const;

    MCFOLD ::ActorCategory getCategories() const;

    MCAPI bool getChainedDamageEffects() const;

    MCAPI int getChestSlots() const;

    MCAPI bool getCollidableMob() const;

    MCAPI ::PaletteColor getColor() const;

    MCAPI ::PaletteColor getColor2() const;

    MCAPI float getCurrentSwimAmount() const;

    MCAPI bool getDamageNearbyMobs() const;

    MCAPI ::ActorDefinitionDiffList* getDiffListNonConst();

    MCFOLD ::Dimension& getDimension() const;

    MCFOLD ::BlockSource& getDimensionBlockSource() const;

    MCFOLD ::BlockSource const& getDimensionBlockSourceConst() const;

    MCFOLD ::Dimension const& getDimensionConst() const;

    MCAPI ::DimensionType getDimensionId() const;

    MCAPI ::MobEffectInstance const* getEffect(::MobEffect const& effect) const;

    MCAPI ::MobEffectInstance const* getEffect(uint effectId) const;

    MCAPI ::SynchedActorDataEntityWrapper const& getEntityData() const;

    MCFOLD ::SynchedActorDataEntityWrapper& getEntityData();

    MCAPI ::StackRefResult<::EntityRegistry> getEntityRegistry();

    MCAPI ::ActorTerrainInterlockData& getEntityTerrainInterlockData();

    MCAPI ::ActorType getEntityTypeId() const;

    MCAPI int getEquipSlots() const;

    MCAPI int getEquipmentCount() const;

    MCAPI ::SharedTypes::Legacy::EquipmentSlot getEquipmentSlotForItem(::ItemStack const& item) const;

    MCAPI ::ItemStack const& getEquippedSlot(::SharedTypes::Legacy::EquipmentSlot slot) const;

    MCAPI ::Vec3 getEyePos() const;

    MCAPI float getFallDistance() const;

    MCAPI bool getFirstAvailableSeatPos(::Actor& potentialPassenger, ::Vec3& result) const;

    MCAPI ::Actor* getFirstPassenger() const;

    MCAPI int getHealth() const;

    MCAPI int getHurtDir() const;

    MCAPI int getHurtTime() const;

    MCFOLD ::ILevel& getILevel();

    MCFOLD ::ActorInitializationMethod getInitializationMethod();

    MCAPI ::Vec3 getInterpolatedPosition(float a = 0.0f) const;

    MCAPI ::Vec3 getInterpolatedRidingPosition(float a = 0.0f) const;

    MCAPI ::Vec2 getInterpolatedRotation(float a = 0.0f) const;

    MCAPI int getInventorySize() const;

    MCAPI bool getIsExperienceDropEnabled() const;

    MCAPI ::Mob* getLastHurtByMob();

    MCAPI ::ActorUniqueID getLastHurtByMobID() const;

    MCAPI int getLastHurtByMobTime();

    MCAPI int getLastHurtByMobTimestamp();

    MCAPI ::Player* getLastHurtByPlayer();

    MCAPI ::ActorUniqueID getLastHurtByPlayerID() const;

    MCFOLD ::ActorDamageCause getLastHurtCause() const;

    MCAPI float getLastHurtDamage() const;

    MCAPI ::Mob* getLastHurtMob();

    MCAPI int getLastHurtMobTimestamp();

    MCAPI uint64 getLastHurtTimestamp() const;

    MCAPI ::ActorUniqueID getLeashHolder() const;

    MCAPI ::Level const& getLevel() const;

    MCFOLD ::Level& getLevel();

    MCAPI uint64 getLevelTimeStamp() const;

    MCAPI int getLimitedLifetimeTicks() const;

    MCAPI ::std::vector<::ActorLink> getLinks() const;

    MCAPI ::LootTable* getLootTable();

    MCAPI int getMarkVariant() const;

    MCAPI float getMaxAutoStep() const;

    MCAPI int getMaxHealth() const;

    MCAPI ::MolangVariableMap& getMolangVariables();

    MCAPI ::AttributeInstance* getMutableAttribute(::Attribute const& attribute);

    MCAPI ::std::string const& getNameTag() const;

    MCAPI uint64 getNameTagAsHash() const;

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

    MCFOLD ::Vec3 const& getPosDelta() const;

    MCFOLD ::Vec3& getPosDeltaNonConst();

    MCAPI ::Vec3 const& getPosPrev() const;

    MCAPI ::Vec3 const& getPosition() const;

    MCAPI float getRadius() const;

    MCAPI ::Random& getRandom() const;

    MCFOLD ::RenderParams& getRenderParams();

    MCAPI float getRidingHeight() const;

    MCAPI ::Vec2 const& getRotation() const;

    MCAPI ::Vec2 const& getRotationPrev() const;

    MCAPI ::ActorRuntimeID getRuntimeID() const;

    MCFOLD int getShakeTime() const;

    MCAPI int getSkinID() const;

    MCFOLD ::SpatialActorNetworkData& getSpatialNetworkData();

    MCAPI float getSpeedInMetersPerSecond() const;

    MCAPI bool getStatusFlag(::ActorFlags flag) const;

    MCAPI int getStrength() const;

    MCAPI int getStrengthMax() const;

    MCAPI int getStructuralIntegrity() const;

    MCAPI float getSwimAmount(float a = 0.0f) const;

    MCAPI ::std::vector<::std::string> const getTags() const;

    MCAPI ::Actor* getTarget() const;

    MCAPI ::ActorUniqueID getTargetId() const;

    MCAPI bool getTradeInterest() const;

    MCAPI ::MerchantRecipeList* getTradeOffers();

    MCAPI ::Player* getTradingPlayer() const;

    MCAPI int getVariant() const;

    MCAPI ::Actor* getVehicle() const;

    MCAPI ::Actor* getVehicleRoot() const;

    MCAPI ::ActorRuntimeID getVehicleRuntimeID() const;

    MCAPI float getVerticalSpeedInMetersPerSecond() const;

    MCAPI ::Vec3 getViewVector(float a = 0.0f) const;

    MCAPI ::WeakRef<::EntityContext> const getWeakEntity() const;

    MCAPI float getYHeadRot() const;

    MCAPI ::InterpolationPair getYHeadRotationsNewOld() const;

    MCAPI void handleFallDamage(float fallDistance, float multiplier, ::ActorDamageSource source);

    MCAPI void handleLeftoverFallDamage(float damage, ::ActorDamageSource source);

    MCAPI bool hasAnyEffects() const;

    MCAPI bool hasBeenHurtByMobInLastTicks(int numberOfTicks) const;

    MCAPI bool hasCategory(::ActorCategory categories) const;

    MCAPI bool hasDefinitionGroup(::std::string const& name) const;

    MCAPI bool hasDimension() const;

    MCAPI bool hasEffect(::MobEffect const& effect) const;

    MCAPI bool hasFamily(::HashedString const& family) const;

    MCAPI bool hasFishingHook() const;

    MCAPI bool hasLevel() const;

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

    MCFOLD void healEffects(int);

    MCAPI bool hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI bool inDownwardFlowingLiquid() const;

    MCAPI void initActorProperties();

    MCFOLD void initParams(::VariantParameterListConst& params) const;

    MCAPI void initParams(::VariantParameterList&);

    MCAPI void initParams(::RenderParams& params);

    MCAPI bool intersects(::Vec3 const& pos1, ::Vec3 const& pos2) const;

    MCAPI bool isActorLocationInMaterial(::ActorLocation actorLocation, ::MaterialType type) const;

    MCAPI bool isAdventure() const;

    MCAPI bool isAffectedByWaterBottle() const;

    MCAPI bool isAngry() const;

    MCAPI bool isAttackableGamemode() const;

    MCAPI bool isAutonomous() const;

    MCAPI bool isBaby() const;

    MCAPI bool isBodyRotationBlocked() const;

    MCAPI bool isBreakingObstruction() const;

    MCAPI bool isBribed() const;

    MCAPI bool isCharged() const;

    MCAPI bool isChested() const;

    MCAPI bool isClientSide() const;

    MCAPI bool isClimbing() const;

    MCAPI bool isControlledByLocalInstance() const;

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

    MCAPI bool isOrphan() const;

    MCAPI bool isOutOfControl() const;

    MCAPI bool isOverScaffolding() const;

    MCAPI bool isOverWater() const;

    MCAPI bool isPacified() const;

    MCAPI bool isPassenger(::Actor const& passenger) const;

    MCAPI bool isPersistent() const;

    MCAPI bool isPlayer() const;

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

    MCAPI bool isType(::ActorType type) const;

    MCAPI bool isUnderLiquid(::MaterialType type) const;

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

    MCAPI ::ActorUniqueID const& lovePartnerId() const;

    MCAPI void markHurt();

    MCFOLD void migrateUniqueID(::ActorUniqueID id);

    MCAPI void move(::Vec3 const& posDelta);

    MCAPI void moveRelative(float xa, float ya, float za, float speed);

    MCAPI void moveTo(::Vec3 const& pos, ::Vec2 const& rot);

    MCAPI void onAffectedByWaterBottle();

    MCAPI bool onClimbableBlock() const;

    MCAPI void onOrphan();

    MCAPI bool operator!=(::Actor const& rhs) const;

    MCAPI bool operator==(::Actor const& rhs) const;

    MCAPI void pickUpItem(::ItemActor& itemActor, int count);

    MCAPI void playMovementSound();

    MCAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, ::Block const& block);

    MCAPI void playSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data);

    MCAPI void playSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        bool                                   isGlobal
    );

    MCAPI void
    playSynchronizedSound(::SharedTypes::Legacy::LevelSoundEvent type, ::Vec3 const& pos, int data, bool isGlobal);

    MCAPI void positionAllPassengers();

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

    MCAPI void removeAllPassengers(bool beingDestroyed);

    MCAPI void removeDefinitionGroup(::std::string const& name);

    MCAPI void removeEffect(int effectId);

    MCAPI void removePersistingTrade();

    MCAPI bool removeTag(::std::string const& tag);

    MCAPI bool save(::CompoundTag& entityTag) const;

    MCAPI void saveEntityFlags(::CompoundTag& entityTag) const;

    MCAPI ::std::unique_ptr<::ListTag> saveLinks() const;

    MCAPI void savePersistingTrade(::std::unique_ptr<::CompoundTag> offersTag, int riches);

    MCAPI void saveWithoutId(::CompoundTag& entityTag) const;

    MCAPI void sendActorDefinitionEventTriggered(::std::string const& event);

    MCAPI void serializationSetHealth(int newHealth);

    MCAPI void setAABB(::AABB const& aabb);

    MCAPI void setAABBDim(::Vec2 const& dim);

    MCAPI void setActorRendererId(::HashedString actorRendererId);

    MCAPI void setAutonomous(bool g);

    MCAPI void setBaseDefinition(::ActorDefinitionIdentifier const& sourceId, bool clearDefs, bool update);

    MCFOLD void setBlockTarget(::BlockPos const& target);

    MCAPI void setBodyRotationBlocked(bool value);

    MCAPI void setBreakingObstruction(bool breaking);

    MCAPI void setCanClimb(bool value);

    MCAPI void setCanFly(bool value);

    MCAPI void setCanPowerJump(bool value);

    MCAPI void setChainedDamageEffects(bool active);

    MCAPI void setCharged(bool value);

    MCAPI void setClimbing(bool value);

    MCAPI void setColor(::PaletteColor color);

    MCAPI void setColor2(::PaletteColor color);

    MCAPI void setDancing(bool dancing);

    MCAPI void setDead(bool isDead);

    MCAPI void setDimension(::WeakRef<::Dimension> weakDimension);

    MCAPI void setDoorBreaker(bool breaker);

    MCAPI void setDoorOpener(bool opener);

    MCAPI void setEnchanted(bool value);

    MCAPI void setFallDistance(float distance);

    MCAPI void setFishingHookID(::ActorUniqueID newUniqueID);

    MCAPI void setGlobal(bool g);

    MCAPI void setHurtDir(int hurtDir);

    MCAPI void setHurtTime(int hurtTime);

    MCAPI void setInLove(::Actor* lovePartner);

    MCAPI void setInterpolation();

    MCAPI void setInvisible(bool value);

    MCAPI void setIsExperienceDropEnabled(bool isExperienceDropEnabled);

    MCAPI void setJumping(bool jump);

    MCAPI void setLastHitBB(::Vec3 const& pos, ::Vec3 const& radius);

    MCAPI void setLastHurtByMob(::Mob* mob);

    MCAPI void setLastHurtByPlayer(::Player* player);

    MCAPI void setLastHurtMob(::Actor* target);

    MCAPI void setLayingDown(bool value);

    MCAPI void setLeashHolder(::ActorUniqueID leashHolder);

    MCAPI void setLimitedLifetimeTicks(int lifetimeTicks);

    MCAPI void setMarkVariant(int value);

    MCAPI void setMovedToLimbo(bool moveToLimbo);

    MCAPI void setMovedToUnloadedChunk(bool movedToUnloadedChunk);

    MCAPI void setMovementSoundDistanceOffset(float movementSoundDistanceOffset);

    MCAPI void setMoving(bool value);

    MCAPI void setNameTag(::std::string const& name);

    MCAPI void setNameTagVisible(bool visible);

    MCAPI void setObstructsBlockPlacement(bool obstructs);

    MCAPI void setPersistent();

    MCAPI void setPos(::Vec3 const& pos);

    MCFOLD void setPosDelta(::Vec3 const& posDelta);

    MCFOLD void setPosDirectLegacy(::Vec3 const& pos);

    MCFOLD void setPosPrev(::Vec3 const& posPrev);

    MCAPI void setPrevPosRotSetThisTick(bool value);

    MCAPI void setPreviousPosRot();

    MCAPI void setResting(bool value);

    MCAPI void setRotationDirectly(::Vec2 const& rot);

    MCAPI void setRotationPrev(::Vec2 const& rotation);

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

    MCAPI void setStunned(bool value);

    MCAPI void setSwimmer(bool swimmer);

    MCAPI void setTempted(bool tempted);

    MCAPI void setTradeInterest(bool interested);

    MCAPI void setTradingPlayer(::Player* player);

    MCFOLD void setUniqueID(::ActorUniqueID id);

    MCAPI void setVariant(int value);

    MCFOLD void setVelocity(::Vec3 const& vel);

    MCAPI void setWASDControlled(bool value);

    MCAPI void setWalker(bool isWalker);

    MCAPI void setYHeadRot(float yHeadRot);

    MCAPI void setYHeadRotations(float yHeadRot, float oldYHeadRot);

    MCAPI bool shouldOrphan(::BlockSource& source);

    MCAPI bool shouldTick() const;

    MCAPI bool shouldUpdateEffects() const;

    MCAPI ::ItemActor* spawnAtLocation(::ItemStack const& item, float yOffs);

    MCAPI void spawnEatParticles(::ItemStack const& itemInUse, int count);

    MCAPI void spawnTrailBubbles();

    MCAPI void stopRiding(bool exitFromPassenger, bool actorIsBeingDestroyed, bool switchingVehicles);

    MCAPI void synchronousSetSize(float w, float h);

    MCAPI void teleportPassengersTo(::Vec3 const& pos, int cause, int entityType);

    MCAPI void thawFreezeEffect();

    MCAPI bool tick(::BlockSource& region);

    MCAPI void tickBlockDamage();

    MCAPI void transferTickingArea(::Dimension& toDimension);

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

    MCAPI bool useSaddle(::ItemStackBase& item, ::Player* player);

    MCAPI bool wasHurt();

    MCAPI bool wasLastHitByPlayer();

    MCAPI void wobble();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _moveRelative(::Vec3& posDelta, float yRotDegrees, float xa, float ya, float za, float speed);

    MCAPI static ::Vec3 buildForward(::Vec2 rotation);

    MCAPI static ::BlockPos getBlockPosCurrentlyStandingOn(
        ::Vec3 const&                                      pos,
        ::AABB                                             box,
        ::IConstBlockSource const&                         region,
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

    MCAPI static ::AABB getLiquidAABB(::AABB const& aabb, ::MaterialType liquidType);

    MCAPI static float getLiquidFlowStrength(::MaterialType liquidType);

    MCAPI static ::Vec3 getViewVector(::ActorRotationComponent const& actorRotation, float a);

    MCAPI static ::Vec3 getViewVector(::Vec2 const& prevRot, ::Vec2 const& rot, float a);

    MCAPI static bool isImmobile(::EntityContext const& entity);

    MCAPI static bool isInLiquid(
        ::MaterialType               liquidType,
        ::IConstBlockSource const&   region,
        ::AABB const&                mainAABB,
        ::std::vector<::AABB> const& subAABBs
    );

    MCAPI static ::Actor const* tryGetFromComponent(::ActorOwnerComponent const& component, bool includeRemoved);

    MCFOLD static ::Actor* tryGetFromComponent(::ActorOwnerComponent& component, bool includeRemoved);

    MCAPI static ::Actor const* tryGetFromEntity(::EntityContext const& entity, bool includeRemoved);

    MCAPI static ::Actor* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    MCAPI static ::Actor* tryGetFromEntity(::StackRefResult<::EntityContext> entity, bool includeRemoved);

    MCAPI static ::Actor*
    tryGetFromEntity(::StrictEntityContext const& entity, ::EntityRegistry& registry, bool includeRemoved);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& DAMAGE_NEARBY_MOBS_DURATION();

    MCAPI static float const& DEFAULT_MAX_DISTANCE_OPTIMIZATION();

    MCAPI static uint64 const& DEFAULT_MAX_TICK_DELAY_OPTIMIZATION();
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

    MCFOLD void $resetUserPos(bool);

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

    MCFOLD void $lerpMotion(::Vec3 const& delta);

    MCAPI ::std::unique_ptr<::AddActorBasePacket> $tryCreateAddActorPacket();

    MCAPI void $normalTick();

    MCAPI void $baseTick();

    MCAPI void $passengerTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $addPassenger(::Actor& passenger);

    MCAPI ::std::string $getExitTip(::std::string const& kind, ::InputMode mode, ::NewInteractionModel scheme) const;

    MCAPI ::std::string $getEntityLocNameString() const;

    MCAPI bool $isInWall() const;

    MCAPI bool $isInvisible() const;

    MCAPI bool $canShowNameTag() const;

    MCAPI ::std::string $getFormattedNameTag() const;

    MCFOLD ::mce::Color $getNameTagTextColor() const;

    MCAPI float $getShadowRadius() const;

    MCAPI ::Vec3 $getHeadLookVector(float a) const;

    MCFOLD bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI float $getBrightness(float a, ::IConstBlockSource const& region) const;

    MCFOLD void $playerTouch(::Player&);

    MCAPI bool $isImmobile() const;

    MCAPI bool $isSilentObserver() const;

    MCFOLD bool $isSleeping() const;

    MCFOLD void $setSleeping(bool);

    MCAPI void $setSneaking(bool value);

    MCFOLD bool $isBlocking() const;

    MCFOLD bool $isDamageBlocked(::ActorDamageSource const&) const;

    MCAPI bool $isAlive() const;

    MCAPI bool $isOnFire() const;

    MCFOLD bool $isSurfaceMob() const;

    MCFOLD bool $isTargetable() const;

    MCAPI void $setTarget(::Actor* entity);

    MCFOLD bool $isValidTarget(::Actor*) const;

    MCAPI bool $attack(::Actor& target, ::ActorDamageCause const&);

    MCAPI void $performRangedAttack(::Actor& target, float);

    MCAPI void $setOwner(::ActorUniqueID const ownerId);

    MCAPI void $setSitting(bool value);

    MCFOLD void $onTame();

    MCFOLD void $onFailedTame();

    MCAPI void $setStanding(bool value);

    MCAPI bool $canPowerJump() const;

    MCAPI bool $isEnchanted() const;

    MCAPI bool $shouldRender() const;

    MCAPI void $playAmbientSound();

    MCAPI ::SharedTypes::Legacy::LevelSoundEvent $getAmbientSound() const;

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI ::ActorDamageCause $getBlockDamageCause(::Block const& block) const;

    MCAPI bool $doFireHurt(int amount);

    MCAPI void $onLightningHit();

    MCAPI void $feed(int itemId);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCFOLD ::HashedString const& $getActorRendererId() const;

    MCAPI void $despawn();

    MCAPI void $setArmor(::ArmorSlot slot, ::ItemStack const& item);

    MCFOLD ::ArmorMaterialType $getArmorMaterialTypeInSlot(::ArmorSlot) const;

    MCFOLD int $getArmorTextureIndexInSlot(::ArmorSlot) const;

    MCFOLD float $getArmorColorInSlot(::ArmorSlot, int) const;

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

    MCAPI ::AABB $getLiquidAABB(::MaterialType const liquidType) const;

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

    MCAPI void $sendMotionPacketIfNeeded(::PlayerMovementSettings const& playerMovementSettings);

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

    MCFOLD void $swing();

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI void $getDebugText(::std::vector<::std::string>& outputInfo);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI float $getPassengerYRotation(::Actor const& passenger) const;

    MCAPI bool $add(::ItemStack& item);

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCAPI bool $getInteraction(::Player& player, ::ActorInteraction& interaction, ::Vec3 const&);

    MCFOLD bool $canDestroyBlock(::Block const&) const;

    MCFOLD void $setAuxValue(int);

    MCFOLD void $renderDebugServerState(::Options const&);

    MCAPI void $kill();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCAPI float $getNextStep(float const moveDist);

    MCFOLD void $onPush(::Actor&);

    MCFOLD ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCFOLD ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCFOLD bool $hasDiedBefore() const;

    MCFOLD void $doEnterWaterSplashEffect();

    MCFOLD void $doExitWaterSplashEffect();

    MCAPI void $doWaterSplashEffect();

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI bool $shouldTryMakeStepSound();

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool, bool);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $_playStepSound(::BlockPos const& pos, ::Block const& onBlock);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
