#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/DefaultSmallOptionalTraits.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/SmallOptional.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/PlayerUIContainer.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/ActorInteractionHandResult.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
#include "mc/world/actor/player/PlayerSpawnFallbackType.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/inventory/FurnaceOptions.h"
#include "mc/world/inventory/InventoryOptions.h"
#include "mc/world/inventory/transaction/InventoryTransactionManager.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorHurtResult;
class Agent;
class AnimationComponent;
class Attribute;
class Block;
class BlockActor;
class BlockSource;
class BodyControl;
class ChalkboardBlockActor;
class ChunkPos;
class ChunkSource;
class ChunkViewSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class ContainerManagerModel;
class DataLoadHelper;
class EnderChestContainer;
class EntityContext;
class GameMode;
class GetCollisionShapeInterface;
class HashedString;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
class ILevel;
class IMinecraftEventing;
class ISparseContainerSetListener;
class InteractionResult;
class InventoryTransaction;
class Item;
class ItemDescriptor;
class ItemStack;
class ItemStackBase;
class ItemStackNetManagerBase;
class LayeredAbilities;
class LegacyTelemetryEventPacket;
class NetworkChunkPublisher;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PersonaPiece;
class PlayerEventCoordinator;
class PlayerInventory;
class PlayerRespawnRandomizer;
class ResolvedTextObject;
class SerializedSkinRef;
class SubChunkPos;
class TextObjectRoot;
class Vec2;
struct AABBShapeComponent;
struct ActorRotationComponent;
struct BiomeIdType;
struct HurtParameters;
struct INpcDialogueData;
struct PlayerAuthenticationInfo;
struct PlayerDestroyProgressCacheComponent;
struct PlayerMovementSettings;
struct PlayerPartyInfo;
struct SoundEventIdentifier;
struct StateVectorComponent;
struct Tick;
struct VariantParameterList;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
class FrameUpdateContextBase;
class PlayerListener;
// clang-format on

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    struct AttackParameters;
    struct CachedSpawnData;
    struct FixedSpawnPositionData;
    struct FixedSpawnPositionData_DEPRECATED;
    struct PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    enum class SpawnPositionSource : int {
        Randomizer = 0,
        Respawn    = 1,
        Teleport   = 2,
        Static     = 3,
    };

    enum class SpawnPositionState : int {
        InitializeSpawnPositionRandomizer = 0,
        WaitForClientAck                  = 1,
        DetermineDimension                = 2,
        ChangeDimension                   = 3,
        WaitForDimension                  = 4,
        ChooseSpawnArea                   = 5,
        CheckLoadedChunk                  = 6,
        ChooseSpawnPosition               = 7,
        SpawnComplete                     = 8,
    };

    struct AttackParameters {
    public:
        // AttackParameters inner types define
        enum class Sound : int {
            None          = 0,
            Predictive    = 1,
            NonPredictive = 2,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::Player::AttackParameters::Sound> mSound;
        ::ll::TypedStorage<1, 1, bool>                              mTriggerCooldown;
        ::ll::TypedStorage<1, 1, bool>                              mCanCrit;
        ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>          mAimDirection;
        // NOLINTEND
    };

    struct CachedSpawnData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::DimensionType> mRespawnDimensionId;
        ::ll::TypedStorage<4, 12, ::Vec3>         mActualRespawnPosition;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mRequestedRespawnPosition;
        ::ll::TypedStorage<1, 1, bool>            mHasRespawnPosition;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSharedSpawnPosition;
        ::ll::TypedStorage<1, 1, bool>            mRespawnReady;
        ::ll::TypedStorage<4, 12, ::Vec3>         mPlayerPos;
        ::ll::TypedStorage<1, 1, bool>            mIsForcedRespawn;
        ::ll::TypedStorage<1, 1, bool>            mIsAdventure;
        ::ll::TypedStorage<1, 1, bool>            mIsFlyingOrNotOverworld;
        ::ll::TypedStorage<1, 1, bool>            mPositionLoadedFromSave;
        // NOLINTEND
    };

    struct FixedSpawnPositionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                   mPosition;
        ::ll::TypedStorage<4, 4, ::PlayerSpawnFallbackType> mSpawnFallbackType;
        // NOLINTEND
    };

    struct FixedSpawnPositionData_DEPRECATED {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
        ::ll::TypedStorage<1, 1, bool>    mIsAboveLeaves;
        // NOLINTEND
    };

    struct PlayerSpawnPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSpawnBlockPos;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPlayerPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
        // NOLINTEND
    };

    using PlayerFlagIDType = schar;

    using PlayerListenerList = ::std::vector<::PlayerListener*>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                      mFroglights;
    ::ll::TypedStorage<4, 4, float const>                                 mSneakHeight;
    ::ll::TypedStorage<4, 4, float const>                                 mSneakOffset;
    ::ll::TypedStorage<4, 4, int>                                         mScore;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                             mBuildPlatform;
    ::ll::TypedStorage<8, 32, ::std::string>                              mUniqueName;
    ::ll::TypedStorage<8, 32, ::std::string>                              mServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mSelfSignedId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformOfflineId;
    ::ll::TypedStorage<8, 8, uint64>                                      mClientRandomId;
    ::ll::TypedStorage<8, 32, ::std::string>                              mPlatformId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingVehicleID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingLeftShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mPendingRightShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                             mInteractTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mInteractTargetPos;
    ::ll::TypedStorage<1, 1, bool>                                        mHasFakeInventory;
    ::ll::TypedStorage<1, 1, bool>                                        mIsRegionSuspended;
    ::ll::TypedStorage<1, 1, bool>                                        mUpdateMobs;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>       mChunkSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>       mSpawnChunkSource;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mCapePosO;
    ::ll::TypedStorage<4, 12, ::Vec3>                                     mCapePos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerManagerModel>> mContainerManager;
    ::ll::TypedStorage<
        8,
        8,
        ::std::unique_ptr<
            ::Bedrock::PubSub::
                Publisher<void(::ContainerManagerModel const*), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>>
                                                                             mContainerManagerSubscribers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInventory>>           mInventory;
    ::ll::TypedStorage<4, 20, ::InventoryOptions>                            mInventoryOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                              mFurnaceOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                              mBlastFurnaceOptions;
    ::ll::TypedStorage<4, 12, ::FurnaceOptions>                              mSmokerOptions;
    ::ll::TypedStorage<4, 4, float>                                          mDistanceSinceTransformEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                 mCreativeItemList;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlatformOnlineId;
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionState>                   mSpawnPositionState;
    ::ll::TypedStorage<4, 4, ::Player::SpawnPositionSource>                  mSpawnPositionSource;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mSpawnPositioningTestPosition;
    ::ll::TypedStorage<4, 4, uint>                                           mRespawnChunkBuilderPolicyHandle;
    ::ll::TypedStorage<4, 64, ::Player::CachedSpawnData>                     mCachedSpawnData;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::BlockSource>>                     mSpawnBlockSource;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                   mRespawnStopwatch_Searching;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mRespawnOriginalPosition;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                mRespawnOriginalDimension;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mRespawnMessage;
    ::ll::TypedStorage<1, 1, bool>                                           mRespawnReady;
    ::ll::TypedStorage<1, 1, bool>                                           mIsInitialSpawnDone;
    ::ll::TypedStorage<1, 1, bool>                                           mRespawningFromTheEnd;
    ::ll::TypedStorage<1, 1, bool>                                           mPositionLoadedFromSave;
    ::ll::TypedStorage<1, 1, bool>                                           mBlockRespawnUntilClientMessage;
    ::ll::TypedStorage<1, 1, bool>                                           mHasSeenCredits;
    ::ll::TypedStorage<4, 8, ::std::optional<::PlayerSpawnFallbackType>>     mSpawnFallbackType;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>>                       mSpawnFallbackPosition;
    ::ll::TypedStorage<8, 168, ::PlayerItemInUse>                            mItemInUse;
    ::ll::TypedStorage<4, 4, ::ActorType>                                    mLastHurtBy;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPreviousInteractEntity;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousCarriedItem;
    ::ll::TypedStorage<4, 4, int>                                            mEmoteTicks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkChunkPublisher>>    mChunkPublisherView;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                mPacketSender;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EnderChestContainer>>       mEnderChestInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                mTrackedBossIDs;
    ::ll::TypedStorage<8, 136, ::ItemGroup>                                  mCursorSelectedItemGroup;
    ::ll::TypedStorage<8, 440, ::PlayerUIContainer>                          mPlayerUIContainer;
    ::ll::TypedStorage<8, 48, ::InventoryTransactionManager>                 mTransactionManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameMode>>                  mGameMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerRespawnRandomizer>>   mSpawnRandomizer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SerializedSkinRef>>         mSkin;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackNetManagerBase>>   mItemStackNetManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mUIAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mMapAnimationComponent;
    ::ll::TypedStorage<4, 28, ::Player::PlayerSpawnPoint>                    mPlayerRespawnPoint;
    ::ll::TypedStorage<4, 4, float>                                          mServerBuildRatio;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                  mClientId;
    ::ll::TypedStorage<1, 1, bool>                                           mInteractDataDirty;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldClientGenerateChunks;
    ::ll::TypedStorage<8, 24, ::std::vector<::BiomeIdType>>                  mOceanBiomes;
    ::ll::TypedStorage<1, 1, bool>                                           mUseMapAnimationComponent;
    ::ll::TypedStorage<1, 1, bool>                                           mIsDeferredRenderingFirstPersonObjects;
    ::ll::TypedStorage<1, 1, bool>                                           mDestroyingBlock;
    ::ll::TypedStorage<1, 1, bool>                                           mPlayerLevelChanged;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousLevelRequirement;
    ::ll::TypedStorage<4, 4, int>                                            mLastLevelUpTime;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mFirstPersonAnimationComponent;
    ::ll::TypedStorage<8, 24, ::std::vector<::PlayerListener*>>              mListeners;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mRespawnPositionCandidate;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mPreDimensionTransferSpawnPosition;
    ::ll::TypedStorage<4, 4, int>                                            mEnchantmentSeed;
    ::ll::TypedStorage<8, 24, ::std::vector<uint>>                           mOnScreenAnimationTextures;
    ::ll::TypedStorage<4, 4, int>                                            mOnScreenAnimationTicks;
    ::ll::TypedStorage<4, 4, uint>                                           mChunkRadius;
    ::ll::TypedStorage<4, 4, int>                                            mMapIndex;
    ::ll::TypedStorage<4, 4, float>                                          mElytraVolume;
    ::ll::TypedStorage<8, 8, uint64>                                         mElytraLoop;
    ::ll::TypedStorage<8, 8, int64>                                          mStartedBlockingTimeStamp;
    ::ll::TypedStorage<8, 8, int64>                                          mBlockedUsingShieldTimeStamp;
    ::ll::TypedStorage<8, 8, int64>                                          mBlockedUsingDamagedShieldTimeStamp;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mChatNamePrefix;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mChatNameSuffix;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mChatMessagePrefix;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mLastEmotePlayed;
    ::ll::TypedStorage<8, 8, int64>                                          mEmoteEasterEggEndTime;
    ::ll::TypedStorage<4, 4, uint>                                           mEmoteMessageCount;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mDeviceId;
    ::ll::TypedStorage<1, 1, bool>                                           mFlagClientForBAIReset;
    ::ll::TypedStorage<1, 1, uchar>                                          mSendPlayerOptionsFlags;
    ::ll::TypedStorage<1, 1, bool>                                           mIsHostingPlayer;
    ::ll::TypedStorage<1, 1, bool>                                           mPrevBlockedUsingShield;
    ::ll::TypedStorage<1, 1, bool>                                           mPrevBlockedUsingDamagedShield;
    ::ll::TypedStorage<1, 1, bool>                                           mUsedPotion;
    ::ll::TypedStorage<8, 8, ::PlayerDestroyProgressCacheComponent&>         mDestroyProgressCache;
    // NOLINTEND

