#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/components/UserEntityIdentifierComponent.h"
#include "mc/network/NetworkPeer.h"
#include "mc/world/inventory/EnderChestContainer.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/ContainerID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerSpawnFallbackType.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class AddActorBasePacket;
class Agent;
class AnimationComponent;
class Attribute;
class Block;
class BlockActor;
class BlockPos;
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
class Dimension;
class EnderChestContainer;
class EntityContext;
class FrameUpdateContextBase;
class GameMode;
class GameServerToken;
class GetCollisionShapeInterface;
class HashedString;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
class IMinecraftEventing;
class InventoryTransaction;
class InventoryTransactionManager;
class Item;
class ItemDescriptor;
class ItemGroup;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class ItemStackNetManagerBase;
class LayeredAbilities;
class LegacyTelemetryEventPacket;
class Level;
class NetworkChunkPublisher;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class PlayerInventory;
class PlayerListener;
class PlayerRespawnRandomizer;
class PlayerUIContainer;
class ResolvedTextObject;
class SerializedSkin;
class ShieldItem;
class Stopwatch;
class SubChunkPos;
class TextObjectRoot;
class Vec2;
class Vec3;
struct AABBShapeComponent;
struct ActorDefinitionIdentifier;
struct ActorRotationComponent;
struct ActorUniqueID;
struct INpcDialogueData;
struct InventoryOptions;
struct MutableAttributeWithContext;
struct PlayerDestroyProgressCacheComponent;
struct PlayerItemInUse;
struct PlayerMovementSettings;
struct StateVectorComponent;
struct Tick;
struct VariantParameterList;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
// clang-format on

class ConnectionRequest;

class Player : public ::Mob {
public:
    // Player inner types declare
    // clang-format off
    struct CachedSpawnData;
    struct FixedSpawnPositionData;
    struct FixedSpawnPositionData_DEPRECATED;
    struct PlayerSpawnPoint;
    // clang-format on

    // Player inner types define
    using PlayerFlagIDType = char;

    struct FixedSpawnPositionData_DEPRECATED {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3> mPosition;
        ::ll::TypedStorage<1, 1, bool>    mIsAboveLeaves;
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

    enum class SpawnPositionSource : int {
        Randomizer = 0,
        Respawn    = 1,
        Teleport   = 2,
        Static     = 3,
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

    using PlayerListenerList = ::std::vector<::PlayerListener*>;

    struct PlayerSpawnPoint {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::BlockPos>     mSpawnBlockPos;
        ::ll::TypedStorage<4, 12, ::BlockPos>     mPlayerPosition;
        ::ll::TypedStorage<4, 4, ::DimensionType> mDimension;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool
        setSpawnPoint(::BlockPos const& playerPosition, ::DimensionType dimension, ::BlockPos const& spawnBlock);
        // NOLINTEND
    };

    using ContainerManagerSubscriber = ::Bedrock::PubSub::
        Publisher<void(::ContainerManagerModel const*), ::Bedrock::PubSub::ThreadModel::SingleThreaded>;

public:
    LLNDAPI UserEntityIdentifierComponent const& getUserEntityIdentifier() const;

    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier();

    LLNDAPI optional_ref<ConnectionRequest const> getConnectionRequest() const;

    LLNDAPI NetworkIdentifier const& getNetworkIdentifier() const;

    LLNDAPI optional_ref<Certificate const> getCertificate() const;

    LLNDAPI SubClientId const& getClientSubId() const;

    /**
     * @brief Get the player's uuid
     * @return Player's uuid
     */
    LLNDAPI mce::UUID const& getUuid() const;

    /**
     * @brief Get the player's IP and port
     * @return player's IP and port
     */
    LLNDAPI std::string getIPAndPort() const;

    /**
     * @brief Get the player's real in-game nickname
     * @return player's real in-game nickname
     */
    LLNDAPI std::string getRealName() const;

    /**
     * @brief Get the name of the player's langtext.
     * @return The name of the player's langtext.
     * @warning This is not the player's in-game nickname.
     */
    LLNDAPI std::string getLocaleCode() const;

    LLNDAPI std::optional<NetworkPeer::NetworkStatus> getNetworkStatus() const;

