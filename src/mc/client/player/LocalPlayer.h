#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/Brightness.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/events/OpenCodeMethod.h"
#include "mc/network/packet/PlayerRespawnState.h"
#include "mc/platform/UUID.h"
#include "mc/platform/diagnostics/CrashDumpLogStringID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
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
class BlockActor;
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
class HitResult;
class IClientInstance;
class IContainerManager;
class IMinecraftEventing;
class InventoryTransaction;
class ItemStackNetManagerClient;
class LayeredAbilities;
class Level;
class MobEffectInstance;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class SubChunkPos;
class SubChunkRequestSubscriber;
class TextObjectRoot;
class Vec2;
struct ActorUniqueID;
struct ArmorSlotAndDamagePair;
struct INpcDialogueData;
struct InventoryOptions;
struct ItemStackLegacyRequestIdTag;
struct PlayerAuthenticationInfo;
struct Tick;
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace Editor { class IEditorManager; }
namespace Editor { class IEditorPlayer; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
struct FrameUpdateContextBase;
struct PlayerAutomationObserver;
// clang-format on

class LocalPlayer : public ::Player {
public:
    // LocalPlayer inner types declare
    // clang-format off
    struct ContainerCloseInfo;
    class EmoteExpediateData;
    class FellFromWorldHeightAchievementTracker;
    class RegionListener;
    class UndergroundTelemetryHeuristic;
    // clang-format on

    // LocalPlayer inner types define
    struct ContainerCloseInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mContainerTypeToClose;
        ::ll::TypedStorage<1, 1, bool>                                 mShouldCloseContainerScreen;
        // NOLINTEND
    };

    class EmoteExpediateData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, int64> mEmoteButtonDownStartTime;
        ::ll::TypedStorage<1, 1, bool>  mIsExpediateSelectionActive;
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
    };

    class RegionListener {
    public:
        // virtual functions
        // NOLINTBEGIN
#ifdef LL_PLAT_S
        virtual ~RegionListener() = default;
#else // LL_PLAT_C
        virtual ~RegionListener();
#endif

        virtual void onRegionDestroyed() = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
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
        MCNAPI_C void tick(::LocalPlayer& owner);
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
    // NOLINTEND

public:
    // prevent constructor by default
    LocalPlayer& operator=(LocalPlayer const&);
    LocalPlayer(LocalPlayer const&);
    LocalPlayer();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~LocalPlayer() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~LocalPlayer() /*override*/;
#endif

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    virtual void suspendRegion() /*override*/;

    virtual void destroyRegion() /*override*/;

    virtual void tickWorld(::Tick const& currentTick) /*override*/;

    virtual void frameUpdate(::FrameUpdateContextBase& frameUpdateContextBase) /*override*/;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    virtual void normalTick() /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void aiStep() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void deleteContainerManager() /*override*/;

    virtual void openPortfolio() /*override*/;

    virtual void openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern) /*override*/;

    virtual void openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle) /*override*/;

    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    virtual void openInventory() /*override*/;

    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;

    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) /*override*/;

    virtual void refreshContainer(::IContainerManager& menu) /*override*/;

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

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos) /*override*/;

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    virtual bool canStartSleepInBed() /*override*/;

    virtual void handleInsidePortal(::BlockPos const& portalPos) /*override*/;

    virtual bool swing() /*override*/;

    virtual void setSneaking(bool value) /*override*/;

    virtual void setSprinting(bool shouldSprint) /*override*/;

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

    virtual bool isActorRelevant(::Actor const& actor) /*override*/;

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

    virtual void _emitCriticalHitParticles(::Actor& entity) /*override*/;

    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_C LocalPlayer(
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

    MCAPI_C void _applyTurnDelta(::Vec2 const& turnOffset);

    MCAPI_C void _checkForTickingAreaSubchunkRequests();

    MCAPI_C void _forceCameraCut();

    MCAPI_C void _handleDebugTracking();

    MCAPI_C void _logCDEvent(
        ::CrashDumpLogStringID option1,
        ::CrashDumpLogStringID option2,
        ::CrashDumpLogStringID option3,
        ::CrashDumpLogStringID option4
    );

    MCAPI_C void _prepareMainChunkSource(::ChunkPos const& center);

    MCAPI_C void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI_C void fireEventPersonaEmotePlayed(bool emoteEndedEarly);

    MCAPI_C float getFieldOfViewModifier() const;

    MCAPI_C float getPickRange() const;

    MCAPI_C void handleArmorDamage(::ArmorSlotAndDamagePair const& armorSlotAndDamage);

    MCAPI_C void hurtTo(int newHealth);

    MCAPI_C void localPlayerTurn(::Vec2 const& deltaRot);

    MCAPI_C void openCodeScreen(::OpenCodeMethod openMethod);

    MCAPI_C void pickBlock(::HitResult const& hitResult, bool withData);

    MCAPI_C void pushChangeDimensionLoadingScreen(::DimensionType toId);

    MCAPI_C void requestChunkRadius(uint chunkRadius);

    MCAPI_C void sendEmotes();

    MCAPI_C void setAllEmotePlayedTelemetryData(::std::string const& emoteProductId, int emoteSlotNumber);

    MCAPI_C void setAndSaveInventoryOptions(::InventoryOptions const& options);

    MCAPI_C void setPlayerGameTypeWithoutServerNotification(::GameType gameType);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI_C static void _populateLegacyTransactionRequest(
        ::ItemStackLegacyRequestId&                                            legacyRequestId,
        ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>>& legacySetItemSlots,
        ::ItemStackNetManagerClient const&                                     itemStackNetManager
    );

    MCAPI_C static void sendInput(::EntityContext& entity, ::PacketSender& packetSender);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI_C static ::std::chrono::nanoseconds const& MAX_DIMENSION_LOAD_IN_TIME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI_C void* $ctor(
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
#ifdef LL_PLAT_C
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod method);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI void $suspendRegion();

    MCAPI void $destroyRegion();

    MCAPI void $tickWorld(::Tick const& currentTick);

    MCFOLD void $frameUpdate(::FrameUpdateContextBase& frameUpdateContextBase);

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI void $normalTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $aiStep();

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $deleteContainerManager();

    MCAPI void $openPortfolio();

    MCAPI void $openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern);

    MCAPI void $openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle);

    MCAPI void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCAPI void $openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen);

    MCAPI void $openInventory();

    MCFOLD void $setContainerData(::IContainerManager& menu, int id, int value);

    MCAPI void $slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    );

    MCFOLD void $refreshContainer(::IContainerManager& menu);

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

    MCAPI ::BedSleepingResult $startSleepInBed(::BlockPos const& bedBlockPos);

    MCAPI void $stopSleepInBed(bool forcefulWakeUp, bool updateLevelList);

    MCAPI bool $canStartSleepInBed();

    MCAPI void $handleInsidePortal(::BlockPos const& portalPos);

    MCAPI bool $swing();

    MCAPI void $setSneaking(bool value);

    MCAPI void $setSprinting(bool shouldSprint);

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

    MCFOLD bool $isActorRelevant(::Actor const& actor);

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

    MCAPI void $_emitCriticalHitParticles(::Actor& entity);

    MCAPI bool $_hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