public:
    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Player() /*override*/;

    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    virtual void prepareRegion(::ChunkSource& mainChunkSource);

    virtual void destroyRegion();

    virtual void suspendRegion();

    virtual void _fireDimensionChanged();

    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    virtual void changeDimensionWithCredits(::DimensionType dimension);

#ifdef LL_PLAT_S
    virtual void tickWorld(::Tick const&);
#else // LL_PLAT_C
    virtual void tickWorld(::Tick const& currentTick);
#endif

    virtual void frameUpdate(::FrameUpdateContextBase& frameUpdateContextBase) = 0;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    virtual void normalTick() /*override*/;

    virtual void moveView();

    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void aiStep() /*override*/;

    virtual bool isFireImmune() const /*override*/;

    virtual void checkMovementStats(::Vec3 const& d);

    virtual ::HashedString getCurrentStructureFeature() const;

    virtual bool isAutoJumpEnabled() const;

    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    virtual void passengerTick() /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void remove() /*override*/;

    virtual void respawn();

    virtual bool shouldDropDeathLoot() const /*override*/;

    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source) /*override*/;

    virtual void dropEquipmentOnDeath() /*override*/;

    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    virtual bool drop(::ItemStack const& item, bool const randomly) /*override*/;

    virtual void resetRot();

    virtual void resetUserPos(::ActorResetRule resetRule) /*override*/;

    virtual bool isInTrialMode();

    virtual void setSpeed(float _speed) /*override*/;

    virtual int getItemUseDuration() const /*override*/;

    virtual float getItemUseStartupProgress() const /*override*/;

    virtual float getItemUseIntervalProgress() const /*override*/;

    virtual bool isBlocking() const /*override*/;

    virtual bool isDamageBlocked(::ActorDamageSource const& source) const /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllHandEquipment() const /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllEquipment() const /*override*/;

    virtual bool add(::ItemStack& item) /*override*/;

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const /*override*/;

    virtual ::ActorHurtResult attack(::Actor& actor, ::SharedTypes::Legacy::ActorDamageCause const& cause) /*override*/;

    virtual ::ItemStack const& getCarriedItem() const /*override*/;

    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    virtual void damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget) /*override*/;

    virtual void openPortfolio();