    /**
     * @brief Disconnect player's client
     */
    LLAPI void disconnect(std::string_view reason) const;
    /**
     * @brief Send a message to player
     */
    LLAPI void sendMessage(std::string_view msg) const;

    LLAPI void setAbility(::AbilitiesIndex index, bool value);

    /**
     * @brief Determine if a player is an administrator of the server
     * @return Returns true if the player is an administrator of the server; otherwise returns false
     * @warning Custom permissions are not considered administrators
     */
    LLNDAPI bool isOperator() const;

    /**
     * @brief Give player item and refresh.
     * @return Whether it is a complete success
     *         (e.g. returning false if the quantity of items given to the player does not match the expectation).
     * @warning The return value does not take into account whether the refresh was successful.
     *          You can use Player::add, but it will not refresh the item, which may lead to potential issues.
     */
    LLAPI bool addAndRefresh(class ItemStack& item);

    LLNDAPI optional_ref<EnderChestContainer> getEnderChestContainer() const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                         mOceanBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                         mFroglights;
    ::ll::TypedStorage<4, 4, float const>                                    mSneakHeight;
    ::ll::TypedStorage<4, 4, float const>                                    mSneakOffset;
    ::ll::TypedStorage<4, 4, int>                                            mScore;
    ::ll::TypedStorage<4, 4, float>                                          mOBob;
    ::ll::TypedStorage<4, 4, float>                                          mBob;
    ::ll::TypedStorage<4, 4, ::BuildPlatform>                                mBuildPlatform;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mUniqueName;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mServerId;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mSelfSignedId;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlatformOfflineId;
    ::ll::TypedStorage<8, 8, uint64>                                         mClientRandomId;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mPlatformId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPendingVehicleID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPendingLeftShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPendingRightShoulderPassengerID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mInteractTarget;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mInteractTargetPos;
    ::ll::TypedStorage<1, 1, bool>                                           mHasFakeInventory;
    ::ll::TypedStorage<1, 1, bool>                                           mIsRegionSuspended;
    ::ll::TypedStorage<1, 1, bool>                                           mUpdateMobs;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>          mChunkSource;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>          mSpawnChunkSource;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mCapePosO;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mCapePos;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ContainerManagerModel>>    mContainerManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<ContainerManagerSubscriber>>  mContainerManagerSubscribers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInventory>>           mInventory;
    ::ll::TypedStorage<4, 20, ::InventoryOptions>                            mInventoryOptions;
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
    ::ll::TypedStorage<2, 2, short>                                          mSleepCounter;
    ::ll::TypedStorage<2, 2, short>                                          mPrevSleepCounter;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                                mPreviousInteractEntity;
    ::ll::TypedStorage<4, 4, int>                                            mPreviousCarriedItem;
    ::ll::TypedStorage<4, 4, int>                                            mEmoteTicks;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::NetworkChunkPublisher>>    mChunkPublisherView;
    ::ll::TypedStorage<8, 8, ::PacketSender&>                                mPacketSender;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::HudContainerManagerModel>> mHudContainerManagerModel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EnderChestContainer>>       mEnderChestInventory;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>>                mTrackedBossIDs;
    ::ll::TypedStorage<8, 136, ::ItemGroup>                                  mCursorSelectedItemGroup;
    ::ll::TypedStorage<8, 520, ::PlayerUIContainer>                          mPlayerUIContainer;
    ::ll::TypedStorage<8, 48, ::InventoryTransactionManager>                 mTransactionManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::GameMode>>                  mGameMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerRespawnRandomizer>>   mSpawnRandomizer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SerializedSkin>>            mSkin;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemStackNetManagerBase>>   mItemStackNetManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mUIAnimationComponent;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::AnimationComponent>>       mMapAnimationComponent;
    ::ll::TypedStorage<4, 28, ::Player::PlayerSpawnPoint>                    mPlayerRespawnPoint;
    ::ll::TypedStorage<4, 4, float>                                          mServerBuildRatio;
    ::ll::TypedStorage<1, 1, ::SubClientId>                                  mClientId;
    ::ll::TypedStorage<1, 1, bool>                                           mInteractDataDirty;
    ::ll::TypedStorage<1, 1, bool>                                           mShouldClientGenerateChunks;
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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>     mCooldowns;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mVanillaCooldowns;
    ::ll::TypedStorage<8, 8, int64>                                                 mStartedBlockingTimeStamp;
    ::ll::TypedStorage<8, 8, int64>                                                 mBlockedUsingShieldTimeStamp;
    ::ll::TypedStorage<8, 8, int64>                                                 mBlockedUsingDamagedShieldTimeStamp;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mName;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mLastEmotePlayed;
    ::ll::TypedStorage<8, 8, int64>                                                 mEmoteEasterEggEndTime;
    ::ll::TypedStorage<4, 4, uint>                                                  mEmoteMessageCount;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mDeviceId;
    ::ll::TypedStorage<1, 1, bool>                                                  mFlagClientForBAIReset;
    ::ll::TypedStorage<1, 1, bool>                                                  mSendInventoryOptionsToClient;
    ::ll::TypedStorage<1, 1, bool>                                                  mIsHostingPlayer;
    ::ll::TypedStorage<1, 1, bool>                                                  mPrevBlockedUsingShield;
    ::ll::TypedStorage<1, 1, bool>                                                  mPrevBlockedUsingDamagedShield;
    ::ll::TypedStorage<1, 1, bool>                                                  mUsedPotion;
    ::ll::TypedStorage<8, 8, ::PlayerDestroyProgressCacheComponent&>                mDestroyProgressCache;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Player() /*override*/;

