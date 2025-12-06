#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
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
#include "mc/world/level/GameType.h"
#include "mc/world/level/chunk/NetworkChunkSubscriber.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorDamageSource;
class BlockActor;
class BlockPos;
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
class InventoryTransaction;
class LayeredAbilities;
class Level;
class MobEffectInstance;
class NetworkIdentifier;
class Packet;
class PacketSender;
class PlayerEventCoordinator;
class SubChunkPos;
class Vec2;
struct ActorUniqueID;
struct ArmorSlotAndDamagePair;
struct FrameUpdateContextBase;
struct IClientInstance;
struct IContainerManager;
struct IMinecraftEventing;
struct INpcDialogueData;
struct InventoryOptions;
struct ItemStackLegacyRequestIdTag;
struct ItemStackNetManagerClient;
struct PlayerAuthenticationInfo;
struct PlayerAutomationObserver;
struct SubChunkRequestSubscriber;
struct TextObjectRoot;
struct Tick;
namespace Bedrock::DDUI { struct DataStoreSyncClient; }
namespace Editor { struct IEditorManager; }
namespace Editor { struct IEditorPlayer; }
namespace MovementDataExtractionUtility { struct SnapshotAccessor; }
// clang-format on

class LocalPlayer : public ::Player {
public:
    // LocalPlayer inner types declare
    // clang-format off
    struct ContainerCloseInfo;
    struct EmoteExpediateData;
    struct FellFromWorldHeightAchievementTracker;
    struct RegionListener;
    struct UndergroundTelemetryHeuristic;
    // clang-format on

    // LocalPlayer inner types define
    struct RegionListener {};

    struct EmoteExpediateData {};

    struct FellFromWorldHeightAchievementTracker {
    public:
        // FellFromWorldHeightAchievementTracker inner types define
        enum class FallState : uint {};
    };

    struct UndergroundTelemetryHeuristic {};

    struct ContainerCloseInfo {};

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
    // vIndex: 0
    virtual ~LocalPlayer() /*override*/;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    // vIndex: 178
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 180
    virtual void suspendRegion() /*override*/;

    // vIndex: 179
    virtual void destroyRegion() /*override*/;

    // vIndex: 183
    virtual void tickWorld(::Tick const& currentTick) /*override*/;

    // vIndex: 184
    virtual void frameUpdate(::FrameUpdateContextBase& frameUpdateContextBase) /*override*/;

    // vIndex: 185
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 146
    virtual void aiStep() /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 224
    virtual void deleteContainerManager() /*override*/;

    // vIndex: 194
    virtual void openPortfolio() /*override*/;

    // vIndex: 195
    virtual void openBook(int bookSlot, bool editable, int page, ::BlockActor* lectern) /*override*/;

    // vIndex: 197
    virtual void openChalkboard(::ChalkboardBlockActor& chalkboard, bool showLockToggle) /*override*/;

    // vIndex: 198
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    // vIndex: 196
    virtual void openTrading(::ActorUniqueID const& uniqueID, bool useNewScreen) /*override*/;

    // vIndex: 199
    virtual void openInventory() /*override*/;

    // vIndex: 221
    virtual void setContainerData(::IContainerManager& menu, int id, int value) /*override*/;

    // vIndex: 222
    virtual void slotChanged(
        ::IContainerManager& menu,
        ::Container&         container,
        int                  slot,
        ::ItemStack const&   oldItem,
        ::ItemStack const&   newItem,
        bool                 isResultSlot
    ) /*override*/;

    // vIndex: 223
    virtual void refreshContainer(::IContainerManager& menu) /*override*/;

    // vIndex: 211
    virtual bool isLoading() const /*override*/;

    // vIndex: 213
    virtual void stopLoading() /*override*/;

    // vIndex: 191
    virtual void respawn() /*override*/;

    // vIndex: 201
    virtual void displayClientMessage(
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    ) /*override*/;