#ifdef LL_PLAT_S
    virtual void openBook(int, bool, int, ::BlockActor*);
#else // LL_PLAT_C
    virtual void openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern);
#endif

    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);

#ifdef LL_PLAT_S
    virtual void openChalkboard(::ChalkboardBlockActor&, bool);
#else // LL_PLAT_C
    virtual void openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle);
#endif

    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    virtual void openInventory();

    virtual void displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    virtual void
    displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    virtual float getShadowRadius() const /*override*/;

    virtual bool isSleeping() const /*override*/;

    virtual void setSleeping(bool val) /*override*/;

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedPos, bool setsRespawn, float sleepOffset);

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    virtual bool canStartSleepInBed();

    virtual void sendInventory(bool shouldSelectSlot) /*override*/;

    virtual void openSign(::BlockPos const& position, bool isFrontSide);

#ifdef LL_PLAT_S
    virtual void playEmote(::std::string const&, bool const);
#else // LL_PLAT_C
    virtual void playEmote(::std::string const& pieceId, bool const playChatMessage);
#endif

    virtual bool isSilentObserver() const /*override*/;

    virtual void useItem(::ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem) /*override*/;

    virtual bool isLoading() const;

    virtual bool isPlayerInitialized() const;

    virtual void stopLoading();

    virtual float getSpeed() const /*override*/;

    virtual void setPlayerGameType(::GameType gameType);

    virtual void initHUDContainerManager();

    virtual void emitCriticalHitParticles(::Actor const& target, int particleCount);

    virtual bool isImmobile() const /*override*/;

    virtual void sendMotionPacketIfNeeded() /*override*/;

    virtual ::IMinecraftEventing* getEventing() const;

    virtual uint getUserId() const;

    virtual void addExperience(int xp);

    virtual void addLevels(int levels);

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    virtual ::std::unique_ptr<::Packet> tryCreateAddActorPacket() /*override*/;

    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    virtual void setContainerData(::IContainerManager& menu, int id, int value) = 0;

    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) = 0;

    virtual void refreshContainer(::IContainerManager& menu) = 0;

    virtual void deleteContainerManager();

    virtual ::ItemStack const& getEquippedTotem() const /*override*/;

    virtual bool consumeTotem() /*override*/;

    virtual bool isActorRelevant(::Actor const& actor);

    virtual float getMapDecorationRotation() const /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void startSwimming() /*override*/;

    virtual void stopSwimming() /*override*/;

    virtual bool isTeacher() const = 0;

    virtual bool isExternalCommunicationAllowed() const = 0;

    virtual void onSuspension();

    virtual void onLinkedSlotsChanged();

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual void feed(int itemId) /*override*/;

    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const = 0;

    virtual void
    sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const = 0;

    virtual void sendNetworkPacket(::Packet& packet) const;

    virtual bool canExistWhenDisallowMob() const /*override*/;

    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    virtual bool isSimulated() const;

    virtual ::std::string getXuid() const;

    virtual ::std::string getPlayFabId() const;

    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    virtual bool canInteractWithOtherEntitiesInGame() const /*override*/;

    virtual bool canObstructSpawningAndBlockPlacement() const /*override*/;

    virtual ::std::optional<::BlockPos> getLastDeathPos() const /*override*/;

    virtual ::std::optional<::DimensionType> getLastDeathDimension() const /*override*/;

    virtual bool hasDiedBefore() const /*override*/;

    virtual void doEnterWaterSplashEffect() /*override*/;

    virtual void doExitWaterSplashEffect() /*override*/;

    virtual ::std::optional<::PlayerPartyInfo> getPartyInfo_UNTRUSTED() const;

