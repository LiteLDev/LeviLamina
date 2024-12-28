#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/platform/BuildPlatform.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"
#include "mc/world/ContainerID.h"
#include "mc/world/ContainerType.h"
#include "mc/world/actor/ActorDamageCause.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/Mob.h"
#include "mc/world/actor/MobSpawnMethod.h"
#include "mc/world/actor/player/AbilitiesIndex.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/PlayerSpawnFallbackType.h"
#include "mc/world/actor/player/PlayerUISlot.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/ItemUseMethod.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
class ActorDamageSource;
class ActorOwnerComponent;
class AddActorBasePacket;
class Agent;
class AnimationComponent;
class Attribute;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BodyControl;
class Certificate;
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
class GetCollisionShapeInterface;
class HashedString;
class HudContainerManagerModel;
class IConstBlockSource;
class IContainerManager;
class IContainerRegistryAccess;
class IContainerRegistryTracker;
class IDynamicContainerSerialization;
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
struct PlayerComponent;
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
        ::ll::UntypedStorage<4, 12> mUnkde7026;
        ::ll::UntypedStorage<1, 1>  mUnk875f06;
        // NOLINTEND

    public:
        // prevent constructor by default
        FixedSpawnPositionData_DEPRECATED& operator=(FixedSpawnPositionData_DEPRECATED const&);
        FixedSpawnPositionData_DEPRECATED(FixedSpawnPositionData_DEPRECATED const&);
        FixedSpawnPositionData_DEPRECATED();
    };

    struct FixedSpawnPositionData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::Vec3>                   mPosition;
        ::ll::TypedStorage<4, 4, ::PlayerSpawnFallbackType> mSpawnFallbackType;
        // NOLINTEND

    public:
        // prevent constructor by default
        FixedSpawnPositionData& operator=(FixedSpawnPositionData const&);
        FixedSpawnPositionData(FixedSpawnPositionData const&);
        FixedSpawnPositionData();
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
        ::ll::UntypedStorage<4, 4>  mUnkf15551;
        ::ll::UntypedStorage<4, 12> mUnkbdb6fc;
        ::ll::UntypedStorage<4, 12> mUnk82496c;
        ::ll::UntypedStorage<1, 1>  mUnkfc42fc;
        ::ll::UntypedStorage<4, 12> mUnke269b5;
        ::ll::UntypedStorage<1, 1>  mUnkdb180f;
        ::ll::UntypedStorage<4, 12> mUnk86fc74;
        ::ll::UntypedStorage<1, 1>  mUnk25f21c;
        ::ll::UntypedStorage<1, 1>  mUnkfcf0b8;
        ::ll::UntypedStorage<1, 1>  mUnk21b90a;
        ::ll::UntypedStorage<1, 1>  mUnk3a5b14;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedSpawnData& operator=(CachedSpawnData const&);
        CachedSpawnData(CachedSpawnData const&);
        CachedSpawnData();
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
        // prevent constructor by default
        PlayerSpawnPoint& operator=(PlayerSpawnPoint const&);
        PlayerSpawnPoint(PlayerSpawnPoint const&);
        PlayerSpawnPoint();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool
        setSpawnPoint(::BlockPos const& playerPosition, ::DimensionType dimension, ::BlockPos const& spawnBlock);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                      mOceanBiomes;
    ::ll::TypedStorage<8, 24, ::std::vector<ushort>>                      mFroglights;
    ::ll::TypedStorage<4, 4, float const>                                 mSneakHeight;
    ::ll::TypedStorage<4, 4, float const>                                 mSneakOffset;
    ::ll::TypedStorage<4, 4, int>                                         mScore;
    ::ll::TypedStorage<4, 4, float>                                       mOBob;
    ::ll::TypedStorage<4, 4, float>                                       mBob;
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
        ::std::unique_ptr<::Bedrock::PubSub::Publisher<
            void(::ContainerManagerModel const*),
            ::Bedrock::PubSub::ThreadModel::SingleThreaded>>>
                                                                             mContainerManagerSubscribers;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerInventory>>           mInventory;
    ::ll::TypedStorage<4, 20, ::InventoryOptions>                            mInventoryOptions;
    ::ll::TypedStorage<4, 4, float>                                          mDistanceSinceTransformEvent;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemInstance>>                 mCreativeItemList;
    ::ll::TypedStorage<8, 96, ::std::array<::std::vector<::ItemGroup>, 4>>   mFilteredCreativeItemList;
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
    ::ll::TypedStorage<8, 480, ::PlayerUIContainer>                          mPlayerUIContainer;
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
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mEnterBedPosition;
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
    // prevent constructor by default
    Player& operator=(Player const&);
    Player(Player const&);
    Player();

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

    // vIndex: 182
    virtual void prepareRegion(::ChunkSource& mainChunkSource);

    // vIndex: 183
    virtual void destroyRegion();

    // vIndex: 184
    virtual void suspendRegion();

    // vIndex: 185
    virtual void _fireDimensionChanged();

    // vIndex: 90
    virtual bool canChangeDimensionsUsingPortal() const /*override*/;

    // vIndex: 186
    virtual void changeDimensionWithCredits(::DimensionType);

    // vIndex: 187
    virtual void tickWorld(::Tick const&);

    // vIndex: 188
    virtual void frameUpdate(::FrameUpdateContextBase&) = 0;

    // vIndex: 189
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 190
    virtual void moveView();

    // vIndex: 191
    virtual void moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    // vIndex: 95
    virtual void onSynchedDataUpdate(int dataId) /*override*/;

    // vIndex: 150
    virtual void aiStep() /*override*/;

    // vIndex: 18
    virtual bool isFireImmune() const /*override*/;

    // vIndex: 192
    virtual void checkMovementStats(::Vec3 const&);

    // vIndex: 193
    virtual ::HashedString getCurrentStructureFeature() const;

    // vIndex: 194
    virtual bool isAutoJumpEnabled() const;

    // vIndex: 17
    virtual ::Vec3 getInterpolatedRidingOffset(float, int const) const /*override*/;

    // vIndex: 26
    virtual void passengerTick() /*override*/;

    // vIndex: 125
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 11
    virtual void remove() /*override*/;

    // vIndex: 195
    virtual void respawn();

    // vIndex: 126
    virtual bool shouldDropDeathLoot() const /*override*/;

    // vIndex: 168
    virtual void dropEquipmentOnDeath(::ActorDamageSource const& source) /*override*/;

    // vIndex: 167
    virtual void dropEquipmentOnDeath() /*override*/;

    // vIndex: 169
    virtual void clearVanishEnchantedItemsOnDeath() /*override*/;

    // vIndex: 119
    virtual bool drop(::ItemStack const& item, bool const randomly) /*override*/;

    // vIndex: 196
    virtual void resetRot();

    // vIndex: 9
    virtual void resetUserPos(bool clearMore) /*override*/;

    // vIndex: 197
    virtual bool isInTrialMode();

    // vIndex: 148
    virtual void setSpeed(float speed) /*override*/;

    // vIndex: 154
    virtual int getItemUseDuration() const /*override*/;

    // vIndex: 155
    virtual float getItemUseStartupProgress() const /*override*/;

    // vIndex: 156
    virtual float getItemUseIntervalProgress() const /*override*/;

    // vIndex: 46
    virtual bool isBlocking() const /*override*/;

    // vIndex: 47
    virtual bool isDamageBlocked(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 165
    virtual ::std::vector<::ItemStack const*> getAllHand() const /*override*/;

    // vIndex: 166
    virtual ::std::vector<::ItemStack const*> getAllEquipment() const /*override*/;

    // vIndex: 118
    virtual bool add(::ItemStack& item) /*override*/;

    // vIndex: 105
    virtual ::CommandPermissionLevel getCommandPermissionLevel() const /*override*/;

    // vIndex: 54
    virtual bool attack(::Actor& actor, ::ActorDamageCause const& cause) /*override*/;

    // vIndex: 80
    virtual ::ItemStack const& getCarriedItem() const /*override*/;

    // vIndex: 79
    virtual void setCarriedItem(::ItemStack const& item) /*override*/;

    // vIndex: 198
    virtual void openPortfolio();

    // vIndex: 199
    virtual void openBook(int, bool, int, ::BlockActor*);

    // vIndex: 200
    virtual void openTrading(::ActorUniqueID const&, bool);

    // vIndex: 201
    virtual void openChalkboard(::ChalkboardBlockActor&, bool);

    // vIndex: 202
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    // vIndex: 203
    virtual void openInventory();

    // vIndex: 204
    virtual void displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    // vIndex: 205
    virtual void
    displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    // vIndex: 206
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    // vIndex: 208
    virtual void displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    // vIndex: 207
    virtual void displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    // vIndex: 209
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    // vIndex: 36
    virtual float getShadowRadius() const /*override*/;

    // vIndex: 43
    virtual bool isSleeping() const /*override*/;

    // vIndex: 44
    virtual void setSleeping(bool val) /*override*/;

    // vIndex: 210
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos);

    // vIndex: 211
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    // vIndex: 212
    virtual bool canStartSleepInBed();

    // vIndex: 170
    virtual void sendInventory(bool) /*override*/;

    // vIndex: 213
    virtual void openSign(::BlockPos const&, bool);

    // vIndex: 214
    virtual void playEmote(::std::string const&, bool const);

    // vIndex: 42
    virtual bool isSilentObserver() const /*override*/;

    // vIndex: 114
    virtual void useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem) /*override*/;

    // vIndex: 215
    virtual bool isLoading() const;

    // vIndex: 216
    virtual bool isPlayerInitialized() const;

    // vIndex: 217
    virtual void stopLoading();

    // vIndex: 147
    virtual float getSpeed() const /*override*/;

    // vIndex: 218
    virtual void setPlayerGameType(::GameType gameType);

    // vIndex: 219
    virtual void initHUDContainerManager();

    // vIndex: 220
    virtual void _crit(::Actor& actor);

    // vIndex: 41
    virtual bool isImmobile() const /*override*/;

    // vIndex: 100
    virtual void sendMotionPacketIfNeeded(::PlayerMovementSettings const& playerMovementSettings) /*override*/;

    // vIndex: 221
    virtual ::IMinecraftEventing* getEventing() const;

    // vIndex: 222
    virtual uint getUserId() const;

    // vIndex: 223
    virtual void addExperience(int xp);

    // vIndex: 224
    virtual void addLevels(int levels);

    // vIndex: 74
    virtual void setArmor(::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 81
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 23
    virtual ::std::unique_ptr<::AddActorBasePacket> tryCreateAddActorPacket() /*override*/;

    // vIndex: 66
    virtual bool isInvulnerableTo(::ActorDamageSource const& source) const /*override*/;

    // vIndex: 225
    virtual void setContainerData(::IContainerManager&, int, int) = 0;

    // vIndex: 226
    virtual void slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) = 0;

    // vIndex: 227
    virtual void refreshContainer(::IContainerManager&) = 0;

    // vIndex: 228
    virtual void deleteContainerManager();

    // vIndex: 82
    virtual ::ItemStack const& getEquippedTotem() const /*override*/;

    // vIndex: 83
    virtual bool consumeTotem() /*override*/;

    // vIndex: 229
    virtual bool isActorRelevant(::Actor const&);

    // vIndex: 116
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

    // vIndex: 102
    virtual void startSwimming() /*override*/;

    // vIndex: 103
    virtual void stopSwimming() /*override*/;

    // vIndex: 230
    virtual bool isTeacher() const = 0;

    // vIndex: 231
    virtual void onSuspension();

    // vIndex: 232
    virtual void onLinkedSlotsChanged();

    // vIndex: 98
    virtual bool canBePulledIntoVehicle() const /*override*/;

    // vIndex: 70
    virtual void feed(int itemId) /*override*/;

    // vIndex: 233
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const = 0;

    // vIndex: 234
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const = 0;

    // vIndex: 235
    virtual void sendNetworkPacket(::Packet& packet) const;

    // vIndex: 177
    virtual bool canExistWhenDisallowMob() const /*override*/;

    // vIndex: 35
    virtual ::mce::Color getNameTagTextColor() const /*override*/;

    // vIndex: 96
    virtual bool canAddPassenger(::Actor& passenger) const /*override*/;

    // vIndex: 236
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() = 0;

    // vIndex: 237
    virtual bool isSimulated() const;

    // vIndex: 238
    virtual ::std::string getXuid() const;

    // vIndex: 239
    virtual ::PlayerMovementSettings const& getMovementSettings() const;

    // vIndex: 87
    virtual bool canFreeze() const /*override*/;

    // vIndex: 38
    virtual bool canInteractWithOtherEntitiesInGame() const /*override*/;

    // vIndex: 110
    virtual bool canObstructSpawningAndBlockPlacement() const /*override*/;

    // vIndex: 130
    virtual ::std::optional<::BlockPos> getLastDeathPos() const /*override*/;

    // vIndex: 131
    virtual ::std::optional<::DimensionType> getLastDeathDimension() const /*override*/;

    // vIndex: 132
    virtual bool hasDiedBefore() const /*override*/;

    // vIndex: 133
    virtual void doEnterWaterSplashEffect() /*override*/;

    // vIndex: 134
    virtual void doExitWaterSplashEffect() /*override*/;

    // vIndex: 240
    virtual void requestMissingSubChunk(::SubChunkPos const&);

    // vIndex: 241
    virtual uchar getMaxChunkBuildRadius() const;

    // vIndex: 94
    virtual float causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source) /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    // vIndex: 242
    virtual void onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    // vIndex: 136
    virtual bool _shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const
        /*override*/;

    // vIndex: 137
    virtual bool _shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, ::ItemStack const& item) const /*override*/;

    // vIndex: 243
    virtual ::std::shared_ptr<::ChunkViewSource> _createChunkSource(::ChunkSource& mainChunkSource);

    // vIndex: 244
    virtual void setAbilities(::LayeredAbilities const& newAbilities);

    // vIndex: 111
    virtual ::AnimationComponent& getAnimationComponent() /*override*/;

    // vIndex: 72
    virtual ::HashedString const& getActorRendererId() const /*override*/;

    // vIndex: 245
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const = 0;

    // vIndex: 246
    virtual void destroyEditorPlayer() = 0;

    // vIndex: 6
    virtual void _serverInitItemStackIds() /*override*/;

    // vIndex: 178
    virtual ::std::unique_ptr<::BodyControl> initBodyControl() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Player(
        ::Level&                         level,
        ::PacketSender&                  packetSender,
        ::GameType                       playerGameType,
        bool                             isHostingPlayer,
        ::NetworkIdentifier const&       owner,
        ::SubClientId                    subid,
        ::mce::UUID                      uuid,
        ::std::string const&             playFabId,
        ::std::string const&             deviceId,
        ::std::unique_ptr<::Certificate> certificate,
        ::EntityContext&                 entityContext,
        ::std::string const&             platformId,
        ::std::string const&             platformOnlineId
    );

    MCAPI void _addLevels(int levels);

    MCAPI bool _attack(::Actor& actor, ::ActorDamageCause const& cause, bool doPredictiveSound);

    MCAPI bool _blockUsingShield(::ActorDamageSource const& source, float damage);

    MCAPI bool _canChangeGameType(::GameType newGameType) const;

    MCAPI bool _checkAndFixSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        bool                                           adjustYToSolidGround,
        bool                                           searchUp,
        bool                                           positionFromSave
    );

    MCAPI void _checkMovementShouldStopEmoting();

    MCAPI void _chooseSpawnArea();

    MCAPI bool _chooseSpawnPositionWithinArea();

    MCAPI void _ensureSafeSpawnPosition(::Vec3& pos);

    MCAPI bool _findFallbackSpawnPosition(
        ::Vec3&                                        spawnPosition,
        ::std::vector<::gsl::not_null<::BlockSource*>> regions,
        uint                                           maxDistance,
        bool                                           checkStoredFallback
    );

    MCAPI void _fireWillChangeDimension();

    MCAPI void _handleCarriedItemInteractText();

    MCAPI bool _isChunkSourceLoaded(::Vec3 const& spawnPosition, ::BlockSource const& region) const;

    MCAPI void _preSpawnBuildSpawnDataCache();

    MCAPI void _registerElytraLoopSound();

    MCAPI void _registerPlayerAttributes();

    MCAPI void _sendShieldUpdatePacket(
        ::ShieldItem const& shieldItem,
        ::ItemStack const&  before,
        ::ItemStack const&  after,
        ::ContainerID       container,
        int                 slot
    );

    MCAPI void _setPlayerGameType(::GameType gameType);

    MCAPI void _setPreDimensionTransferSpawnPosition(::Vec3 pos);

    MCAPI void _updateInteraction();

    MCAPI bool _validateSpawnPositionAvailability(
        ::Vec3 const&       pos,
        ::BlockSource*      blockSourceChunkCheck,
        ::Vec3 const* const AABBoffset
    ) const;

    MCAPI void broadcastPlayerSpawnedMobEvent(::ActorType spawnedType, ::MobSpawnMethod spawnMethod);

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

    MCAPI void clearRespawnPosition();

    MCAPI void completeUsingItem();

    MCAPI void eat(::ItemStack const& instance);

    MCAPI void eat(int hungerValue, float saturationModifier);

    MCAPI bool equippedArmorItemCanBeMoved(::ItemStack const& item) const;

    MCAPI void fireDimensionChangedEvent(::DimensionType fromDimension, ::DimensionType toDimension);

    MCAPI bool forceAllowEating() const;

    MCAPI ::LayeredAbilities const& getAbilities() const;

    MCAPI ::LayeredAbilities& getAbilities();

    MCAPI ::Agent* getAgent() const;

    MCAPI ::ActorUniqueID getAgentID() const;

    MCAPI ::Agent* getAgentIfAllowed(bool callerCanAccessOtherAgents, ::ActorUniqueID callerAgentID) const;

    MCAPI ::BlockPos const& getBedPosition() const;

    MCAPI int64 getBlockedUsingDamagedShieldTimeStamp() const;

    MCAPI int64 getBlockedUsingShieldTimeStamp() const;

    MCAPI int64 getBlockingStartTimeStamp() const;

    MCAPI ::Vec3 getCapePos(float a);

    MCAPI uint getChunkRadius() const;

    MCAPI ::std::weak_ptr<::IContainerManager> getContainerManager() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryAccess>> getContainerRegistryAccess() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IContainerRegistryTracker>> getContainerRegistryTracker() const;

    MCAPI ::ItemStack const& getCurrentActiveShield() const;

    MCAPI float getDestroyProgress(::Block const& block);

    MCAPI int getDirection() const;

    MCAPI ::gsl::not_null<::StackRefResult<::IDynamicContainerSerialization>> getDynamicContainerSerialization() const;

    MCAPI int getEnchantmentSeed() const;

    MCAPI ::DimensionType getExpectedSpawnDimensionId() const;

    MCAPI ::BlockPos const& getExpectedSpawnPosition() const;

    MCAPI ::GameMode& getGameMode() const;

    MCAPI ::std::string getInteractText() const;

    MCAPI ::Container& getInventory();

    MCAPI int getItemCooldownLeft(::HashedString const& type) const;

    MCAPI int getItemCooldownLeft(uint64 typeHash) const;

    MCAPI ::ItemStack const& getItemInUse() const;

    MCAPI ::std::string getItemInteractText(::Item const& item) const;

    MCAPI ::ItemStackNetManagerBase const* getItemStackNetManager() const;

    MCAPI ::ItemStackNetManagerBase* getItemStackNetManager();

    MCAPI float getLuck();

    MCAPI int getMapIndex();

    MCAPI int getMaxItemCooldownLeft() const;

    MCAPI ::std::string const& getName() const;

    MCAPI void getNewEnchantmentSeed();

    MCAPI ::BuildPlatform getPlatform() const;

    MCAPI ::std::string const& getPlatformOnlineId() const;

    MCAPI ::GameType getPlayerGameType() const;

    MCAPI int getPlayerIndex() const;

    MCAPI int getPlayerLevel() const;

    MCAPI ::PlayerPermissionLevel getPlayerPermissionLevel() const;

    MCAPI ::std::string const& getPlayerSessionId() const;

    MCAPI ::ItemStack const& getPlayerUIItem(::PlayerUISlot slot);

    MCAPI ::BlockPos const& getRespawnAnchorPosition() const;

    MCAPI ::ItemStack const& getSelectedItem() const;

    MCAPI int getSelectedItemSlot() const;

    MCAPI ::std::string const& getServerId() const;

    MCAPI ::SerializedSkin const& getSkin() const;

    MCAPI ::SerializedSkin& getSkin();

    MCAPI float getSleepRotation() const;

    MCAPI ::DimensionType getSpawnDimension() const;

    MCAPI ::BlockPos const& getSpawnPosition() const;

    MCAPI ::PlayerInventory const& getSupplies() const;

    MCAPI ::PlayerInventory& getSupplies();

    MCAPI ::std::vector<::ActorUniqueID> const& getTrackedBosses();

    MCAPI bool getUsedPotion();

    MCAPI int getXpEarnedAtCurrentLevel() const;

    MCAPI uint getXpNeededForLevelRange(int startlevel, int endlevel) const;

    MCAPI int getXpNeededForNextLevel() const;

    MCAPI bool hasBedPosition() const;

    MCAPI bool hasOpenContainer() const;

    MCAPI bool hasOpenContainerOfContainerType(::ContainerType containerType) const;

    MCAPI bool hasOwnedChunkSource() const;

    MCAPI bool hasResource(::ItemDescriptor const& resource);

    MCAPI bool hasRespawnAnchorPosition() const;

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

    MCAPI bool isEmoting() const;

    MCAPI bool isFlying() const;

    MCAPI bool isForcedRespawn() const;

    MCAPI bool isHiddenFrom(::Mob& target) const;

    MCAPI bool isHostingPlayer() const;

    MCAPI bool isHungry() const;

    MCAPI bool isHurt();

    MCAPI bool isInRaid() const;

    MCAPI bool isItemOnCooldown(::HashedString const& type) const;

    MCAPI bool isRespawningFromTheEnd() const;

    MCAPI bool isSleepingLongEnough() const;

    MCAPI bool isSpawned() const;

    MCAPI bool isUsingItem() const;

    MCAPI bool isValidSpawn() const;

    MCAPI void passengerCheckMovementStats();

    MCAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::Block const&                         block,
        ::ActorDefinitionIdentifier const&     entityType,
        bool                                   isGlobal
    );

    MCAPI void playPredictiveSynchronizedSound(
        ::SharedTypes::Legacy::LevelSoundEvent type,
        ::Vec3 const&                          pos,
        ::ActorDefinitionIdentifier const&     entityType,
        int                                    data,
        bool                                   isGlobal
    );

    MCAPI void recheckSpawnPosition();

    MCAPI void registerTrackedBoss(::ActorUniqueID mob);

    MCAPI void releaseUsingItem();

    MCAPI void resendAllChunks();

    MCAPI void resetPlayerLevel();

    MCAPI void resetPublisherInitialSpawn();

    MCAPI void resetToDefaultGameMode();

    MCAPI void saveLastDeathLocation(::CompoundTag& tag) const;

    MCAPI void sendEventPacket(::LegacyTelemetryEventPacket& packet) const;

    MCAPI void sendPlayerTeleported();

    MCAPI void sendSpawnExperienceOrbPacketToServer(::Vec3 const& pos, int count);

    MCAPI void setAgent(::Agent* agent);

    MCAPI void setBedRespawnPosition(::BlockPos const& bedPosition);

    MCAPI void setBlockRespawnUntilClientMessage(bool val);

    MCAPI void setChunkRadius(uint chunkRadius);

    MCAPI void setContainerManagerModel(::std::shared_ptr<::ContainerManagerModel> manager);

    MCAPI void setCursorSelectedItem(::ItemStack const& item);

    MCAPI void setCursorSelectedItemGroup(::ItemGroup const& itemGroup);

    MCAPI void setEmotingStatus(uint emoteTicks);

    MCAPI void setEnchantmentSeed(int newSeed);

    MCAPI void setHasDied(bool hasDied);

    MCAPI void setHasSeenCredits(bool value);

    MCAPI void setInventoryOptions(::InventoryOptions const& options);

    MCAPI void setLastDeathDimension(::DimensionType dimension);

    MCAPI void setLastDeathPos(::BlockPos pos);

    MCAPI void setMapIndex(int mapIndex);

    MCAPI void setName(::std::string const& newName);

    MCAPI void setPermissions(::CommandPermissionLevel permissions);

    MCAPI void setPlatformOnlineId(::std::string const& platformOnlineId);

    MCAPI void setPlayerIndex(int index);

    MCAPI void setPlayerUIItem(::PlayerUISlot slot, ::ItemStack const& item, bool forceBalance);

    MCAPI void setRespawnPosition(::BlockPos const& inRespawnPosition, ::DimensionType dimension);

    MCAPI void setRespawnPositionCandidate();

    MCAPI void setRespawnReady(::Vec3 const& respawnPosition);

    MCAPI void setSelectedItem(::ItemStack const& item);

    MCAPI ::ItemStack const& setSelectedSlot(int slot);

    MCAPI bool setSpawnBlockRespawnPosition(::BlockPos const& spawnBlockPosition, ::DimensionType dimension);

    MCAPI void setUsedPotion(bool used);

    MCAPI bool shouldShowCredits() const;

    MCAPI void startCooldown(::Item const* item, bool updateClient);

    MCAPI void startCooldown(::HashedString const& type, int tickDuration, bool updateClient);

    MCAPI void startDestroying();

    MCAPI void
    startItemUseOn(uchar face, ::BlockPos const& blockPos, ::BlockPos const& buildBlockPos, ::ItemStack const& item);

    MCAPI void startUsingItem(::ItemStack const& instance, int duration);

    MCAPI void stopDestroying();

    MCAPI void stopGliding();

    MCAPI void stopItemUseOn(::BlockPos const& blockPos, ::ItemStack const& item);

    MCAPI void stopUsingItem();

    MCAPI bool take(::Actor& actor, int, int favoredSlot);

    MCAPI void tickArmor();

    MCAPI void tryDisableShield();

    MCAPI bool tryStartGliding();

    MCAPI void unRegisterTrackedBoss(::ActorUniqueID mob);

    MCAPI void updateBlockSourceTick();

    MCAPI void updateInventoryTransactions();

    MCAPI void updateSkin(::SerializedSkin const& skin, int clientSubID);

    MCAPI void updateTouch();

    MCAPI void updateTrackedBosses();

    MCAPI void useSelectedItem(::ItemUseMethod itemUseMethod, bool consumeItem);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
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

    MCAPI static ::std::optional<::SharedTypes::Legacy::LevelSoundEvent>
    getCustomHurtSound(::Mob& mob, ::ActorDamageCause cause);

    MCAPI static bool isDangerousVolumeForSpawn(::BlockSource& region, ::AABB const& centeredAABB);

    MCAPI static ::Player const* tryGetFromComponent(::PlayerComponent const&, ::ActorOwnerComponent const&, bool);

    MCAPI static ::Player*
    tryGetFromComponent(::PlayerComponent const&, ::ActorOwnerComponent& actor, bool includeRemoved);

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

    MCAPI static float const& DEFAULT_WALK_SPEED();

    MCAPI static float const& DISTANCE_TO_TRANSFORM_EVENT();

    MCAPI static float const& DISTANCE_TO_TRAVELLED_EVENT();

    MCAPI static ::Attribute const& EXHAUSTION();

    MCAPI static ::Attribute const& EXPERIENCE();

    MCAPI static int const& GLIDE_STOP_DELAY();

    MCAPI static ::Attribute const& HUNGER();

    MCAPI static ::Attribute const& LEVEL();

    MCAPI static float const& PLAYER_ALIVE_HEIGHT();

    MCAPI static float const& PLAYER_ALIVE_WIDTH();

    MCAPI static float const& PLAYER_DEAD_HEIGHT();

    MCAPI static float const& PLAYER_DEAD_WIDTH();

    MCAPI static int const& PLAYER_DIMENSION_CHANGE_OWNED_MOB_SEARCH_RADIUS();

    MCAPI static float const& PLAYER_SLEEPING_HEIGHT();

    MCAPI static float const& PLAYER_SLEEPING_WIDTH();

    MCAPI static ::Attribute const& SATURATION();

    MCAPI static uint const& SPAWN_CHUNK_LARGE_JUMP();

    MCAPI static uint const& SPAWN_CHUNK_RADIUS();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Level&                         level,
        ::PacketSender&                  packetSender,
        ::GameType                       playerGameType,
        bool                             isHostingPlayer,
        ::NetworkIdentifier const&       owner,
        ::SubClientId                    subid,
        ::mce::UUID                      uuid,
        ::std::string const&             playFabId,
        ::std::string const&             deviceId,
        ::std::unique_ptr<::Certificate> certificate,
        ::EntityContext&                 entityContext,
        ::std::string const&             platformId,
        ::std::string const&             platformOnlineId
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

    MCAPI void $changeDimensionWithCredits(::DimensionType);

    MCAPI void $tickWorld(::Tick const&);

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI void $normalTick();

    MCAPI void $moveView();

    MCAPI void $moveSpawnView(::Vec3 const& spawnPosition, ::DimensionType dimensionType);

    MCAPI void $onSynchedDataUpdate(int dataId);

    MCAPI void $aiStep();

    MCAPI bool $isFireImmune() const;

    MCAPI void $checkMovementStats(::Vec3 const&);

    MCAPI ::HashedString $getCurrentStructureFeature() const;

    MCAPI bool $isAutoJumpEnabled() const;

    MCAPI ::Vec3 $getInterpolatedRidingOffset(float, int const) const;

    MCAPI void $passengerTick();

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $remove();

    MCAPI void $respawn();

    MCAPI bool $shouldDropDeathLoot() const;

    MCAPI void $dropEquipmentOnDeath(::ActorDamageSource const& source);

    MCAPI void $dropEquipmentOnDeath();

    MCAPI void $clearVanishEnchantedItemsOnDeath();

    MCAPI bool $drop(::ItemStack const& item, bool const randomly);

    MCAPI void $resetRot();

    MCAPI void $resetUserPos(bool clearMore);

    MCAPI bool $isInTrialMode();

    MCAPI void $setSpeed(float speed);

    MCAPI int $getItemUseDuration() const;

    MCAPI float $getItemUseStartupProgress() const;

    MCAPI float $getItemUseIntervalProgress() const;

    MCAPI bool $isBlocking() const;

    MCAPI bool $isDamageBlocked(::ActorDamageSource const& source) const;

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI ::std::vector<::ItemStack const*> $getAllHand() const;

    MCAPI ::std::vector<::ItemStack const*> $getAllEquipment() const;

    MCAPI bool $add(::ItemStack& item);

    MCAPI ::CommandPermissionLevel $getCommandPermissionLevel() const;

    MCAPI bool $attack(::Actor& actor, ::ActorDamageCause const& cause);

    MCAPI ::ItemStack const& $getCarriedItem() const;

    MCAPI void $setCarriedItem(::ItemStack const& item);

    MCAPI void $openPortfolio();

    MCAPI void $openBook(int, bool, int, ::BlockActor*);

    MCAPI void $openTrading(::ActorUniqueID const&, bool);

    MCAPI void $openChalkboard(::ChalkboardBlockActor&, bool);

    MCAPI void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCAPI void $openInventory();

    MCAPI void $displayChatMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    );

    MCAPI void
    $displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    MCAPI void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCAPI void $displayTextObjectWhisperMessage(
        ::ResolvedTextObject const& resolvedTextObject,
        ::std::string const&        xuid,
        ::std::string const&        platformId
    );

    MCAPI void $displayTextObjectWhisperMessage(
        ::std::string const& message,
        ::std::string const& xuid,
        ::std::string const& platformId
    );

    MCAPI void $displayWhisperMessage(
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

    MCAPI void $sendInventory(bool);

    MCAPI void $openSign(::BlockPos const&, bool);

    MCAPI void $playEmote(::std::string const&, bool const);

    MCAPI bool $isSilentObserver() const;

    MCAPI void $useItem(::ItemStackBase& item, ::ItemUseMethod itemUseMethod, bool consumeItem);

    MCAPI bool $isLoading() const;

    MCAPI bool $isPlayerInitialized() const;

    MCAPI void $stopLoading();

    MCAPI float $getSpeed() const;

    MCAPI void $setPlayerGameType(::GameType gameType);

    MCAPI void $initHUDContainerManager();

    MCAPI void $_crit(::Actor& actor);

    MCAPI bool $isImmobile() const;

    MCAPI void $sendMotionPacketIfNeeded(::PlayerMovementSettings const& playerMovementSettings);

    MCAPI ::IMinecraftEventing* $getEventing() const;

    MCAPI uint $getUserId() const;

    MCAPI void $addExperience(int xp);

    MCAPI void $addLevels(int levels);

    MCAPI void $setArmor(::ArmorSlot slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI ::std::unique_ptr<::AddActorBasePacket> $tryCreateAddActorPacket();

    MCAPI bool $isInvulnerableTo(::ActorDamageSource const& source) const;

    MCAPI void $deleteContainerManager();

    MCAPI ::ItemStack const& $getEquippedTotem() const;

    MCAPI bool $consumeTotem();

    MCAPI bool $isActorRelevant(::Actor const&);

    MCAPI float $getMapDecorationRotation() const;

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $startSwimming();

    MCAPI void $stopSwimming();

    MCAPI void $onSuspension();

    MCAPI void $onLinkedSlotsChanged();

    MCAPI bool $canBePulledIntoVehicle() const;

    MCAPI void $feed(int itemId);

    MCAPI void $sendNetworkPacket(::Packet& packet) const;

    MCAPI bool $canExistWhenDisallowMob() const;

    MCAPI ::mce::Color $getNameTagTextColor() const;

    MCAPI bool $canAddPassenger(::Actor& passenger) const;

    MCAPI bool $isSimulated() const;

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

    MCAPI void $requestMissingSubChunk(::SubChunkPos const&);

    MCAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI float $causeFallDamageToActor(float distance, float multiplier, ::ActorDamageSource source);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $onMovePlayerPacketNormal(::Vec3 const& pos, ::Vec2 const& rot, float yHeadRot);

    MCAPI bool $_shouldProvideFeedbackOnHandContainerItemSet(::HandSlot handSlot, ::ItemStack const& item) const;

    MCAPI bool $_shouldProvideFeedbackOnArmorSet(::ArmorSlot slot, ::ItemStack const& item) const;

    MCAPI ::std::shared_ptr<::ChunkViewSource> $_createChunkSource(::ChunkSource& mainChunkSource);

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI ::AnimationComponent& $getAnimationComponent();

    MCAPI ::HashedString const& $getActorRendererId() const;

    MCAPI void $_serverInitItemStackIds();

    MCAPI ::std::unique_ptr<::BodyControl> $initBodyControl();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
