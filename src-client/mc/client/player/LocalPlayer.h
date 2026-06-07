#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/client/world/actor/player/ClientLocatorBar.h"
#include "mc/common/Brightness.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/application/LowMemorySeverity.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/CrashDumpLogStringID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/EquipmentSlot.h"
#include "mc/deps/shared_types/legacy/Side.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/network/packet/PlayerRespawnState.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/ActorSwingSource.h"
#include "mc/world/actor/bhave/BehaviorStatus.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/InventoryMenu.h"
#include "mc/world/inventory/network/TypedClientNetId.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/GameType.h"
#include "mc/world/level/chunk/NetworkChunkSubscriber.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class ActorHurtResult;
class BlockActor;
class BlockSource;
class ChalkboardBlockActor;
class ChangeDimensionPacket;
class ChunkPos;
class ChunkSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class DataLoadHelper;
class Dimension;
class EntityContext;
class FrameUpdateContextBase;
class HitResult;
class IClientInstance;
class IContainerManager;
class IMinecraftEventing;
class ISparseContainerSetListener;
class InventoryTransaction;
class ItemStackNetManagerClient;
class LayeredAbilities;
class Level;
class MobEffectInstance;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerAutomationObserver;
class PlayerEventCoordinator;
class SubChunkPos;
class SubChunkRequestSubscriber;
class TextObjectRoot;
class Vec2;
struct ActorUniqueID;
struct ArmorSlotAndDamagePair;
struct FurnaceOptions;
struct INpcDialogueData;
struct InventoryOptions;
struct ItemStackLegacyRequestIdTag;
struct PlayerAuthenticationInfo;
struct Tick;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
// clang-format on

class LocalPlayer : public ::Player {
public:
    // LocalPlayer inner types declare
    // clang-format off
    class RegionListener;
    class EmoteExpediateData;
    class FellFromWorldHeightAchievementTracker;
    class UndergroundTelemetryHeuristic;
    struct ContainerCloseInfo;
    // clang-format on

    // LocalPlayer inner types define
    class RegionListener {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~RegionListener() = default;

        virtual void onRegionDestroyed() = 0;
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND
    };

    class EmoteExpediateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64> mEmoteButtonDownStartTime;
        ::ll::TypedStorage<1, 1, bool>  mIsExpediateSelectionActive;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void emoteButtonEntered();

        MCFOLD int64 getEmoteButtonDownStartTime() const;

        MCAPI bool getIsExpediateSelectionActive() const;

        MCAPI void reset();