#ifdef LL_PLAT_S
    virtual void requestMissingSubChunk(::SubChunkPos const&);
#else // LL_PLAT_C
    virtual void requestMissingSubChunk(::SubChunkPos const& scp);
#endif

    virtual uchar getMaxChunkBuildRadius() const;

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

#ifdef LL_PLAT_S
    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);
#else // LL_PLAT_C
    virtual void setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status);
#endif

#ifdef LL_PLAT_S
    virtual void setRemotePlayerTicked(bool);
#else // LL_PLAT_C
    virtual void setRemotePlayerTicked(bool ticked);
#endif

    virtual ::std::unique_ptr<::ISparseContainerSetListener> createSparseContainerListener();

    virtual void addChunksToQueue(::std::vector<::ChunkPos> const& chunkPostions, bool isBiomeUpdate);

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const
        /*override*/;

    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const
        /*override*/;

    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource);

    virtual void setAbilities(::LayeredAbilities const& newAbilities);

    virtual ::AnimationComponent& getAnimationComponent() /*override*/;

    virtual ::HashedString const& getActorRendererId() const /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const = 0;

    virtual void destroyEditorPlayer() = 0;

    virtual void _serverInitItemStackIds() /*override*/;

    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Player(
        ::ILevel&                         level,
        ::PacketSender&                   packetSender,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext,
        ::std::string const&              platformId,
        ::std::string const&              platformOnlineId
    );

