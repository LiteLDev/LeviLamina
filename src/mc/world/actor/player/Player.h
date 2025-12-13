#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/certificates/Certificate.h"
#include "mc/entity/components/UserEntityIdentifierComponent.h"
#include "mc/network/NetworkPeer.h"
#include "mc/world/inventory/EnderChestContainer.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/deps/shared_types/legacy/actor/ActorDamageCause.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/world/ContainerID.h"
#include "mc/world/PlayerUIContainer.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerItemInUse.h"
#include "mc/world/actor/player/PlayerSpawnFallbackType.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/inventory/InventoryOptions.h"
#include "mc/world/inventory/transaction/InventoryTransactionManager.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemGroup.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
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
class Dimension;
class EnderChestContainer;
class EntityContext;
class GameMode;
class GetCollisionShapeInterface;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
class IMinecraftEventing;
class InventoryTransaction;
class Item;
class ItemDescriptor;
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
class PersonaPiece;
class PlayerEventCoordinator;
class PlayerInventory;
class PlayerListener;
class PlayerRespawnRandomizer;
class ResolvedTextObject;
class SerializedSkin;
class ShieldItem;
class SubChunkPos;
class TextObjectRoot;
class Vec2;
struct AABBShapeComponent;
struct ActorRotationComponent;
struct BiomeIdType;
struct INpcDialogueData;
struct MutableAttributeWithContext;
struct PlayerAuthenticationInfo;
struct PlayerDestroyProgressCacheComponent;
struct PlayerMovementSettings;
struct StateVectorComponent;
struct Tick;
struct VariantParameterList;
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class IEditorPlayer; }
namespace mce { class Color; }
namespace mce { class UUID; }
struct FrameUpdateContextBase;
// clang-format on

class ConnectionRequest;
class Inventory;

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

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool
        setSpawnPoint(::BlockPos const& playerPosition, ::DimensionType dimension, ::BlockPos const& spawnBlock);
        // NOLINTEND
    };

    using PlayerFlagIDType = char;

    using PlayerListenerList = ::std::vector<::PlayerListener*>;