    // vIndex: 4
    virtual void
    initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 2
    virtual void reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params) /*override*/;

    // vIndex: 177
    virtual void prepareRegion(::ChunkSource& mainChunkSource);

    // vIndex: 178
    virtual void destroyRegion();

    // vIndex: 179
    virtual void suspendRegion();

    // vIndex: 180
    virtual void _fireDimensionChanged();

    // vIndex: 88
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 181
    virtual void changeDimensionWithCredits(::DimensionType);

    // vIndex: 182
    virtual void tickWorld(::Tick const&);

    // vIndex: 183
    virtual void frameUpdate(::FrameUpdateContextBase&) = 0;

    // vIndex: 184
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 185
    virtual void moveView();

    // vIndex: 186
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    // vIndex: 93
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 18
    virtual bool isFireImmune() const /*override*/;

    // vIndex: 187
    virtual void checkMovementStats(::Vec3 const&);

    // vIndex: 188
    virtual ::HashedString getCurrentStructureFeature() const;

    // vIndex: 189
    virtual bool isAutoJumpEnabled() const;

    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    // vIndex: 26
    virtual void passengerTick() /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 190
    virtual void respawn();

    // vIndex: 124
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 163
    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source) /*override*/;

    // vIndex: 162
    virtual void dropEquipmentOnDeath() /*override*/;

    // vIndex: 164
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    // vIndex: 117
    virtual bool drop(::ItemStack const& item, bool const randomly) /*override*/;

    // vIndex: 191
    virtual void resetRot();

    // vIndex: 9
    virtual void resetUserPos(bool clearMore) /*override*/;

    // vIndex: 192
    virtual bool isInTrialMode();

    // vIndex: 143
    virtual void setSpeed(float _speed) /*override*/;

    // vIndex: 149
    virtual int getItemUseDuration() const /*override*/;

    // vIndex: 150
    virtual float getItemUseStartupProgress() const /*override*/;

    // vIndex: 151
    virtual float getItemUseIntervalProgress() const /*override*/;

    // vIndex: 45
    virtual bool isBlocking() const /*override*/;

    // vIndex: 46
    virtual bool isDamageBlocked(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 160
    virtual ::std::vector<::ItemStack const*> getAllHand() const /*override*/;

    // vIndex: 161
    virtual ::std::vector<::ItemStack const*> getAllEquipment() const /*override*/;

    // vIndex: 116
    virtual bool add(::ItemStack& item) /*override*/;

    // vIndex: 103
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const /*override*/;

    // vIndex: 53
    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&) /*override*/;

    // vIndex: 78
    virtual ::ItemStack const& getCarriedItem() const /*override*/;