#ifdef LL_PLAT_C
    MCNAPI bool _canChangeGameType(::GameType newGameType) const;
#endif

    MCNAPI bool _checkAndFixSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave
    );

#ifdef LL_PLAT_C
    MCNAPI void _enterBedSleepState(::BlockPos const& bedBlockPos, float sleepOffset);

    MCNAPI bool _findFallbackSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        uint const                                     maxDistance,
        bool const                                     checkStoredFallback
    );
#endif

    MCNAPI bool _isChunkSourceLoaded(::Vec3 const& spawnPosition, ::BlockSource const& region) const;

    MCNAPI void _setInteractionSynchedData(::std::string text, ::ActorInteractionHandResult handResult);

    MCNAPI void _setPlayerGameType(::GameType gameType);

#ifdef LL_PLAT_C
    MCNAPI ::BedSleepingResult _validateCanSleepInBed(::BlockPos const& bedBlockPos) const;

    MCNAPI ::BedSleepingResult _validateSleepConditions(::BlockPos const& bedBlockPos) const;
#endif

    MCNAPI bool _validateSpawnPositionAvailability(
        ::Vec3 const&       pos,
        ::BlockSource*      blockSourceChunkCheck,
        ::Vec3 const* const AABBoffset
    ) const;

    MCAPI ::ActorHurtResult attack(
        ::Actor&                                       actor,
        ::SharedTypes::Legacy::ActorDamageCause const& cause,
        ::Player::AttackParameters const&              parameters
    );

    MCAPI bool canJump();

    MCAPI bool canOpenContainerScreen();

    MCNAPI bool canStackInOffhand(::ItemStack const& item) const;

    MCAPI bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    MCAPI bool canUseOperatorBlocks() const;

    MCNAPI void causeFoodExhaustion(float exhaustionAmount);

    MCNAPI bool checkBed(::BlockSource* spawnBlockSource, ::Vec3 const* const positionToCheck);

    MCNAPI bool checkNeedAutoJump(float inputMoveX, float inputMoveZ);

    MCNAPI bool checkSpawnBlock(::BlockSource const& region) const;

    MCAPI void completeUsingItem();

#ifdef LL_PLAT_C
    MCNAPI void crackBlock(::BlockPos const& pos, uchar face);