public:
    LLNDAPI UserEntityIdentifierComponent const& getUserEntityIdentifier() const;

    LLNDAPI UserEntityIdentifierComponent& getUserEntityIdentifier();

    LLNDAPI optional_ref<ConnectionRequest const> getConnectionRequest() const;

    LLNDAPI NetworkIdentifier const& getNetworkIdentifier() const;

    LLNDAPI optional_ref<Certificate const> getCertificate() const;

    LLNDAPI SubClientId const& getClientSubId() const;

    LLNDAPI int getSelectedItemSlot() const;

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
     *
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
     * @return Returns true if the player
     * is an administrator of the server; otherwise returns false
     * @warning Custom permissions are not considered
     * administrators
     */
    LLNDAPI bool isOperator() const;

    /**
     * @brief Give player item and refresh.
     * @return Whether it is a complete success
     *         (e.g.
     * returning false if the quantity of items given to the player does not match the expectation).
     * @warning The
     * return value does not take into account whether the refresh was successful.
     *          You can use
     * Player::add, but it will not refresh the item, which may lead to potential issues.
     */
    LLAPI bool addAndRefresh(class ItemStack& item);

    LLNDAPI optional_ref<EnderChestContainer> getEnderChestContainer() const;

    LLNDAPI Inventory& getInventory() const;

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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SerializedSkin>>            mSkin;
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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, int>>     mItemCooldowns;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::HashedString>> mVanillaItemCooldowns;
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

    virtual void changeDimensionWithCredits(::DimensionType);

    virtual void tickWorld(::Tick const&);

    virtual void frameUpdate(::FrameUpdateContextBase&) = 0;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    virtual void normalTick() /*override*/;

    virtual void moveView();

    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    virtual void aiStep() /*override*/;

    virtual bool isFireImmune() const /*override*/;

    virtual void checkMovementStats(::Vec3 const&);

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

    virtual void setSpeed(float speed) /*override*/;

    virtual int getItemUseDuration() const /*override*/;

    virtual float getItemUseStartupProgress() const /*override*/;

    virtual float getItemUseIntervalProgress() const /*override*/;

    virtual bool isBlocking() const /*override*/;

    virtual bool isDamageBlocked(::ActorDamageSource const& source) const /*override*/;

    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllHandEquipment() const /*override*/;

    virtual ::std::vector<::ItemStack const*> getAllEquipment() const /*override*/;

    virtual bool add(::ItemStack& item) /*override*/;

    virtual ::CommandPermissionLevel getCommandPermissionLevel() const /*override*/;

    virtual bool attack(::Actor&, ::SharedTypes::Legacy::ActorDamageCause const&) /*override*/;

    virtual ::ItemStack const& getCarriedItem() const /*override*/;

    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    virtual void damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget) /*override*/;

    virtual void openPortfolio();

    virtual void openBook(int, bool, int, ::BlockActor*);

    virtual void openTrading(::ActorUniqueID const&, bool);

    virtual void openChalkboard(::ChalkboardBlockActor&, bool);

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

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos);

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    virtual bool canStartSleepInBed();

    virtual void sendInventory(bool) /*override*/;

    virtual void openSign(::BlockPos const&, bool);

    virtual void playEmote(::std::string const&, bool const);

    virtual bool isSilentObserver() const /*override*/;

    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem) /*override*/;

    virtual bool isLoading() const;

    virtual bool isPlayerInitialized() const;

    virtual void stopLoading();

    virtual float getSpeed() const /*override*/;

    virtual void setPlayerGameType(::GameType gameType);

    virtual void initHUDContainerManager();

    virtual void _emitCriticalHitParticles(::Actor& actor);

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

    virtual void setContainerData(::IContainerManager&, int, int) = 0;

    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) = 0;

    virtual void refreshContainer(::IContainerManager&) = 0;

    virtual void deleteContainerManager();

    virtual ::ItemStack const& getEquippedTotem() const /*override*/;

    virtual bool consumeTotem() /*override*/;

    virtual bool isActorRelevant(::Actor const&);

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

    virtual void onSuspension();

    virtual void onLinkedSlotsChanged();

    virtual bool canBePulledIntoVehicle() const /*override*/;

    virtual void feed(int itemId) /*override*/;

    virtual void sendInventoryTransaction(::InventoryTransaction const&) const = 0;

    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const = 0;

    virtual void sendNetworkPacket(::Packet& packet) const;

    virtual bool canExistWhenDisallowMob() const /*override*/;

    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    virtual bool isSimulated() const;

    virtual ::std::string getXuid() const;

    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    virtual bool canFreeze() const /*override*/;

    virtual bool canInteractWithOtherEntitiesInGame() const /*override*/;

    virtual bool canObstructSpawningAndBlockPlacement() const /*override*/;

    virtual ::std::optional<::BlockPos> getLastDeathPos() const /*override*/;

    virtual ::std::optional<::DimensionType> getLastDeathDimension() const /*override*/;

    virtual bool hasDiedBefore() const /*override*/;

    virtual void doEnterWaterSplashEffect() /*override*/;

    virtual void doExitWaterSplashEffect() /*override*/;

    virtual void requestMissingSubChunk(::SubChunkPos const&);

    virtual uchar getMaxChunkBuildRadius() const;

    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);

    virtual void setRemotePlayerTicked(bool);

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

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
    MCAPI Player(
        ::Level&                          level,
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

    MCAPI void _saveInventoryOptions(::CompoundTag& tag) const;

    MCAPI void _sendShieldUpdatePacket(
        ::ShieldItem const& shieldItem,
        ::ItemStack const&  before,
        ::ItemStack const&  after,
        ::ContainerID       container,
        int                 slot
    );

    MCAPI void _setPlayerGameType(::GameType gameType);

    MCAPI bool _shouldCrit(::Actor const& target) const;

    MCAPI void _updateInteraction();

    MCAPI bool _validateSpawnPositionAvailability(
        ::Vec3 const&       pos,
        ::BlockSource*      blockSourceChunkCheck,
        ::Vec3 const* const AABBoffset
    ) const;

    MCAPI bool canBeSeenOnMap() const;

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

    MCAPI void dropCursorSelectedItemOnDeath();

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

    MCAPI int getItemCooldownLeft(::HashedString const& category) const;

    MCAPI ::std::string getItemInteractText(::Item const& item) const;

    MCAPI float getLevelProgress() const;

    MCAPI float getLuck();

    MCAPI_C void getNewEnchantmentSeed();

    MCAPI ::AABB getPickupArea() const;

    MCAPI ::GameType getPlayerGameType() const;

    MCAPI int getPlayerLevel() const;

    MCFOLD ::ItemStack const& getSelectedItem() const;

    MCAPI float getSleepRotation() const;

    MCAPI int getXpNeededForNextLevel() const;

    MCAPI_C void handleMovePlayerPacket(
        ::PlayerPositionModeComponent::PositionMode mode,
        ::Vec3 const&                               pos,
        ::Vec2 const&                               rot,
        float                                       yHeadRot,
        int                                         cause,
        int                                         sourceEntityType
    );

    MCFOLD bool hasOwnedChunkSource() const;

    MCAPI bool hasResource(::ItemDescriptor const& resource);

    MCAPI bool hasRespawnPosition() const;

    MCAPI bool interact(::Actor& actor, ::Vec3 const& location);

    MCAPI void inventoryChanged(
        ::Container&,
        int                slot,
        ::ItemStack const& oldItem,
        ::ItemStack const& newItem,
        bool               forceBalanced
    );

    MCAPI bool is2DPositionRelevant(::DimensionType dimension, ::BlockPos const& position);

    MCAPI_C bool isEmoting() const;

    MCAPI bool isFlying() const;

    MCAPI bool isForcedRespawn() const;

    MCAPI bool isHiddenFrom(::Mob& target) const;

    MCAPI bool isHungry() const;

    MCAPI bool isInRaid() const;

    MCAPI bool isItemOnCooldown(::HashedString const& category) const;

    MCAPI_C bool isScoping() const;

    MCAPI void loadLastDeathLocation(::CompoundTag const& tag);

    MCAPI void playFallOrLandSound(int expectedDamage, ::Block const& onBlock, ::Block const& blockAbove);

    MCAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        int                                    data,
        bool                                   isGlobal
    );

    MCAPI void recheckSpawnPosition();

    MCAPI_C void registerTrackedBoss(::ActorUniqueID mob);

    MCAPI void releaseUsingItem();

    MCAPI void resetPlayerLevel();

    MCAPI void saveLastDeathLocation(::CompoundTag& tag) const;

    MCAPI void sendEventPacket(::LegacyTelemetryEventPacket& packet) const;

    MCAPI void setAgent(::Agent* agent);

    MCAPI void setBedRespawnPosition(::BlockPos const& bedPosition);

    MCAPI_C void setChunkRadius(uint chunkRadius);

    MCAPI void setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> manager);

    MCAPI_C void setCursorSelectedItemGroup(::ItemGroup const& itemGroup);

    MCAPI void setHasDied(bool hasDied);

    MCAPI void setLastDeathDimension(::DimensionType dimension);

    MCAPI void setLastDeathPos(::BlockPos pos);

    MCAPI_C void setLastHurtBy(::ActorType lastHurtBy);

    MCAPI void setName(::std::string const& newName);

    MCAPI void setPlayerUIItem(::PlayerUISlot slot, ::ItemStack const& item, bool forceBalance);

    MCAPI void setRespawnPosition(::BlockPos const& inRespawnPosition, ::DimensionType dimension);

    MCAPI void setRespawnPositionCandidate();

    MCAPI void setSelectedItem(::ItemStack const& item);

    MCAPI ::ItemStack const& setSelectedSlot(int slot);

    MCAPI bool setSpawnBlockRespawnPosition(::BlockPos const& spawnBlockPosition, ::DimensionType dimension);

    MCAPI void startItemCooldown(::Item const& item, bool updateClient);

    MCAPI void startItemCooldown(::HashedString const& type, int tickDuration, bool updateClient);

    MCAPI void
    startItemUseOn(uchar face, ::BlockPos const& blockPos, ::BlockPos const& buildBlockPos, ::ItemStack const& item);

    MCAPI void startUsingItem(::ItemStack const& instance, int duration);

    MCAPI void stopGliding();

    MCAPI void stopItemUseOn(::BlockPos const& blockPos, ::ItemStack const& item);

    MCAPI void stopUsingItem();

    MCAPI bool take(::Actor& actor, int, int favoredSlot);

    MCAPI void tickArmor();

    MCAPI bool tryStartGliding();

    MCAPI void unRegisterTrackedBoss(::ActorUniqueID mob);

    MCAPI_C bool updateEmoteMessageData(::PersonaPiece const& emotePiece);

    MCAPI void updateInventoryTransactions();

    MCAPI void updateSkin(::SerializedSkin const& skin, int clientSubID);

    MCAPI void updateTrackedBosses();

    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _causeFoodExhaustion(::MutableAttributeWithContext& attribute, float exhaustionAmount);

    MCAPI_C static ::std::optional<::Player::FixedSpawnPositionData> checkAndFixSpawnPosition(
        ::Vec3 const&                                  spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        ::AABB                                         aabb,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave,
        bool                                           spawningAtForcedSpawn,
        short                                          dimensionHeight
    );

    MCAPI static ::std::optional<::Player::FixedSpawnPositionData_DEPRECATED> checkAndFixSpawnPosition_DEPRECATED(
        ::Vec3 const&                                  spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        ::AABB                                         aabb,
        bool                                           adjustYToSolidGround,
        bool,
        bool  searchUp,
        bool  positionFromSave,
        bool  spawningAtForcedSpawn,
        short dimensionHeight
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

    MCAPI static bool isDangerousVolumeForSpawn(::BlockSource& region, ::AABB const& centeredAABB);

    MCAPI_C static bool isDangerousVolumeForSpawnFromSave(::BlockSource& region, ::AABB const& centeredAABB);

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

    MCAPI_C static float const& DISTANCE_TO_TRAVELLED_EVENT();

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
        ::Level&                          level,
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

    MCAPI void $resetUserPos(::ActorResetRule resetRule);

    MCFOLD bool $isInTrialMode();

    MCAPI void $setSpeed(float speed);

    MCAPI int $getItemUseDuration() const;

    MCAPI float $getItemUseStartupProgress() const;

    MCAPI float $getItemUseIntervalProgress() const;

    MCAPI bool $isBlocking() const;

    MCAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI ::std::vector<::ItemStack const*> $getAllHandEquipment() const;

    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI bool $add(::ItemStack& item);

    MCFOLD ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI void $damageCarriedItemOnAttack(::Actor& target, float damageDealtToTarget);

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

#ifdef LL_PLAT_S
    MCAPI void $setPlayerGameType(::GameType gameType);
#endif

    MCAPI void $initHUDContainerManager();

    MCAPI void $_emitCriticalHitParticles(::Actor& actor);

    MCAPI bool $isImmobile() const;

    MCFOLD void $sendMotionPacketIfNeeded();

    MCAPI ::IMinecraftEventing* $getEventing() const;

    MCFOLD uint $getUserId() const;

    MCAPI void $addExperience(int xp);

    MCAPI void $addLevels(int levels);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::std::unique_ptr<::Packet> $tryCreateAddActorPacket();

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

#ifdef LL_PLAT_S
    MCFOLD void $setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus);
#endif

    MCFOLD void $setRemotePlayerTicked(bool);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI ::HashedString const& $getActorRendererId() const;

    MCFOLD void $_serverInitItemStackIds();

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();

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
