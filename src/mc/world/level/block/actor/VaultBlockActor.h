#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/item/ItemStack.h"
#include "mc/world/level/Tick.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class ILevel;
class Level;
class Player;
class SaveContext;
class Vec3;
struct ActorUniqueID;
// clang-format on

class VaultBlockActor : public ::BlockActor {
public:
    // VaultBlockActor inner types declare
    // clang-format off
    class Client;
    class Server;
    struct VaultClientData;
    struct VaultConfig;
    struct VaultServerData;
    struct VaultSharedData;
    // clang-format on

    // VaultBlockActor inner types define
    struct VaultConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string> lootTable;
        ::ll::TypedStorage<4, 4, float>          activationRange;
        ::ll::TypedStorage<4, 4, float>          deactivationRange;
        ::ll::TypedStorage<8, 152, ::ItemStack>  keyItem;
        ::ll::TypedStorage<8, 32, ::std::string> overrideLootTableToDisplay;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VaultConfig();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct VaultSharedData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 152, ::ItemStack>                    displayItem;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorRuntimeID>> connectedPlayers;
        ::ll::TypedStorage<4, 4, float>                            connectedParticlesRange;
        ::ll::TypedStorage<1, 1, bool>                             isSharedDataDirty;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VaultSharedData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct VaultClientData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float>            currentSpin;
        ::ll::TypedStorage<4, 4, float>            previousSpin;
        ::ll::TypedStorage<8, 24, ::WeakEntityRef> displayEntity;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VaultClientData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
        // NOLINTEND
    };

    struct VaultServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Tick>                          stateUpdateResumesAt;
        ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>>     itemsToEject;
        ::ll::TypedStorage<8, 24, ::std::vector<::ActorUniqueID>> rewardedPlayers;
        ::ll::TypedStorage<1, 1, bool>                            doesBlockNeedToBeSaved;
        ::ll::TypedStorage<8, 8, ::Tick>                          serverTick;
        ::ll::TypedStorage<8, 8, ::Tick>                          lastInsertFailTimestamp;
        ::ll::TypedStorage<4, 4, int>                             totalEjectionsNeeded;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VaultServerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class Server {
    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void cycleDisplayItemFromLootTable(
            ::BlockSource&                        region,
            ::VaultBlockState                     blockState,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData
        );

        MCAPI static void ejectResultItem(
            ::BlockSource&     region,
            ::BlockPos         blockPos,
            ::ItemStack const& item,
            float              ejectionSoundProgress
        );

        MCAPI static ::ItemStack
        getRandomDisplayItemFromLootTable(::BlockSource& region, ::std::string const& lootTable);

        MCAPI static ::std::vector<::ItemStack> getRandomLootTableItems(
            ::Level&             level,
            ::DimensionType      dimensionType,
            ::std::string const& lootTableName,
            ::Player&            player,
            ::BlockPos           pos
        );

        MCAPI static void onTransitionBetweenStates(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                     oldState,
            ::VaultBlockState                     newState
        );

        MCAPI static void playInsertFailSound(
            ::BlockSource&                         region,
            ::BlockPos                             pos,
            ::VaultBlockActor::VaultServerData&    serverData,
            ::SharedTypes::Legacy::LevelSoundEvent sound
        );

        MCAPI static void tick(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultServerData&   serverData,
            ::VaultBlockActor::VaultSharedData&   sharedData
        );

        MCAPI static ::VaultBlockState tickStateAndGetNext(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultServerData&   serverData,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                     oldState
        );

        MCAPI static void tryInsertKey(
            ::BlockSource&                        region,
            ::Player&                             player,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockActor::VaultServerData&   serverData
        );

        MCAPI static void updateConnectedPlayersWithinRange(
            ::BlockSource&                            region,
            ::BlockPos                                pos,
            ::VaultBlockActor::VaultServerData const& serverData,
            ::VaultBlockActor::VaultSharedData&       sharedData,
            float                                     range
        );
        // NOLINTEND
    };

    class Client {
    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void emitConnectedParticles(
            ::BlockSource&                            region,
            ::BlockPos                                pos,
            ::VaultBlockActor::VaultSharedData const& sharedData
        );

        MCAPI static void emitIdleParticles(
            ::BlockSource const&                      region,
            ::VaultBlockActor::VaultSharedData const& sharedData,
            ::BlockPos                                pos
        );

        MCAPI static void
        playIdleSounds(::BlockSource& region, ::BlockPos pos, ::VaultBlockActor::VaultSharedData const& sharedData);

        MCAPI static void removeDisplayEntity(::VaultBlockActor::VaultClientData& clientData);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::VaultBlockActor::VaultConfig>     mConfig;
    ::ll::TypedStorage<8, 32, ::VaultBlockActor::VaultClientData>  mClientData;
    ::ll::TypedStorage<8, 184, ::VaultBlockActor::VaultSharedData> mSharedData;
    ::ll::TypedStorage<8, 88, ::VaultBlockActor::VaultServerData>  mServerData;
    // NOLINTEND

public:
    // prevent constructor by default
    VaultBlockActor();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VaultBlockActor() /*override*/ = default;

    // vIndex: 8
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 44
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 45
    virtual void _onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VaultBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
    _javaSpawnItem(::BlockSource& region, ::ItemStack const& item, int accuracy, uchar direction, ::Vec3 position);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