#endif

    MCAPI void eat(::ItemStack const& instance);

    MCAPI void eat(int hungerValue, float saturationModifier);

    MCNAPI bool equippedArmorItemCanBeMoved(::ItemStack const& item) const;

    MCAPI void fireDimensionChangedEvent(::DimensionType fromDimension, ::DimensionType toDimension);

    MCFOLD ::LayeredAbilities const& getAbilities() const;

    MCFOLD ::LayeredAbilities& getAbilities();

    MCNAPI ::Bedrock::SmallOptional<::HandSlot, ::Bedrock::DefaultSmallOptionalTraits<::HandSlot>>
    getActiveShieldSlot() const;

    MCNAPI ::Agent* getAgentIfAllowed(bool callerCanAccessOtherAgents, ::ActorUniqueID callerAgentID) const;

    MCNAPI ::SoundEventIdentifier getAttackCriticalHitSound() const;

    MCNAPI ::SoundEventIdentifier getAttackHitSound() const;

    MCNAPI ::SoundEventIdentifier getAttackMissSound() const;

    MCNAPI ::std::string getChatDisplayName() const;

    MCAPI float getDestroyProgress(::Block const& block);

    MCAPI ::DimensionType getExpectedSpawnDimensionId() const;

    MCAPI ::BlockPos const& getExpectedSpawnPosition() const;

    MCNAPI ::std::string getInteractText() const;

    MCAPI int getItemCooldownLeft(::HashedString const& category) const;

    MCNAPI int getItemCooldownLeft(uint64 categoryHash) const;

#ifdef LL_PLAT_C
    MCNAPI float getItemCooldownProgress(::HashedString const& category) const;
#endif

    MCNAPI ::std::string getItemInteractText(::Item const& item) const;

    MCNAPI int getMaxItemCooldownLeft() const;

    MCNAPI ::AABB getPickupArea() const;

    MCAPI ::GameType getPlayerGameType() const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;

    MCNAPI float getSleepRotation() const;

#ifdef LL_PLAT_C
    MCNAPI void handleMovePlayerPacket(
        ::PlayerPositionModeComponent::PositionMode mode,
        ::Vec3 const&                               pos,
        ::Vec2 const&                               rot,
        float                                       yHeadRot,
        int                                         cause,
        int                                         sourceEntityType
    );
#endif

    MCNAPI bool hasResource(::ItemDescriptor const& resource);

    MCAPI ::InteractionResult interact(::Actor& actor, ::Vec3 const& location, ::HandSlot handSlot);

    MCAPI void inventoryChanged(
        ::Container&,
        int                slot,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool               forceBalanced
    );

    MCNAPI bool isEditorPlayer() const;

    MCNAPI bool isEquipmentHidden() const;

    MCAPI bool isFlying() const;

    MCNAPI bool isForcedRespawn() const;

    MCAPI bool isItemOnCooldown(::HashedString const& category) const;

#ifdef LL_PLAT_C
    MCAPI bool isOperator() const;

    MCNAPI bool isScoping() const;
#endif

    MCNAPI void playPredictiveSynchronizedSound(
        ::SoundEventIdentifier const& soundEvent,
        ::Vec3 const&                 pos,
        int                           data,
        bool                          isGlobal
    );

    MCNAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal
    );

#ifdef LL_PLAT_C
    MCNAPI void registerTrackedBoss(::ActorUniqueID mob);
#endif

    MCAPI void releaseUsingItem();

    MCAPI void resetPlayerLevel();

    MCNAPI void sendEventPacket(::LegacyTelemetryEventPacket& packet) const;

    MCNAPI void setAgent(::Agent* agent);

#ifdef LL_PLAT_C
    MCNAPI void setBedRespawnPosition(::BlockPos const& bedPosition);
#endif

    MCAPI void setChunkRadius(uint chunkRadius);

    MCAPI void setCommandPermissions(::CommandPermissionLevel permissions);

    MCAPI void setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> manager);

    MCAPI void setName(::std::string const& newName);

    MCAPI void setPlayerUIItem(::PlayerUISlot slot, ::ItemStack const& item, bool forceBalance);

    MCAPI void setRespawnPosition(::BlockPos const& inRespawnPosition, ::DimensionType dimension);

    MCNAPI void setRespawnPositionCandidate();

    MCAPI ::ItemStack const& setSelectedSlot(int slot);

    MCNAPI bool setSpawnBlockRespawnPosition(::BlockPos const& spawnBlockPosition, ::DimensionType dimension);

    MCAPI void startGliding();

    MCNAPI void startItemCooldown(::Item const& item, bool updateClient);

    MCAPI void startItemCooldown(::HashedString const& type, int tickDuration, bool updateClient);

    MCAPI void
    startItemUseOn(uchar face, ::BlockPos const& blockPos, ::BlockPos const& buildBlockPos, ::ItemStack const& item);

    MCAPI void startUsingItem(::ItemStack const& instance, int duration, ::HandSlot handSlot);

    MCAPI void stopGliding();

    MCAPI void stopItemUseOn(::BlockPos const& blockPos, ::ItemStack const& item);

    MCAPI void stopUsingItem();

    MCAPI bool take(::Actor& actor, int, int favoredSlot);

    MCAPI bool tryStartGliding();