    // vIndex: 77
    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    // vIndex: 193
    virtual void openPortfolio();

    // vIndex: 194
    virtual void openBook(int, bool, int, ::BlockActor*);

    // vIndex: 195
    virtual void openTrading(::ActorUniqueID const&, bool);

    // vIndex: 196
    virtual void openChalkboard(::ChalkboardBlockActor&, bool);

    // vIndex: 197
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    // vIndex: 198
    virtual void openInventory();

    // vIndex: 199
    virtual void displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    // vIndex: 200
    virtual void
    displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    // vIndex: 201
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    // vIndex: 203
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    // vIndex: 202
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    // vIndex: 204
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    // vIndex: 35
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 42
    virtual bool isSleeping() const /*override*/;

    // vIndex: 43
    virtual void setSleeping(bool val) /*override*/;

    // vIndex: 205
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos);

    // vIndex: 206
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 207
    virtual bool canStartSleepInBed();

    // vIndex: 165
    virtual void sendInventory(bool) /*override*/;

    // vIndex: 208
    virtual void openSign(::BlockPos const&, bool);

    // vIndex: 209
    virtual void playEmote(::std::string const&, bool const);

    // vIndex: 41
    virtual bool isSilentObserver() const /*override*/;

    // vIndex: 112
    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem) /*override*/;

    // vIndex: 210
    virtual bool isLoading() const;

    // vIndex: 211
    virtual bool isPlayerInitialized() const;

    // vIndex: 212
    virtual void stopLoading();

    // vIndex: 142
    virtual float getSpeed() const /*override*/;

    // vIndex: 213
    virtual void setPlayerGameType(::GameType);

    // vIndex: 214
    virtual void initHUDContainerManager();

    // vIndex: 215
    virtual void _crit(::Actor& actor);

    // vIndex: 40
    virtual bool isImmobile() const /*override*/;

    // vIndex: 98
    virtual void sendMotionPacketIfNeeded(::PlayerMovementSettings const& playerMovementSettings) /*override*/;

    // vIndex: 216
    virtual ::IMinecraftEventing* getEventing() const;

    // vIndex: 217
    virtual uint getUserId() const;

    // vIndex: 218
    virtual void addExperience(int xp);

    // vIndex: 219
    virtual void addLevels(int levels);

    // vIndex: 72
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 23
    virtual ::std::unique_ptr<::AddActorBasePacket> tryCreateAddActorPacket() /*override*/;

    // vIndex: 64
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 220
    virtual void setContainerData(::IContainerManager&, int, int) = 0;

    // vIndex: 221
    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) = 0;

    // vIndex: 222
    virtual void refreshContainer(::IContainerManager&) = 0;

    // vIndex: 223
    virtual void deleteContainerManager();

    // vIndex: 80
    virtual ::ItemStack const& getEquippedTotem() const /*override*/;

    // vIndex: 81
    virtual bool consumeTotem() /*override*/;

    // vIndex: 224
    virtual bool isActorRelevant(::Actor const&);

    // vIndex: 114
    virtual float getMapDecorationRotation() const /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 100
    virtual void startSwimming() /*override*/;

    // vIndex: 101
    virtual void stopSwimming() /*override*/;

    // vIndex: 225
    virtual bool isTeacher() const = 0;

    // vIndex: 226
    virtual void onSuspension();

    // vIndex: 227
    virtual void onLinkedSlotsChanged();

    // vIndex: 96
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 68
    virtual void feed(int itemId) /*override*/;

    // vIndex: 228
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const = 0;

    // vIndex: 229
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const = 0;

    // vIndex: 230
    virtual void sendNetworkPacket(::Packet& packet) const;

    // vIndex: 172
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 34
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    // vIndex: 94
    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    // vIndex: 231
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    // vIndex: 232
    virtual bool isSimulated() const;

    // vIndex: 233
    virtual ::std::string getXuid() const;

    // vIndex: 234
    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 85
    virtual bool canFreeze() const /*override*/;

    // vIndex: 37
    virtual bool canInteractWithOtherEntitiesInGame() const /*override*/;

    // vIndex: 108
    virtual bool canObstructSpawningAndBlockPlacement() const /*override*/;

    // vIndex: 127
    virtual ::std::optional<::BlockPos> getLastDeathPos() const /*override*/;

    // vIndex: 128
    virtual ::std::optional<::DimensionType> getLastDeathDimension() const /*override*/;

    // vIndex: 129
    virtual bool hasDiedBefore() const /*override*/;

    // vIndex: 130
    virtual void doEnterWaterSplashEffect() /*override*/;

    // vIndex: 131
    virtual void doExitWaterSplashEffect() /*override*/;

    // vIndex: 235
    virtual void requestMissingSubChunk(::SubChunkPos const&);

    // vIndex: 236
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 92
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 237
    virtual void onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    // vIndex: 133
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const
        /*override*/;

    // vIndex: 134
    virtual bool _shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const
        /*override*/;

    // vIndex: 238
    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource);

    // vIndex: 239
    virtual void setAbilities(::LayeredAbilities const& newAbilities);

    // vIndex: 109
    virtual ::AnimationComponent& getAnimationComponent() /*override*/;

    // vIndex: 70
    virtual ::HashedString const& getActorRendererId() const /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 241
    virtual void destroyEditorPlayer() = 0;

    // vIndex: 6
    virtual void _serverInitItemStackIds() /*override*/;

    // vIndex: 174
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Player(
        ::Level&                   level,
        ::PacketSender&            packetSender,
        ::GameType                 playerGameType,
        bool                       isHostingPlayer,
        ::NetworkIdentifier const& owner,
        ::SubClientId              subid,
        ::mce::UUID                uuid,
        ::std::string const&       playFabId,
        ::std::string const&       deviceId,
        ::GameServerToken const&   gameServerToken,
        ::EntityContext&           entityContext,
        ::std::string const&       platformId,
        ::std::string const&       platformOnlineId
    );

    MCAPI void _addLevels(int levels);

    MCAPI bool _attack(::Actor& actor, ::SharedTypes::Legacy::ActorDamageCause const& cause, bool doPredictiveSound);

    MCAPI bool _blockUsingShield(::ActorDamageSource const& source, float damage);

    MCAPI bool _checkAndFixSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave
    );

    MCAPI void _chooseSpawnArea();

    MCAPI bool _chooseSpawnPositionWithinArea();

    MCAPI void _ensureSafeSpawnPosition(::Vec3& pos);

    MCAPI bool _findFallbackSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        uint                                           maxDistance,
        bool                                           checkStoredFallback
    );

    MCAPI ::std::optional<::BlockPos> _findValidPosWithVerticalSpace(::BlockPos spawnPosition);

    MCAPI void _handleCarriedItemInteractText();

    MCAPI bool _isChunkSourceLoaded(::Vec3 const& spawnPosition, ::BlockSource const& region) const;

    MCAPI void _loadInventoryOptions(::CompoundTag const& tag);

    MCAPI void _preSpawnBuildSpawnDataCache();

    MCAPI void _registerElytraLoopSound();

    MCAPI void _registerPlayerAttributes();

    MCAPI void _resetClientAnimations();

    MCAPI void _saveInventoryOptions(::CompoundTag& tag) const;

    MCAPI void _sendShieldUpdatePacket(
        ::ShieldItem const& before,
        ::ItemStack const&  after,
        ::ItemStack const&  slot,
        ::ContainerID       shieldItem,
        int                 container
    );

    MCAPI void _setPlayerGameType(::GameType gameType);

    MCAPI bool _shouldCrit(::Actor const& target) const;

    MCAPI void _updateInteraction();

    MCAPI bool _validateSpawnPositionAvailability(
        ::Vec3 const&       pos,
        ::BlockSource*      blockSourceChunkCheck,
        ::Vec3 const* const AABBoffset
    ) const;

    MCAPI bool canJump();

    MCAPI bool canOpenContainerScreen();

    MCAPI bool canSleep() const;

    MCAPI bool canStackInOffhand(::ItemStack const& item) const;

    MCAPI bool canUseAbility(::AbilitiesIndex abilityIndex) const;

    MCAPI bool canUseOperatorBlocks() const;

    MCAPI void causeFoodExhaustion(float exhaustionAmount);

    MCAPI bool checkBed(::BlockSource* spawnBlockSource, ::Vec3 const* const positionToCheck);

    MCAPI bool checkNeedAutoJump(float inputMoveX, float inputMoveZ);

    MCAPI bool checkSpawnBlock(::BlockSource const& region) const;

    MCAPI void completeUsingItem();

    MCAPI void eat(::ItemStack const& instance);

    MCAPI void eat(int hungerValue, float saturationModifier);

    MCAPI bool equippedArmorItemCanBeMoved(::ItemStack const& item) const;

    MCAPI void fireDimensionChangedEvent(::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI ::LayeredAbilities const& getAbilities() const;

    MCFOLD ::LayeredAbilities& getAbilities();

    MCAPI ::Agent* getAgent() const;

    MCAPI ::ItemStack const& getCurrentActiveShield() const;

    MCAPI float getDestroyProgress(::Block const& block);

    MCAPI ::DimensionType getExpectedSpawnDimensionId() const;

    MCAPI ::BlockPos const& getExpectedSpawnPosition() const;

    MCAPI ::std::string getInteractText() const;

    MCAPI int getItemCooldownLeft(::HashedString const& type) const;

    MCAPI ::std::string getItemInteractText(::Item const& item) const;

    MCAPI ::AABB getPickupArea() const;

    MCAPI ::GameType getPlayerGameType() const;

    MCFOLD ::ItemStack const& getSelectedItem() const;

    MCAPI float getSleepRotation() const;

    MCAPI int getXpNeededForNextLevel() const;

    MCFOLD bool hasOwnedChunkSource() const;

    MCAPI bool hasResource(::ItemDescriptor const& resource);

    MCAPI bool hasRespawnPosition() const;

    MCAPI bool interact(::Actor& actor, ::Vec3 const& location);

    MCAPI void inventoryChanged(
        ::Container&       slot,
        int                oldItem,
        ::ItemStack const& newItem,
        ::ItemStack const& forceBalanced,
        bool
    );

    MCAPI bool is2DPositionRelevant(::DimensionType dimension, ::BlockPos const& position);

    MCAPI bool isFlying() const;

    MCAPI bool isForcedRespawn() const;

    MCAPI bool isHiddenFrom(::Mob& target) const;

    MCAPI bool isInRaid() const;

    MCAPI bool isItemOnCooldown(::HashedString const& type) const;

    MCAPI void loadLastDeathLocation(::CompoundTag const& tag);

    MCAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::ActorDefinitionIdentifier const&     entityType,
        int                                    data,
        bool                                   isGlobal
    );

    MCAPI void recheckSpawnPosition();

    MCAPI void releaseUsingItem();

    MCAPI void resetPlayerLevel();

    MCAPI void saveLastDeathLocation(::CompoundTag& tag) const;

    MCAPI void sendEventPacket(::LegacyTelemetryEventPacket& packet) const;

    MCAPI void setBedRespawnPosition(::BlockPos const& bedPosition);

    MCAPI void setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> manager);

    MCAPI void setHasDied(bool hasDied);

    MCAPI void setLastDeathDimension(::DimensionType dimension);

    MCAPI void setLastDeathPos(::BlockPos pos);

    MCAPI void setName(::std::string const& newName);

    MCAPI void setPlatformOnlineId(::std::string const& platformOnlineId);

    MCAPI void setPlayerUIItem(::PlayerUISlot slot, ::ItemStack const& item, bool forceBalance);

    MCAPI void setRespawnPosition(::BlockPos const& inRespawnPosition, ::DimensionType dimension);

    MCAPI void setRespawnPositionCandidate();

    MCAPI void setSelectedItem(::ItemStack const& item);

    MCAPI ::ItemStack const& setSelectedSlot(int slot);

    MCAPI bool setSpawnBlockRespawnPosition(::BlockPos const& spawnBlockPosition, ::DimensionType dimension);

    MCAPI void startCooldown(::Item const* item, bool updateClient);

    MCAPI void startCooldown(::HashedString const& type, int tickDuration, bool updateClient);

    MCAPI void startGliding();

    MCAPI void
    startItemUseOn(uchar face, ::BlockPos const& blockPos, ::BlockPos const& buildBlockPos, ::ItemStack const& item);

    MCAPI void startUsingItem(::ItemStack const& instance, int duration);

    MCAPI void stopGliding();

    MCAPI void stopItemUseOn(::BlockPos const& blockPos, ::ItemStack const& item);

    MCAPI void stopUsingItem();

    MCAPI bool take(::Actor& actor, int favoredSlot, int);

    MCAPI void tickArmor();

    MCAPI bool tryStartGliding();

    MCAPI void unRegisterTrackedBoss(::ActorUniqueID mob);

    MCAPI void updateInventoryTransactions();

    MCAPI void updateSkin(::SerializedSkin const& skin, int clientSubID);

    MCAPI void updateTrackedBosses();

    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _causeFoodExhaustion(::MutableAttributeWithContext& attribute, float exhaustionAmount);

    MCAPI static ::std::optional<::Player::FixedSpawnPositionData_DEPRECATED> checkAndFixSpawnPosition_DEPRECATED(
        ::Vec3 const&                                  spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        ::AABB                                         aabb,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave,
        bool                                           spawningAtForcedSpawn,
        bool                                           dimensionHeight,
        short
    );

    MCAPI static bool checkNeedAutoJump(
        ::IConstBlockSource const&                         region,
        ::AABBShapeComponent const&                        aabbShape,
        ::ActorRotationComponent const&                    actorRotation,
        float                                              movementSpeed,
        ::StateVectorComponent const&                      stateVector,
        ::optional_ref<::GetCollisionShapeInterface const> collisionShapeInterface,
        float                                              inputMoveX,
        float                                              inputMoveZ
    );

    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob& mob, ::SharedTypes::Legacy::ActorDamageCause cause);

    MCAPI static bool isDangerousVolumeForSpawn(::BlockSource& region, ::AABB const& centeredAABB);

    MCAPI static bool
    isDangerousVolume_DEPRECATED(::BlockSource& region, ::AABB const& centeredAABB, bool checkForLava);

    MCAPI static ::Player* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);

    MCAPI static ::Player* tryGetFromEntity(::StackRefResult<::EntityContext> entity, bool includeRemoved);

    MCAPI static void
    updatePlayerGameTypeEntityData(::EntityContext& entity, ::GameType gameType, ::GameType defaultGameType);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_BB_HEIGHT();

    MCAPI static float const& DEFAULT_BB_WIDTH();

    MCAPI static float const& DEFAULT_PLAYER_EYE_OFFSET();

    MCAPI static float const& DEFAULT_PLAYER_HEIGHT_OFFSET();

    MCAPI static float const& DISTANCE_TO_TRANSFORM_EVENT();

    MCAPI static ::Attribute const& EXHAUSTION();

    MCAPI static ::Attribute const& EXPERIENCE();

    MCAPI static int const& GLIDE_STOP_DELAY();

    MCAPI static ::Attribute const& HUNGER();

    MCAPI static ::Attribute const& LEVEL();

    MCAPI static float const& PLAYER_SLEEPING_HEIGHT();

    MCAPI static ::Attribute const& SATURATION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&                   level,
        ::PacketSender&            packetSender,
        ::GameType                 playerGameType,
        bool                       isHostingPlayer,
        ::NetworkIdentifier const& owner,
        ::SubClientId              subid,
        ::mce::UUID                uuid,
        ::std::string const&       playFabId,
        ::std::string const&       deviceId,
        ::GameServerToken const&   gameServerToken,
        ::EntityContext&           entityContext,
        ::std::string const&       platformId,
        ::std::string const&       platformOnlineId
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
    MCAPI void $initializeComponents(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $reloadHardcoded(::ActorInitializationMethod method, ::VariantParameterList const& params);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI void $destroyRegion();

    MCAPI void $suspendRegion();

    MCAPI void $_fireDimensionChanged();

    MCAPI bool $canChangeDimensionsUsingPortal() const;

    MCFOLD void $changeDimensionWithCredits(::DimensionType);

    MCAPI void $tickWorld(::Tick const&);

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI void $normalTick();

    MCAPI void $moveView();

    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    MCFOLD void $onSynchedDataUpdate(int dataId);

    MCAPI void $aiStep();

    MCAPI bool $isFireImmune() const;

    MCFOLD void $checkMovementStats(::Vec3 const&);

    MCFOLD ::HashedString $getCurrentStructureFeature() const;

    MCFOLD bool $isAutoJumpEnabled() const;

    MCAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI void $passengerTick();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $remove();

    MCAPI void $respawn();

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCAPI void $dropEquipmentOnDeath();

    MCFOLD void $clearVanishEnchantedItemsOnDeath();

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCFOLD void $resetRot();

    MCAPI void $resetUserPos(bool clearMore);

    MCFOLD bool $isInTrialMode();

    MCAPI void $setSpeed(float _speed);

    MCAPI int $getItemUseDuration() const;

    MCAPI float $getItemUseStartupProgress() const;

    MCAPI float $getItemUseIntervalProgress() const;

    MCAPI bool $isBlocking() const;

    MCAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI ::std::vector<::ItemStack const*> $getAllHand() const;

    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI bool $add(::ItemStack& item);

    MCFOLD ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCFOLD void $openPortfolio();

    MCFOLD void $openBook(int, bool, int, ::BlockActor*);

    MCFOLD void $openTrading(::ActorUniqueID const&, bool);

    MCFOLD void $openChalkboard(::ChalkboardBlockActor&, bool);

    MCFOLD void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCFOLD void $openInventory();

    MCFOLD void $displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    MCAPI void
    $displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    MCFOLD void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCFOLD void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCFOLD void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCFOLD void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    MCAPI float $getShadowRadius() const;

    MCAPI bool $isSleeping() const;

    MCAPI void $setSleeping(bool val);

    MCAPI ::BedSleepingResult $startSleepInBed(::BlockPos const& bedBlockPos);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCAPI bool $canStartSleepInBed();

    MCFOLD void $sendInventory(bool);

    MCFOLD void $openSign(::BlockPos const&, bool);

    MCFOLD void $playEmote(::std::string const&, bool const);

    MCAPI bool $isSilentObserver() const;

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCFOLD bool $isLoading() const;

    MCFOLD bool $isPlayerInitialized() const;

    MCFOLD void $stopLoading();

    MCAPI float $getSpeed() const;

    MCAPI void $initHUDContainerManager();

    MCAPI void $_crit(::Actor& actor);

    MCAPI bool $isImmobile() const;

    MCFOLD void $sendMotionPacketIfNeeded(::PlayerMovementSettings const& playerMovementSettings);

    MCAPI ::IMinecraftEventing* $getEventing() const;

    MCFOLD uint $getUserId() const;

    MCAPI void $addExperience(int xp);

    MCAPI void $addLevels(int levels);

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::std::unique_ptr<::AddActorBasePacket> $tryCreateAddActorPacket();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI void $deleteContainerManager();

    MCAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCFOLD bool $isActorRelevant(::Actor const&);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCFOLD void $onSuspension();

    MCFOLD void $onLinkedSlotsChanged();

    MCFOLD bool $canBePulledIntoVehicle() const;

    MCAPI void $feed(int itemId);

    MCFOLD void $sendNetworkPacket(::Packet& packet) const;

    MCFOLD bool $canExistWhenDisallowMob() const;

    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCFOLD bool $isSimulated() const;

    MCAPI ::std::string $getXuid() const;

    MCAPI ::PlayerMovementSettings const& $getMovementSettings() const;

    MCAPI bool $canFreeze() const;

    MCAPI bool $canInteractWithOtherEntitiesInGame() const;

    MCAPI bool $canObstructSpawningAndBlockPlacement() const;

    MCAPI ::std::optional<::BlockPos> $getLastDeathPos() const;

    MCAPI ::std::optional<::DimensionType> $getLastDeathDimension() const;

    MCAPI bool $hasDiedBefore() const;

    MCAPI void $doEnterWaterSplashEffect();

    MCAPI void $doExitWaterSplashEffect();

    MCFOLD void $requestMissingSubChunk(::SubChunkPos const&);

    MCFOLD uchar $getMaxChunkBuildRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI ::HashedString const& $getActorRendererId() const;

    MCFOLD void $_serverInitItemStackIds();

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
