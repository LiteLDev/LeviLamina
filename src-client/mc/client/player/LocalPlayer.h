#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/identity/PlayerAuthenticationType.h"
#include "mc/client/world/actor/player/ClientLocatorBar.h"
#include "mc/common/Brightness.h"
#include "mc/common/SubClientId.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
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
class ChalkboardBlockActor;
class ChangeDimensionPacket;
class ChunkPos;
class ChunkSource;
class ComplexInventoryTransaction;
class CompoundTag;
class Container;
class DataLoadHelper;
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
class PlayerAutomationObserver;
class PlayerEventCoordinator;
class SubChunkPos;
class SubChunkRequestSubscriber;
class TextObjectRoot;
class Vec2;
struct ActorUniqueID;
struct ArmorSlotAndDamagePair;
struct DimensionType;
struct HurtParameters;
struct INpcDialogueData;
struct ItemStackLegacyRequestIdTag;
struct LegacySetSlot;
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
    ::ll::TypedStorage<8, 32, ::std::string>                                 mFurnaceSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mBlastFurnaceSearchString;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mSmokerSearchString;
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
    virtual ~LocalPlayer() /*override*/ = default;

    virtual void reloadHardcodedClient(::ActorInitializationMethod method) /*override*/;

    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    virtual void suspendRegion() /*override*/;

    virtual void destroyRegion() /*override*/;

    virtual void tickWorld(::Tick const&) /*override*/;

    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    virtual void normalTick() /*override*/;

    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    virtual void aiStep() /*override*/;

    virtual void addAdditionalSaveData(::CompoundTag& entityTag) const /*override*/;

    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    virtual void deleteContainerManager() /*override*/;

    virtual void openPortfolio() /*override*/;

    virtual void openBook(int, bool, int, ::BlockActor*) /*override*/;

    virtual void openChalkboard(::ChalkboardBlockActor&, bool) /*override*/;

    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData>) /*override*/;

    virtual void openTrading(::ActorUniqueID const&, bool) /*override*/;

    virtual void openInventory() /*override*/;

    virtual void setContainerData(::IContainerManager&, int, int) /*override*/;

    virtual void
    slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) /*override*/;

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

    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos) /*override*/;

    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    virtual bool canStartSleepInBed() /*override*/;

    virtual void handleInsidePortal(::BlockPos const& portalPos) /*override*/;

    virtual bool swing(::ActorSwingSource) /*override*/;

    virtual void setSneaking(bool value) /*override*/;

    virtual void setSprinting(bool shouldSprint) /*override*/;

    virtual void playEmote(::std::string const&, bool const) /*override*/;

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

    virtual void changeDimension(::ChangeDimensionPacket const&) /*override*/;

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

    virtual void checkMovementStats(::Vec3 const&) /*override*/;

    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    virtual bool isTeacher() const /*override*/;

    virtual void sendInventoryTransaction(::InventoryTransaction const&) const /*override*/;

    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const /*override*/;

    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    ) /*override*/;

    virtual void destroyEditorPlayer() /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    virtual void requestMissingSubChunk(::SubChunkPos const&) /*override*/;

    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    virtual void setBehaviorCommandStatus(::std::string const&, ::BehaviorStatus) /*override*/;

    virtual ::std::unique_ptr<::ISparseContainerSetListener> createSparseContainerListener() /*override*/;

    virtual void emitCriticalHitParticles(::Actor const& target, int particleCount) /*override*/;

    virtual ::ActorHurtResult
    _hurt(::ActorDamageSource const& source, float damage, ::HurtParameters const& hurtParameters) /*override*/;
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

    MCAPI void _forceCameraCut();

    MCAPI float checkSecondsSinceLevelChanged();

    MCAPI void closeNpcInteractScreen(::ActorUniqueID const& npcId);

    MCAPI void createEditorPlayer(::Bedrock::NonOwnerPointer<::Editor::IEditorManager> editorManager);

    MCAPI void describeBlock();

    MCAPI float getFieldOfViewModifier() const;

    MCAPI float getPickRange() const;

    MCAPI void handleArmorDamage(::ArmorSlotAndDamagePair const& armorSlotAndDamage);

    MCAPI void hurtTo(int newHealth);

    MCAPI void initializeItemStackNetManager(bool enableItemStackNetManager);

    MCAPI void localPlayerTurn(::Vec2 const& deltaRot);

    MCAPI void missedSwing();

    MCAPI void openCodeScreen(::OpenCodeMethod openMethod);

    MCAPI void pickBlock(::HitResult const& hitResult, bool withData);

    MCAPI void playEmoteSlot(int slotIndex, bool playChatMessage);

    MCAPI void pushChangeDimensionLoadingScreen(::DimensionType toId);

    MCAPI void requestChunkRadius(uint chunkRadius);

    MCAPI void sendInput();

    MCAPI void setAllEmotePlayedTelemetryData(::std::string const& emoteProductId, int emoteSlotNumber);

    MCAPI void setCurrentStructureFeature(::HashedString structureFeature);

    MCAPI void startPaddling(::SharedTypes::Side side);

    MCAPI void stopPaddling(::SharedTypes::Side side);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _populateLegacyTransactionRequest(
        ::ItemStackLegacyRequestId&        legacyRequestId,
        ::std::vector<::LegacySetSlot>&    legacySetItemSlots,
        ::ItemStackNetManagerClient const& itemStackNetManager
    );

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