#ifdef LL_PLAT_C
    MCNAPI void unRegisterTrackedBoss(::ActorUniqueID mob);

    MCAPI bool updateEmoteMessageData(::PersonaPiece const& emotePiece);
#endif

    MCAPI void updateInventoryTransactions();

    MCAPI void updateSkin(::SerializedSkinRef const& skin, int clientSubID);

    MCNAPI void updateTouch();

    MCNAPI void useItemInHandSlot(::HandSlot handSlot, ::ItemUseMethod itemUseMethod, bool consumeItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool checkNeedAutoJump(
        ::IConstBlockSource const&                         region,
        ::AABBShapeComponent const&                        aabbShape,
        ::ActorRotationComponent const&                    actorRotation,
        float                                              movementSpeed,
        ::StateVectorComponent const&                      stateVector,
        ::optional_ref<::GetCollisionShapeInterface const> collisionShapeInterface,
        float                                              inputMoveX,
        float                                              inputMoveZ
    );

    MCNAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob const& mob, ::SharedTypes::Legacy::ActorDamageCause cause);

    MCAPI static ::Player* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

#ifdef LL_PLAT_C
    MCNAPI static void
    updatePlayerGameTypeEntityData(::EntityContext& entity, ::GameType gameType, ::GameType defaultGameType);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Attribute const& EXHAUSTION();

    MCAPI static ::Attribute const& EXPERIENCE();

    MCAPI static ::Attribute const& HUNGER();

    MCAPI static ::Attribute const& LEVEL();

    MCAPI static ::Attribute const& SATURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::ILevel&                         level,
        ::PacketSender&                   packetSender,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext,
        ::std::string const&              platformId,
        ::std::string const&              platformOnlineId
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
    MCNAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCNAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCNAPI void $destroyRegion();

    MCNAPI void $suspendRegion();

    MCNAPI void $_fireDimensionChanged();

    MCNAPI bool $canChangeDimensionsUsingPortal() const;

    MCNAPI void $changeDimensionWithCredits(::DimensionType dimension);

#ifdef LL_PLAT_S
    MCAPI void $tickWorld(::Tick const&);
#else // LL_PLAT_C
    MCAPI void $tickWorld(::Tick const& currentTick);
#endif

    MCNAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCNAPI void $normalTick();

    MCNAPI void $moveView();

    MCNAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    MCNAPI void $onSynchedDataUpdate(int dataId);

    MCNAPI void $aiStep();

    MCNAPI bool $isFireImmune() const;

    MCNAPI void $checkMovementStats(::Vec3 const& d);

    MCNAPI ::HashedString $getCurrentStructureFeature() const;

    MCNAPI bool $isAutoJumpEnabled() const;

    MCNAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCNAPI void $passengerTick();

    MCAPI void $die(::ActorDamageSource const& source);

    MCNAPI void $remove();

    MCAPI void $respawn();

    MCNAPI bool $shouldDropDeathLoot() const;

    MCNAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCNAPI void $dropEquipmentOnDeath();

    MCNAPI void $clearVanishEnchantedItemsOnDeath();

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCNAPI void $resetRot();

    MCNAPI void $resetUserPos(::ActorResetRule resetRule);

    MCNAPI bool $isInTrialMode();

    MCNAPI void $setSpeed(float _speed);

    MCNAPI int $getItemUseDuration() const;

    MCNAPI float $getItemUseStartupProgress() const;

    MCNAPI float $getItemUseIntervalProgress() const;

    MCNAPI bool $isBlocking() const;

    MCAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCNAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCNAPI ::std::vector<::ItemStack const*> $getAllHandEquipment() const;

    MCNAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI bool $add(::ItemStack& item);

    MCNAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCAPI ::ActorHurtResult $attack(::Actor& actor, ::SharedTypes::Legacy::ActorDamageCause const& cause);

    MCNAPI ::ItemStack const& $getCarriedItem() const;

    MCNAPI void $setCarriedItem(::ItemStack const& item);

    MCNAPI void $damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);

    MCNAPI void $openPortfolio();

#ifdef LL_PLAT_S
    MCNAPI void $openBook(int, bool, int, ::BlockActor*);
#else // LL_PLAT_C
    MCNAPI void $openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern);
#endif

    MCNAPI void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);