    // vIndex: 202
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    // vIndex: 205
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    // vIndex: 206
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos) /*override*/;

    // vIndex: 207
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    // vIndex: 208
    virtual bool canStartSleepInBed() /*override*/;

    // vIndex: 87
    virtual void handleInsidePortal(::BlockPos const& portalPos) /*override*/;

    // vIndex: 111
    virtual bool swing() /*override*/;

    // vIndex: 44
    virtual void setSneaking(bool value) /*override*/;

    // vIndex: 140
    virtual void setSprinting(bool shouldSprint) /*override*/;

    // vIndex: 210
    virtual void playEmote(::std::string const& pieceId, bool const playChatMessage) /*override*/;

    // vIndex: 192
    virtual void resetRot() /*override*/;

    // vIndex: 9
    virtual void resetUserPos(::ActorResetRule resetRule) /*override*/;

    // vIndex: 21
    virtual void teleportTo(
        ::Vec3 const& pos,
        bool          shouldStopRiding,
        int           cause,
        int           sourceEntityType,
        bool          keepVelocity
    ) /*override*/;

    // vIndex: 90
    virtual void changeDimension(::DimensionType toId) /*override*/;

    // vIndex: 89
    virtual void changeDimension(::ChangeDimensionPacket const& packet) /*override*/;

    // vIndex: 214
    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 181
    virtual void _fireDimensionChanged() /*override*/;

    // vIndex: 190
    virtual bool isAutoJumpEnabled() const /*override*/;

    // vIndex: 170
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 72
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 217
    virtual ::IMinecraftEventing* getEventing() const /*override*/;

    // vIndex: 218
    virtual uint getUserId() const /*override*/;

    // vIndex: 193
    virtual bool isInTrialMode() /*override*/;

    // vIndex: 242
    virtual void setAbilities(::LayeredAbilities const& newAbilities) /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 107
    virtual void onEffectRemoved(::MobEffectInstance& effect) /*override*/;

    // vIndex: 219
    virtual void addExperience(int xp) /*override*/;

    // vIndex: 220
    virtual void addLevels(int levels) /*override*/;

    // vIndex: 225
    virtual bool isActorRelevant(::Actor const& actor) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent id, int data) /*override*/;

    // vIndex: 188
    virtual void checkMovementStats(::Vec3 const& d) /*override*/;

    // vIndex: 189
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    // vIndex: 226
    virtual bool isTeacher() const /*override*/;

    // vIndex: 229
    virtual void sendInventoryTransaction(::InventoryTransaction const& transaction) const /*override*/;

    // vIndex: 230
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction> transaction) const
        /*override*/;

    // vIndex: 231
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    // vIndex: 232
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 125
    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    ) /*override*/;

    // vIndex: 244
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 243
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 236
    virtual void requestMissingSubChunk(::SubChunkPos const& scp) /*override*/;

    // vIndex: 237
    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    // vIndex: 238
    virtual void setBehaviorCommandStatus(::std::string const& name, ::BehaviorStatus status) /*override*/;

    // vIndex: 216
    virtual void _emitCriticalHitParticles(::Actor& entity) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const& source, float damage, bool knock, bool ignite) /*override*/;
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

    MCAPI void _handleDebugTracking();

    MCAPI void _logCDEvent(
        ::CrashDumpLogStringID option1,
        ::CrashDumpLogStringID option2,
        ::CrashDumpLogStringID option3,
        ::CrashDumpLogStringID option4
    );

    MCAPI void _prepareMainChunkSource(::ChunkPos const& center);

    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI void fireEventPersonaEmotePlayed(bool emoteEndedEarly);

    MCAPI float getFieldOfViewModifier() const;

    MCAPI float getPickRange() const;

    MCAPI void handleArmorDamage(::ArmorSlotAndDamagePair const& armorSlotAndDamage);

    MCAPI void hurtTo(int newHealth);

    MCAPI void localPlayerTurn(::Vec2 const& deltaRot);

    MCAPI void openCodeScreen(::OpenCodeMethod openMethod);

    MCAPI void pickBlock(::HitResult const& hitResult, bool withData);

    MCAPI void pushChangeDimensionLoadingScreen(::DimensionType toId);

    MCAPI void requestChunkRadius(uint chunkRadius);

    MCAPI void sendEmotes();

    MCAPI void setAllEmotePlayedTelemetryData(::std::string const& emoteProductId, int emoteSlotNumber);

    MCAPI void setAndSaveInventoryOptions(::InventoryOptions const& options);

    MCAPI void setPlayerGameTypeWithoutServerNotification(::GameType gameType);
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
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::chrono::nanoseconds const& MAX_DIMENSION_LOAD_IN_TIME();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
