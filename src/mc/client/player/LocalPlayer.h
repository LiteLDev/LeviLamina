#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/routing/routes/GameplayRouteHandler.h"
#include "mc/common/Brightness.h"
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/deps/shared_types/legacy/actor/ArmorSlot.h"
#include "mc/deps/shared_types/legacy/item/EquipmentSlot.h"
#include "mc/network/packet/PlayerRespawnState.h"
#include "mc/platform/UUID.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/ActorResetRule.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/inventory/InventoryMenu.h"
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
class FrameUpdateContextBase;
class IClientInstance;
class IClientInstance;
class IContainerManager;
class IMinecraftEventing;
class InventoryMenu;
class InventoryTransaction;
class LayeredAbilities;
class MobEffectInstance;
class NetworkChunkSubscriber;
class Packet;
class PlayerAutomationObserver;
class PlayerEventCoordinator;
class SubChunkPos;
class SubChunkRequestSubscriber;
class TextObjectRoot;
struct ActorUniqueID;
struct Brightness;
struct INpcDialogueData;
struct Tick;
namespace Editor { class IEditorPlayer; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
namespace OreUI { class GameplayRouteHandler; }
namespace mce { class UUID; }
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
    class RegionListener {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RegionListener() = default;

        // vIndex: 1
        virtual void onRegionDestroyed() = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN

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
    ::ll::TypedStorage<4, 8, ::Vec2>                                         mLastHmdRot;
    ::ll::TypedStorage<4, 8, ::Vec2>                                         mHmdAngleDelta;
    ::ll::TypedStorage<1, 1, bool>                                           mHmdRotRecorded;
    ::ll::TypedStorage<1, 1, bool>                                           mEnablePortalEffect;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                  mSentOffhandItem;
    ::ll::TypedStorage<8, 152, ::ItemStack>                                  mSentInventoryItem;
    ::ll::TypedStorage<4, 4, int>                                            mSentSelectedSlot;
    ::ll::TypedStorage<1, 2, ::LocalPlayer::ContainerCloseInfo>              mContainerCloseInfo;
    ::ll::TypedStorage<8, 8, uint64>                                         mSessionTickCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::LocalPlayer::RegionListener*>> mRegionListeners;
    ::ll::TypedStorage<1, 1, bool>                                           mDamagedByMobThisFrame;
    ::ll::TypedStorage<1, 1, bool>                                           mLeavingLevel;
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
    ::ll::TypedStorage<4, 4, int>                                            mResetHMDAfterSleepTickDelay;
    ::ll::TypedStorage<4, 4, int>                                            mRenderChunkRadiusLowMemoryWatermark;
    ::ll::TypedStorage<8, 32, ::std::string>                                 mLastDeathInfo;
    ::ll::TypedStorage<8, 112, ::OreUI::GameplayRouteHandler>                mGameplayRouteHandler;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Editor::IEditorPlayer>>     mEditorClientPlayer;
    ::ll::TypedStorage<1, 1, bool>                                           mPreparedMainChunkSource;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LocalPlayer() /*override*/ = default;

    // vIndex: 3
    virtual void reloadHardcodedClient(::ActorInitializationMethod) /*override*/;

    // vIndex: 177
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 179
    virtual void suspendRegion() /*override*/;

    // vIndex: 178
    virtual void destroyRegion() /*override*/;

    // vIndex: 182
    virtual void tickWorld(::Tick const&) /*override*/;

    // vIndex: 183
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    // vIndex: 184
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 145
    virtual void aiStep() /*override*/;

    // vIndex: 137
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 136
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 223
    virtual void deleteContainerManager() /*override*/;

    // vIndex: 193
    virtual void openPortfolio() /*override*/;

    // vIndex: 194
    virtual void openBook(int, bool, int, ::BlockActor*) /*override*/;

    // vIndex: 196
    virtual void openChalkboard(::ChalkboardBlockActor&, bool) /*override*/;

    // vIndex: 197
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    // vIndex: 195
    virtual void openTrading(::ActorUniqueID const&, bool) /*override*/;

    // vIndex: 198
    virtual void openInventory() /*override*/;

    // vIndex: 220
    virtual void setContainerData(::IContainerManager&, int, int) /*override*/;

    // vIndex: 221
    virtual void
    slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) /*override*/;

    // vIndex: 222
    virtual void refreshContainer(::IContainerManager&) /*override*/;

    // vIndex: 210
    virtual bool isLoading() const /*override*/;

    // vIndex: 212
    virtual void stopLoading() /*override*/;

    // vIndex: 190
    virtual void respawn() /*override*/;

    // vIndex: 200
    virtual void displayClientMessage(
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    ) /*override*/;

    // vIndex: 201
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    // vIndex: 204
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    // vIndex: 205
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos) /*override*/;

    // vIndex: 206
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    // vIndex: 207
    virtual bool canStartSleepInBed() /*override*/;

    // vIndex: 87
    virtual void handleInsidePortal(::BlockPos const& portalPos) /*override*/;

    // vIndex: 111
    virtual void swing() /*override*/;

    // vIndex: 44
    virtual void setSneaking(bool value) /*override*/;

    // vIndex: 140
    virtual void setSprinting(bool shouldSprint) /*override*/;

    // vIndex: 209
    virtual void playEmote(::std::string const&, bool const) /*override*/;

    // vIndex: 191
    virtual void resetRot() /*override*/;

    // vIndex: 9
    virtual void resetUserPos(::ActorResetRule) /*override*/;

    // vIndex: 21
    virtual void teleportTo(::Vec3 const&, bool, int, int, bool) /*override*/;

    // vIndex: 90
    virtual void changeDimension(::DimensionType toId) /*override*/;

    // vIndex: 89
    virtual void changeDimension(::ChangeDimensionPacket const&) /*override*/;

    // vIndex: 213
    virtual void setPlayerGameType(::GameType) /*override*/;

    // vIndex: 91
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 180
    virtual void _fireDimensionChanged() /*override*/;

    // vIndex: 189
    virtual bool isAutoJumpEnabled() const /*override*/;

    // vIndex: 169
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 79
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 72
    virtual void setArmor(::SharedTypes::Legacy::ArmorSlot, ::ItemStack const&) /*override*/;

    // vIndex: 216
    virtual ::IMinecraftEventing* getEventing() const /*override*/;

    // vIndex: 217
    virtual uint getUserId() const /*override*/;

    // vIndex: 192
    virtual bool isInTrialMode() /*override*/;

    // vIndex: 239
    virtual void setAbilities(::LayeredAbilities const& newAbilities) /*override*/;

    // vIndex: 123
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 107
    virtual void onEffectRemoved(::MobEffectInstance& effect) /*override*/;

    // vIndex: 218
    virtual void addExperience(int xp) /*override*/;

    // vIndex: 219
    virtual void addLevels(int levels) /*override*/;

    // vIndex: 224
    virtual bool isActorRelevant(::Actor const&) /*override*/;

    // vIndex: 69
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 187
    virtual void checkMovementStats(::Vec3 const&) /*override*/;

    // vIndex: 188
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    // vIndex: 225
    virtual bool isTeacher() const /*override*/;

    // vIndex: 228
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const /*override*/;

    // vIndex: 229
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const /*override*/;

    // vIndex: 230
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    // vIndex: 231
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 125
    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    ) /*override*/;

    // vIndex: 241
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 240
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 235
    virtual void requestMissingSubChunk(::SubChunkPos const&) /*override*/;

    // vIndex: 236
    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    // vIndex: 215
    virtual void _crit(::Actor& actor) /*override*/;

    // vIndex: 135
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