#ifdef LL_PLAT_S
    MCNAPI void $openChalkboard(::ChalkboardBlockActor&, bool);
#else // LL_PLAT_C
    MCNAPI void $openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle);
#endif

    MCNAPI void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCNAPI void $openInventory();

    MCNAPI void $displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    MCNAPI void
    $displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    MCNAPI void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCNAPI void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCNAPI void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCNAPI void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    MCNAPI float $getShadowRadius() const;

    MCAPI bool $isSleeping() const;

    MCNAPI void $setSleeping(bool val);

    MCAPI ::BedSleepingResult $startSleepInBed(::BlockPos const& bedPos, bool setsRespawn, float sleepOffset);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCNAPI bool $canStartSleepInBed();

    MCNAPI void $sendInventory(bool shouldSelectSlot);

    MCNAPI void $openSign(::BlockPos const& position, bool isFrontSide);

#ifdef LL_PLAT_S
    MCNAPI void $playEmote(::std::string const&, bool const);
#else // LL_PLAT_C
    MCNAPI void $playEmote(::std::string const& pieceId, bool const playChatMessage);
#endif

    MCNAPI bool $isSilentObserver() const;

    MCAPI void $useItem(::ItemStackBase& instance, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCNAPI bool $isLoading() const;

    MCNAPI bool $isPlayerInitialized() const;

    MCNAPI void $stopLoading();

    MCNAPI float $getSpeed() const;

    MCNAPI void $setPlayerGameType(::GameType gameType);

    MCNAPI void $initHUDContainerManager();

    MCNAPI void $emitCriticalHitParticles(::Actor const& target, int particleCount);

    MCAPI bool $isImmobile() const;

    MCNAPI void $sendMotionPacketIfNeeded();

    MCNAPI ::IMinecraftEventing* $getEventing() const;

    MCNAPI uint $getUserId() const;

    MCAPI void $addExperience(int xp);

    MCNAPI void $addLevels(int levels);

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCNAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

    MCNAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCNAPI void $deleteContainerManager();

    MCNAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCNAPI bool $isActorRelevant(::Actor const& actor);

    MCNAPI float $getMapDecorationRotation() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCNAPI void $startSwimming();

    MCNAPI void $stopSwimming();

    MCNAPI void $onSuspension();

    MCNAPI void $onLinkedSlotsChanged();

    MCNAPI bool $canBePulledIntoVehicle() const;

    MCNAPI void $feed(int itemId);

    MCNAPI void $sendNetworkPacket(::Packet& packet) const;

    MCNAPI bool $canExistWhenDisallowMob() const;

    MCNAPI ::mce::Color $getNameTagTextColor() const;

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCNAPI bool $isSimulated() const;

    MCAPI ::std::string $getXuid() const;

    MCNAPI ::std::string $getPlayFabId() const;

    MCNAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCNAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCNAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCNAPI ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCNAPI ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCNAPI bool $hasDiedBefore() const;

    MCNAPI void $doEnterWaterSplashEffect();

    MCNAPI void $doExitWaterSplashEffect();

    MCNAPI ::std::optional<::PlayerPartyInfo> $getPartyInfo_UNTRUSTED() const;

#ifdef LL_PLAT_S
    MCNAPI void $requestMissingSubChunk(::SubChunkPos const&);
#else // LL_PLAT_C
    MCNAPI void $requestMissingSubChunk(::SubChunkPos const& scp);
#endif

    MCNAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

#ifdef LL_PLAT_S
    MCNAPI void $setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);
#else // LL_PLAT_C
    MCNAPI void $setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status);
#endif

#ifdef LL_PLAT_S
    MCNAPI void $setRemotePlayerTicked(bool);
#else // LL_PLAT_C
    MCNAPI void $setRemotePlayerTicked(bool ticked);
#endif

    MCNAPI ::std::unique_ptr<::ISparseContainerSetListener> $createSparseContainerListener();

    MCNAPI void $addChunksToQueue(::std::vector<::ChunkPos> const& chunkPostions, bool isBiomeUpdate);

    MCAPI ::ActorHurtResult
    $_hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCNAPI void $onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCNAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCNAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCNAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCNAPI ::AnimationComponent& $getAnimationComponent();

    MCNAPI ::HashedString const& $getActorRendererId() const;

    MCNAPI void $_serverInitItemStackIds();

    MCNAPI ::std::unique_ptr<::BodyControl> $initBodyControl();


    // NOLINTEND
};