        MCFOLD void setIsExpediateSelectionActive(bool isExpediateSelectionActive);
        // NOLINTEND
    };

    class FellFromWorldHeightAchievementTracker {
    public:
        // FellFromWorldHeightAchievementTracker inner types define
        enum class FallState : uchar {
            Falling             = 0,
            TickCheckAliveTicks = 1,
            CheckForAlive       = 2,
            Done                = 3,
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::LocalPlayer::FellFromWorldHeightAchievementTracker::FallState> mState;
        ::ll::TypedStorage<4, 4, int>                                                             mCheckAliveTicks;
        ::ll::TypedStorage<1, 1, bool>                                                            mHasSentAchievement;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void tick(float fallDistance, ::Vec3 const& pos, ::Dimension& dimension, ::LocalPlayer* player);
        // NOLINTEND
    };

    class UndergroundTelemetryHeuristic {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool>         mIsUndergroundCurrentTick;
        ::ll::TypedStorage<1, 1, bool>         mWasUndergroundPreviousTick;
        ::ll::TypedStorage<1, 1, bool>         mForceInitialEventingPropertyUpdate;
        ::ll::TypedStorage<4, 12, ::BlockPos>  mPreviousBlockPos;
        ::ll::TypedStorage<1, 1, ::Brightness> mPreviousNaturalLightLevel;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI void tick(::LocalPlayer& owner);
        // NOLINTEND
    };

    struct ContainerCloseInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerTypeToClose;
        ::ll::TypedStorage<1, 1, bool>                                 mShouldCloseContainerScreen;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 112, ::InventoryMenu>                             mInventoryMenu;
    ::ll::TypedStorage<4, 4, float>                                         mPortalEffectTime;
    ::ll::TypedStorage<4, 4, float>                                         mOPortalEffectTime;
    ::ll::TypedStorage<8, 16, ::LocalPlayer::EmoteExpediateData>            mEmoteExpediateData;
    ::ll::TypedStorage<4, 20, ::LocalPlayer::UndergroundTelemetryHeuristic> mUndergroundTelemetryHeuristic;
    ::ll::TypedStorage<4, 12, ::LocalPlayer::FellFromWorldHeightAchievementTracker>
                                                                             mFellFromWorldHeightAchievementTracker;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mLowMemorySubscription;
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                             mClient;
    ::ll::TypedStorage<4, 4, int>                                            mCanCloseScreenOnHurtAfterTime;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mlastFrameDelta;
    ::ll::TypedStorage<1, 1, bool>                                           mEnablePortalEffect;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                  mSentOffhandItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                  mSentInventoryItem;
    ::ll::TypedStorage<4, 4, int>                                            mSentSelectedSlot;
    ::ll::TypedStorage<1, 2, ::LocalPlayer::ContainerCloseInfo>              mContainerCloseInfo;
    ::ll::TypedStorage<8, 72, ::ClientLocatorBar>                            mClientLocatorBar;
    ::ll::TypedStorage<8, 8, uint64>                                         mSessionTickCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalPlayer::RegionListener*>> mRegionListeners;
    ::ll::TypedStorage<1, 1, bool>                                           mDamagedByMobThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                           mIsTeacher;
    ::ll::TypedStorage<1, 1, bool>                                           mHasBeenInitialized;
    ::ll::TypedStorage<1, 1, bool>                                           mPrevTransitionBlocking;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mInventorySearchString;
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::mce::UUID>>             mAllSentEmotePieceIds;
    ::ll::TypedStorage<8, 48, ::HashedString>                                mCurrentStructureFeature;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                  mItemActivationItem;
    ::ll::TypedStorage<4, 4, int>                                            mItemActivationTicks;
    ::ll::TypedStorage<4, 4, float>                                          mItemActivationOffsetX;
    ::ll::TypedStorage<4, 4, float>                                          mItemActivationOffsetY;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PlayerAutomationObserver>>  mAutomationObserver;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SubChunkRequestSubscriber>> mSubChunkSubscriber;
    ::ll::TypedStorage<4, 4, uint>                                           mTickingAreaChunkIndexToCheckForRequests;
    ::ll::TypedStorage<8, 32, ::NetworkChunkSubscriber>                      mChunkSubscriberView;
    ::ll::TypedStorage<1, 1, ::PlayerRespawnState>                           mClientRespawnState;
    ::ll::TypedStorage<4, 12, ::Vec3>                                        mClientRespawnPotentialPosition;
    ::ll::TypedStorage<4, 4, int>                                            mRenderChunkRadiusLowMemoryWatermark;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mLastDeathInfo;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorPlayer>>     mEditorClientPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Bedrock::DDUI::DataStoreSyncClient>> mDataStoreSync;
    ::ll::TypedStorage<4, 4, float>                                                   mCurrentExpCache;
    ::ll::TypedStorage<4, 4, int>                                                     mCurrentLevelCache;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastLevelChangedTimePoint;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>                 mLastXPContainerClosedTimePoint;
    ::ll::TypedStorage<1, 1, bool>                                                    mPreparedMainChunkSource;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mVisibleTouchJoystickLockSubscription;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mClientPlayerGameTypePublisher;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mLocalPlayerDeathPublisher;
    ::ll::TypedStorage<8, 48, ::Bedrock::PubSub::Publisher<void(), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
        mLocalPlayerRespawnPublisher;
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayer& operator=(LocalPlayer const&);
    LocalPlayer(LocalPlayer const&);
    LocalPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LocalPlayer() /*override*/;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    virtual void suspendRegion() /*override*/;

    virtual void destroyRegion() /*override*/;

    virtual void tickWorld(::Tick const& currentTick) /*override*/;

    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    virtual void normalTick() /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void aiStep() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void deleteContainerManager() /*override*/;

    virtual void openPortfolio() /*override*/;

    virtual void openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern) /*override*/;

    virtual void openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle) /*override*/;

    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> data) /*override*/;

    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    virtual void openInventory() /*override*/;

    virtual void setContainerData(::IContainerManager&, int, int) /*override*/;

    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         slot,
        int                  oldItem,
        ::ItemStack const&   newItem,
        ::ItemStack const&   isResultSlot,
        bool
    ) /*override*/;

    virtual void refreshContainer(::IContainerManager&) /*override*/;

    virtual bool isLoading() const /*override*/;

    virtual void stopLoading() /*override*/;

    virtual void respawn() /*override*/;

    virtual void displayClientMessage(
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    ) /*override*/;

    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& pos) /*override*/;

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    virtual bool canStartSleepInBed() /*override*/;

    virtual void handleInsidePortal(::BlockPos const& portalPos) /*override*/;

    virtual bool swing(::ActorSwingSource swingSource) /*override*/;

    virtual void setSneaking(bool _isSneaking) /*override*/;

    virtual void setSprinting(bool _isSprinting) /*override*/;

    virtual void playEmote(::std::string const& pieceId, bool const playChatMessage) /*override*/;

    virtual void resetRot() /*override*/;

    virtual void resetUserPos(::ActorResetRule resetRule) /*override*/;

    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    virtual void changeDimension(::DimensionType toId) /*override*/;

    virtual void changeDimension(::ChangeDimensionPacket const& packet) /*override*/;

    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    virtual void _fireDimensionChanged() /*override*/;

    virtual bool isAutoJumpEnabled() const /*override*/;

    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    virtual ::IMinecraftEventing* getEventing() const /*override*/;

    virtual uint getUserId() const /*override*/;

    virtual bool isInTrialMode() /*override*/;

    virtual void setAbilities(::LayeredAbilities const& newAbilities) /*override*/;

    virtual void die(::ActorDamageSource const& source) /*override*/;

    virtual void onEffectRemoved(::MobEffectInstance& effect) /*override*/;

    virtual void addExperience(int xp) /*override*/;

    virtual void addLevels(int levels) /*override*/;

    virtual bool isActorRelevant(::Actor const&) /*override*/;

    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    virtual void checkMovementStats(::Vec3 const& d) /*override*/;

    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    virtual bool isTeacher() const /*override*/;

    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;

    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;

    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    ) /*override*/;

    virtual void destroyEditorPlayer() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    virtual void requestMissingSubChunk(::SubChunkPos const& scp) /*override*/;

    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    virtual void setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status) /*override*/;

    virtual ::std::unique_ptr<::ISparseContainerSetListener> createSparseContainerListener() /*override*/;

    virtual void emitCriticalHitParticles(::Actor const& target, int particleCount) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LocalPlayer(
        ::IClientInstance&                client,
        ::Level&                          level,
        ::std::string const&              playerName,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext
    );

    MCAPI void _applyTurnDelta(::Vec2 const& turnOffset);

    MCAPI void _checkForTickingAreaSubchunkRequests();

    MCAPI void _forceCameraCut();

    MCAPI ::CrashDumpLogStringID _getCrashDumpLogCategory();

    MCAPI void _handleDebugTracking();

    MCAPI void _logCDEvent(
        ::CrashDumpLogStringID option1,
        ::CrashDumpLogStringID option2,
        ::CrashDumpLogStringID option3,
        ::CrashDumpLogStringID option4
    );

    MCAPI void _onLowMemory(::LowMemorySeverity severity);

    MCAPI void _prepareMainChunkSource(::ChunkPos const& center);

    MCAPI void addRegionListener(::LocalPlayer::RegionListener* listener);

    MCAPI float checkSecondsSinceLevelChanged();

    MCAPI float checkSecondsSinceXPContainerClosed() const;

    MCAPI void clearMovementState();

    MCAPI void closeContainerScreen(::SharedTypes::Legacy::ContainerType containerType);

    MCAPI void closeNpcInteractScreen(::ActorUniqueID const& npcId);

    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI void describeBlock();

    MCAPI void fireEventPersonaEmotePlayed(bool emoteEndedEarly);

    MCAPI ::ItemStack const& getActivatedItem() const;

    MCAPI ::IClientInstance& getClientInstance() const;

    MCAPI ::ClientLocatorBar& getClientLocatorBar();

    MCAPI ::NetworkIdentifier const& getConnectionId() const;

    MCAPI ::SharedTypes::Legacy::ContainerType getContainerTypeToClose();

    MCAPI ::Bedrock::DDUI::DataStoreSyncClient& getDataStoreSync();

    MCAPI ::LocalPlayer::EmoteExpediateData& getEmoteExpediateData();

    MCAPI float getFieldOfViewModifier() const;

    MCAPI ::InventoryMenu& getInventoryMenu();

    MCAPI ::std::string const& getInventorySearchString() const;

    MCAPI int getItemActivationOffsetX() const;

    MCAPI int getItemActivationOffsetY() const;

    MCAPI int getItemActivationTicks() const;

    MCFOLD ::ItemStackNetManagerClient& getItemStackNetManagerClient();

    MCAPI ::std::string const& getLastDeathInfo() const;

    MCAPI ::NetworkChunkSubscriber& getNetworkChunkSubscriber();

    MCAPI float getOPortalEffectTime() const;

    MCAPI float getPickRange() const;

    MCAPI float getPortalEffectTime() const;

    MCAPI uint getViewBlockRadius() const;

    MCAPI void handleArmorDamage(::ArmorSlotAndDamagePair const& armorSlotAndDamage);

    MCAPI void handleChunkGenerationRequests(
        ::ChunkPos                       moveCenter,
        int                              chunkRadius,
        ::std::vector<::ChunkPos> const& serverChunks
    );

    MCAPI bool hasBossRegistered(::ActorUniqueID) const;

    MCAPI void hurtTo(int newHealth);

    MCAPI void initializeItemStackNetManager(bool enableItemStackNetManager);

    MCAPI bool isAbleToRespawn() const;

    MCAPI bool isPlaying() const;

    MCAPI void localPlayerTurn(::Vec2 const& deltaRot);

    MCAPI void markUIAnimationComponentDirty();

    MCAPI void missedSwing();

    MCAPI void onStopRidingCameraForceCut();

    MCAPI void openCodeScreen(::OpenCodeMethod openMethod);

    MCAPI void pickBlock(::HitResult const& hitResult, bool withData);

    MCAPI void playEmoteSlot(int slotIndex, bool playChatMessage);

    MCAPI void pushChangeDimensionLoadingScreen(::DimensionType toId);

    MCAPI ::Bedrock::PubSub::Subscription registerLocalPlayerDeathListener(::std::function<void()> callback);

    MCAPI ::Bedrock::PubSub::Subscription registerLocalPlayerRespawnListener(::std::function<void()> callback);

    MCAPI ::Bedrock::PubSub::Subscription registerPlayerGameTypeChangedListener(::std::function<void()> callback);

    MCAPI void removeRegionListener(::LocalPlayer::RegionListener* listener);

    MCAPI void requestChunkRadius(uint chunkRadius);

    MCAPI void resetLastDeathInfo();

    MCAPI void sendBlockPickRequestPacket(::BlockSource& region, ::BlockPos const& hitResultBlockPos, bool withData);

    MCAPI void sendEmotes();

    MCAPI void sendInput();

    MCAPI void setAllEmotePlayedTelemetryData(::std::string const& emoteProductId, int emoteSlotNumber);

    MCAPI void setAndSaveBlastFurnaceOptions(::FurnaceOptions const& options);

    MCAPI void setAndSaveFurnaceOptions(::FurnaceOptions const& options);

    MCAPI void setAndSaveInventoryOptions(::InventoryOptions const& options);

    MCAPI void setAndSaveSmokerOptions(::FurnaceOptions const& options);

    MCAPI void setClientRespawnPotentialPosition(::Vec3 const& pos);

    MCAPI void setClientRespawnState(::PlayerRespawnState const& state);

    MCAPI void setConnectionId(::NetworkIdentifier const& id);

    MCAPI void setCurrentStructureFeature(::HashedString structureFeature);

    MCAPI void setInventorySearchString(::std::string const& inventorySearchString);

    MCAPI void setLastDeathInfo(::std::string const& info);

    MCAPI void setPlayerGameTypeWithoutServerNotification(::GameType gameType);

    MCAPI bool shouldCloseContainer();

    MCAPI bool shouldRotateWithCamera() const;

    MCAPI void startPaddling(::SharedTypes::Side side);

    MCAPI void stopPaddling(::SharedTypes::Side side);

    MCAPI void updateSecondsSinceXPContainerClosed();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _populateLegacyTransactionRequest(
        ::ItemStackLegacyRequestId&                                            legacyRequestId,
        ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>>& legacySetItemSlots,
        ::ItemStackNetManagerClient const&                                     itemStackNetManager
    );

    MCAPI static void sendInput(::EntityContext& entity, ::PacketSender& packetSender);

    MCAPI static ::LocalPlayer* tryGetFromEntity(::EntityContext& entity, bool includeRemoved);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IClientInstance&                client,
        ::Level&                          level,
        ::std::string const&              playerName,
        ::GameType                        playerGameType,
        bool                              isHostingPlayer,
        ::NetworkIdentifier const&        owner,
        ::SubClientId                     subid,
        ::mce::UUID                       uuid,
        ::std::string const&              deviceId,
        ::PlayerAuthenticationType        authType,
        ::PlayerAuthenticationInfo const& authInfo,
        ::EntityContext&                  entityContext
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
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI void $suspendRegion();

    MCAPI void $destroyRegion();

    MCAPI void $tickWorld(::Tick const& currentTick);

    MCFOLD void $frameUpdate(::FrameUpdateContextBase&);

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI void $normalTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $aiStep();

    MCAPI void $addAdditionalSaveData(::CompoundTag& entityTag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $deleteContainerManager();

    MCAPI void $openPortfolio();

    MCAPI void $openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern);

    MCAPI void $openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle);

    MCAPI void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> data);

    MCAPI void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);

    MCAPI void $openInventory();

    MCFOLD void $setContainerData(::IContainerManager&, int, int);

    MCAPI void $slotChanged(
        ::IContainerManager& menu,
        ::Container&         slot,
        int                  oldItem,
        ::ItemStack const&   newItem,
        ::ItemStack const&   isResultSlot,
        bool
    );

    MCFOLD void $refreshContainer(::IContainerManager&);

    MCAPI bool $isLoading() const;

    MCAPI void $stopLoading();

    MCAPI void $respawn();

    MCAPI void
    $displayClientMessage(::std::string const& message, ::std::optional<::std::string> const filteredMessage);

    MCAPI void $displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    );

    MCAPI void $displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    );

    MCAPI ::BedSleepingResult $startSleepInBed(::BlockPos const& pos);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCAPI bool $canStartSleepInBed();

    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCAPI bool $swing(::ActorSwingSource swingSource);

    MCAPI void $setSneaking(bool _isSneaking);

    MCAPI void $setSprinting(bool _isSprinting);

    MCAPI void $playEmote(::std::string const& pieceId, bool const playChatMessage);

    MCAPI void $resetRot();

    MCAPI void $resetUserPos(::ActorResetRule resetRule);

    MCAPI void
    $teleportTo(::Vec3 const& pos, bool shouldStopRiding, int cause, int sourceEntityType, bool keepVelocity);

    MCFOLD void $changeDimension(::DimensionType toId);

    MCAPI void $changeDimension(::ChangeDimensionPacket const& packet);

    MCAPI void $setPlayerGameType(::GameType gameType);

    MCFOLD ::ActorUniqueID $getControllingPlayer() const;

    MCAPI void $_fireDimensionChanged();

    MCAPI bool $isAutoJumpEnabled() const;

    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI void $setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item);

    MCAPI ::IMinecraftEventing* $getEventing() const;

    MCAPI uint $getUserId() const;

    MCAPI bool $isInTrialMode();

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);

    MCFOLD void $addExperience(int xp);

    MCFOLD void $addLevels(int levels);

    MCFOLD bool $isActorRelevant(::Actor const&);

    MCAPI void $handleEntityEvent(::ActorEvent id, int data);

    MCAPI void $checkMovementStats(::Vec3 const& d);

    MCAPI ::HashedString $getCurrentStructureFeature() const;

    MCAPI bool $isTeacher() const;

    MCAPI void $sendInventoryTransaction(::InventoryTransaction const& transaction) const;

    MCAPI void $sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const;

    MCAPI void $sendNetworkPacket(::Packet& packet) const;

    MCAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCAPI void $destroyEditorPlayer();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getEditorPlayer() const;

    MCAPI void $requestMissingSubChunk(::SubChunkPos const& scp);

    MCAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI void $setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status);

    MCAPI ::std::unique_ptr<::ISparseContainerSetListener> $createSparseContainerListener();

    MCAPI void $emitCriticalHitParticles(::Actor const& target, int particleCount);

    MCAPI ::ActorHurtResult $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
