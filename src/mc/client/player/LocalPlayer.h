#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/world/actor/ActorEvent.h"
#include "mc/world/actor/ActorInitializationMethod.h"
#include "mc/world/actor/player/BedSleepingResult.h"
#include "mc/world/actor/player/Player.h"
#include "mc/world/item/ArmorSlot.h"
#include "mc/world/level/GameType.h"

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
class FrameUpdateContextBase;
class HashedString;
class IContainerManager;
class IMinecraftEventing;
class InventoryTransaction;
class ItemStack;
class LayeredAbilities;
class MobEffectInstance;
class Packet;
class PlayerEventCoordinator;
class SubChunkPos;
class TextObjectRoot;
class Vec3;
struct ActorUniqueID;
struct INpcDialogueData;
struct Tick;
namespace Editor { class IEditorPlayer; }
namespace MovementDataExtractionUtility { class SnapshotAccessor; }
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
        // prevent constructor by default
        RegionListener& operator=(RegionListener const&);
        RegionListener(RegionListener const&);
        RegionListener();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~RegionListener();

        // vIndex: 1
        virtual void onRegionDestroyed() = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
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
        ::ll::UntypedStorage<8, 8> mUnk5a0ee4;
        ::ll::UntypedStorage<1, 1> mUnkc7ef26;
        // NOLINTEND

    public:
        // prevent constructor by default
        EmoteExpediateData& operator=(EmoteExpediateData const&);
        EmoteExpediateData(EmoteExpediateData const&);
        EmoteExpediateData();
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
        ::ll::UntypedStorage<1, 1> mUnk7c63bb;
        ::ll::UntypedStorage<4, 4> mUnk232252;
        ::ll::UntypedStorage<1, 1> mUnk9539cd;
        // NOLINTEND

    public:
        // prevent constructor by default
        FellFromWorldHeightAchievementTracker& operator=(FellFromWorldHeightAchievementTracker const&);
        FellFromWorldHeightAchievementTracker(FellFromWorldHeightAchievementTracker const&);
        FellFromWorldHeightAchievementTracker();
    };

    class UndergroundTelemetryHeuristic {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkb7ba7b;
        ::ll::UntypedStorage<1, 1>  mUnk33e0c1;
        ::ll::UntypedStorage<1, 1>  mUnka0f5b7;
        ::ll::UntypedStorage<4, 12> mUnk1f2966;
        ::ll::UntypedStorage<1, 1>  mUnk3d50c4;
        // NOLINTEND

    public:
        // prevent constructor by default
        UndergroundTelemetryHeuristic& operator=(UndergroundTelemetryHeuristic const&);
        UndergroundTelemetryHeuristic(UndergroundTelemetryHeuristic const&);
        UndergroundTelemetryHeuristic();
    };

    struct ContainerCloseInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnkc0298e;
        ::ll::UntypedStorage<1, 1> mUnkb96359;
        // NOLINTEND

    public:
        // prevent constructor by default
        ContainerCloseInfo& operator=(ContainerCloseInfo const&);
        ContainerCloseInfo(ContainerCloseInfo const&);
        ContainerCloseInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk3d5255;
    ::ll::UntypedStorage<4, 4>   mUnk7589e9;
    ::ll::UntypedStorage<4, 4>   mUnkbae363;
    ::ll::UntypedStorage<8, 16>  mUnk5c64bf;
    ::ll::UntypedStorage<4, 20>  mUnk70b1a1;
    ::ll::UntypedStorage<4, 12>  mUnk3e8d73;
    ::ll::UntypedStorage<8, 8>   mUnkb90009;
    ::ll::UntypedStorage<4, 4>   mUnke2d246;
    ::ll::UntypedStorage<4, 12>  mUnk682e5a;
    ::ll::UntypedStorage<4, 8>   mUnk490fbd;
    ::ll::UntypedStorage<4, 8>   mUnkc5c42a;
    ::ll::UntypedStorage<1, 1>   mUnk7fedf4;
    ::ll::UntypedStorage<1, 1>   mUnkf25d4b;
    ::ll::UntypedStorage<8, 152> mUnkc99a3d;
    ::ll::UntypedStorage<8, 152> mUnk215439;
    ::ll::UntypedStorage<4, 4>   mUnkffca5a;
    ::ll::UntypedStorage<1, 2>   mUnk5d8cc0;
    ::ll::UntypedStorage<8, 8>   mUnkfb5df3;
    ::ll::UntypedStorage<8, 24>  mUnk9cdd4e;
    ::ll::UntypedStorage<1, 1>   mUnkee2578;
    ::ll::UntypedStorage<1, 1>   mUnk333a23;
    ::ll::UntypedStorage<1, 1>   mUnk34071a;
    ::ll::UntypedStorage<1, 1>   mUnk92e34b;
    ::ll::UntypedStorage<1, 1>   mUnk6cf217;
    ::ll::UntypedStorage<8, 32>  mUnk74735e;
    ::ll::UntypedStorage<8, 64>  mUnk52a682;
    ::ll::UntypedStorage<8, 48>  mUnk7eb512;
    ::ll::UntypedStorage<8, 152> mUnk10da53;
    ::ll::UntypedStorage<4, 4>   mUnka14c22;
    ::ll::UntypedStorage<4, 4>   mUnkb8d3bf;
    ::ll::UntypedStorage<4, 4>   mUnk9f8b8b;
    ::ll::UntypedStorage<8, 8>   mUnk9831df;
    ::ll::UntypedStorage<8, 8>   mUnk83dea4;
    ::ll::UntypedStorage<4, 4>   mUnk5680d8;
    ::ll::UntypedStorage<8, 32>  mUnk5c3e98;
    ::ll::UntypedStorage<1, 1>   mUnk121b1b;
    ::ll::UntypedStorage<4, 12>  mUnk15bfa8;
    ::ll::UntypedStorage<4, 4>   mUnk7e6a26;
    ::ll::UntypedStorage<8, 32>  mUnkff1c1d;
    ::ll::UntypedStorage<8, 112> mUnkfafd16;
    ::ll::UntypedStorage<8, 8>   mUnk2c3861;
    ::ll::UntypedStorage<1, 1>   mUnk2da1b7;
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
    virtual void reloadHardcodedClient(::ActorInitializationMethod) /*override*/;

    // vIndex: 182
    virtual void prepareRegion(::ChunkSource& mainChunkSource) /*override*/;

    // vIndex: 184
    virtual void suspendRegion() /*override*/;

    // vIndex: 183
    virtual void destroyRegion() /*override*/;

    // vIndex: 187
    virtual void tickWorld(::Tick const&) /*override*/;

    // vIndex: 188
    virtual void frameUpdate(::FrameUpdateContextBase&) /*override*/;

    // vIndex: 189
    virtual ::std::vector<::ChunkPos> const& getTickingOffsets() const /*override*/;

    // vIndex: 24
    virtual void normalTick() /*override*/;

    // vIndex: 27
    virtual bool startRiding(::Actor& vehicle, bool forceRiding) /*override*/;

    // vIndex: 150
    virtual void aiStep() /*override*/;

    // vIndex: 141
    virtual void addAdditionalSaveData(::CompoundTag& tag) const /*override*/;

    // vIndex: 140
    virtual void readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 228
    virtual void deleteContainerManager() /*override*/;

    // vIndex: 198
    virtual void openPortfolio() /*override*/;

    // vIndex: 199
    virtual void openBook(int, bool, int, ::BlockActor*) /*override*/;

    // vIndex: 201
    virtual void openChalkboard(::ChalkboardBlockActor&, bool) /*override*/;

    // vIndex: 202
    virtual void openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc) /*override*/;

    // vIndex: 200
    virtual void openTrading(::ActorUniqueID const&, bool) /*override*/;

    // vIndex: 203
    virtual void openInventory() /*override*/;

    // vIndex: 225
    virtual void setContainerData(::IContainerManager&, int, int) /*override*/;

    // vIndex: 226
    virtual void
    slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool) /*override*/;

    // vIndex: 227
    virtual void refreshContainer(::IContainerManager&) /*override*/;

    // vIndex: 215
    virtual bool isLoading() const /*override*/;

    // vIndex: 217
    virtual void stopLoading() /*override*/;

    // vIndex: 195
    virtual void respawn() /*override*/;

    // vIndex: 205
    virtual void displayClientMessage(
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage
    ) /*override*/;

    // vIndex: 206
    virtual void displayTextObjectMessage(
        ::TextObjectRoot const& textObject,
        ::std::string const&    fromXuid,
        ::std::string const&    fromPlatformId
    ) /*override*/;

    // vIndex: 209
    virtual void displayWhisperMessage(
        ::std::string const&                 author,
        ::std::string const&                 message,
        ::std::optional<::std::string> const filteredMessage,
        ::std::string const&                 xuid,
        ::std::string const&                 platformId
    ) /*override*/;

    // vIndex: 210
    virtual ::BedSleepingResult startSleepInBed(::BlockPos const& bedBlockPos) /*override*/;

    // vIndex: 211
    virtual void stopSleepInBed(bool forcefulWakeUp, bool updateLevelList) /*override*/;

    // vIndex: 212
    virtual bool canStartSleepInBed() /*override*/;

    // vIndex: 89
    virtual void handleInsidePortal(::BlockPos const& portalPos) /*override*/;

    // vIndex: 113
    virtual void swing() /*override*/;

    // vIndex: 45
    virtual void setSneaking(bool value) /*override*/;

    // vIndex: 145
    virtual void setSprinting(bool shouldSprint) /*override*/;

    // vIndex: 214
    virtual void playEmote(::std::string const&, bool const) /*override*/;

    // vIndex: 196
    virtual void resetRot() /*override*/;

    // vIndex: 9
    virtual void resetUserPos(bool) /*override*/;

    // vIndex: 21
    virtual void teleportTo(::Vec3 const&, bool, int, int, bool) /*override*/;

    // vIndex: 92
    virtual void changeDimension(::DimensionType toId) /*override*/;

    // vIndex: 91
    virtual void changeDimension(::ChangeDimensionPacket const&) /*override*/;

    // vIndex: 218
    virtual void setPlayerGameType(::GameType gameType) /*override*/;

    // vIndex: 93
    virtual ::ActorUniqueID getControllingPlayer() const /*override*/;

    // vIndex: 185
    virtual void _fireDimensionChanged() /*override*/;

    // vIndex: 194
    virtual bool isAutoJumpEnabled() const /*override*/;

    // vIndex: 174
    virtual bool setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 81
    virtual void setOffhandSlot(::ItemStack const& item) /*override*/;

    // vIndex: 74
    virtual void setArmor(::ArmorSlot slot, ::ItemStack const& item) /*override*/;

    // vIndex: 221
    virtual ::IMinecraftEventing* getEventing() const /*override*/;

    // vIndex: 222
    virtual uint getUserId() const /*override*/;

    // vIndex: 197
    virtual bool isInTrialMode() /*override*/;

    // vIndex: 244
    virtual void setAbilities(::LayeredAbilities const& newAbilities) /*override*/;

    // vIndex: 125
    virtual void die(::ActorDamageSource const& source) /*override*/;

    // vIndex: 109
    virtual void onEffectRemoved(::MobEffectInstance& effect) /*override*/;

    // vIndex: 223
    virtual void addExperience(int xp) /*override*/;

    // vIndex: 224
    virtual void addLevels(int levels) /*override*/;

    // vIndex: 229
    virtual bool isActorRelevant(::Actor const&) /*override*/;

    // vIndex: 71
    virtual void handleEntityEvent(::ActorEvent eventId, int data) /*override*/;

    // vIndex: 192
    virtual void checkMovementStats(::Vec3 const&) /*override*/;

    // vIndex: 193
    virtual ::HashedString getCurrentStructureFeature() const /*override*/;

    // vIndex: 230
    virtual bool isTeacher() const /*override*/;

    // vIndex: 233
    virtual void sendInventoryTransaction(::InventoryTransaction const&) const /*override*/;

    // vIndex: 234
    virtual void sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const /*override*/;

    // vIndex: 235
    virtual void sendNetworkPacket(::Packet& packet) const /*override*/;

    // vIndex: 236
    virtual ::PlayerEventCoordinator& getPlayerEventCoordinator() /*override*/;

    // vIndex: 127
    virtual void applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    ) /*override*/;

    // vIndex: 246
    virtual void destroyEditorPlayer() /*override*/;

    // vIndex: 245
    virtual ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> getEditorPlayer() const /*override*/;

    // vIndex: 240
    virtual void requestMissingSubChunk(::SubChunkPos const&) /*override*/;

    // vIndex: 241
    virtual uchar getMaxChunkBuildRadius() const /*override*/;

    // vIndex: 220
    virtual void _crit(::Actor& actor) /*override*/;

    // vIndex: 139
    virtual bool _hurt(::ActorDamageSource const&, float, bool, bool) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $reloadHardcodedClient(::ActorInitializationMethod);

    MCAPI void $prepareRegion(::ChunkSource& mainChunkSource);

    MCAPI void $suspendRegion();

    MCAPI void $destroyRegion();

    MCAPI void $tickWorld(::Tick const&);

    MCAPI void $frameUpdate(::FrameUpdateContextBase&);

    MCAPI ::std::vector<::ChunkPos> const& $getTickingOffsets() const;

    MCAPI void $normalTick();

    MCAPI bool $startRiding(::Actor& vehicle, bool forceRiding);

    MCAPI void $aiStep();

    MCAPI void $addAdditionalSaveData(::CompoundTag& tag) const;

    MCAPI void $readAdditionalSaveData(::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI void $deleteContainerManager();

    MCAPI void $openPortfolio();

    MCAPI void $openBook(int, bool, int, ::BlockActor*);

    MCAPI void $openChalkboard(::ChalkboardBlockActor&, bool);

    MCAPI void $openNpcInteractScreen(::std::shared_ptr<::INpcDialogueData> npc);

    MCAPI void $openTrading(::ActorUniqueID const&, bool);

    MCAPI void $openInventory();

    MCAPI void $setContainerData(::IContainerManager&, int, int);

    MCAPI void $slotChanged(::IContainerManager&, ::Container&, int, ::ItemStack const&, ::ItemStack const&, bool);

    MCAPI void $refreshContainer(::IContainerManager&);

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

    MCAPI void $swing();

    MCAPI void $setSneaking(bool value);

    MCAPI void $setSprinting(bool shouldSprint);

    MCAPI void $playEmote(::std::string const&, bool const);

    MCAPI void $resetRot();

    MCAPI void $resetUserPos(bool);

    MCAPI void $teleportTo(::Vec3 const&, bool, int, int, bool);

    MCAPI void $changeDimension(::DimensionType toId);

    MCAPI void $changeDimension(::ChangeDimensionPacket const&);

    MCAPI void $setPlayerGameType(::GameType gameType);

    MCAPI ::ActorUniqueID $getControllingPlayer() const;

    MCAPI void $_fireDimensionChanged();

    MCAPI bool $isAutoJumpEnabled() const;

    MCAPI bool $setItemSlot(::SharedTypes::Legacy::EquipmentSlot slot, ::ItemStack const& item);

    MCAPI void $setOffhandSlot(::ItemStack const& item);

    MCAPI void $setArmor(::ArmorSlot slot, ::ItemStack const& item);

    MCAPI ::IMinecraftEventing* $getEventing() const;

    MCAPI uint $getUserId() const;

    MCAPI bool $isInTrialMode();

    MCAPI void $setAbilities(::LayeredAbilities const& newAbilities);

    MCAPI void $die(::ActorDamageSource const& source);

    MCAPI void $onEffectRemoved(::MobEffectInstance& effect);

    MCAPI void $addExperience(int xp);

    MCAPI void $addLevels(int levels);

    MCAPI bool $isActorRelevant(::Actor const&);

    MCAPI void $handleEntityEvent(::ActorEvent eventId, int data);

    MCAPI void $checkMovementStats(::Vec3 const&);

    MCAPI ::HashedString $getCurrentStructureFeature() const;

    MCAPI bool $isTeacher() const;

    MCAPI void $sendInventoryTransaction(::InventoryTransaction const&) const;

    MCAPI void $sendComplexInventoryTransaction(::std::unique_ptr<::ComplexInventoryTransaction>) const;

    MCAPI void $sendNetworkPacket(::Packet& packet) const;

    MCAPI ::PlayerEventCoordinator& $getPlayerEventCoordinator();

    MCAPI void $applySnapshot(
        ::EntityContext const&                                   snapshotEntity,
        ::MovementDataExtractionUtility::SnapshotAccessor const& originalSnapshotEntity
    );

    MCAPI void $destroyEditorPlayer();

    MCAPI ::Bedrock::NonOwnerPointer<::Editor::IEditorPlayer> $getEditorPlayer() const;

    MCAPI void $requestMissingSubChunk(::SubChunkPos const&);

    MCAPI uchar $getMaxChunkBuildRadius() const;

    MCAPI void $_crit(::Actor& actor);

    MCAPI bool $_hurt(::ActorDamageSource const&, float, bool, bool);
    // NOLINTEND
};
