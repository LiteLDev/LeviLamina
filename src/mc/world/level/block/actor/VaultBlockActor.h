#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class ItemStack;
class Level;
class Player;
class SaveContext;
class Vec3;
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
        ::ll::UntypedStorage<8, 32>  mUnk517f35;
        ::ll::UntypedStorage<4, 4>   mUnk7ce29f;
        ::ll::UntypedStorage<4, 4>   mUnkbfd63a;
        ::ll::UntypedStorage<8, 152> mUnk4b0800;
        ::ll::UntypedStorage<8, 32>  mUnkbcbb2f;
        // NOLINTEND

    public:
        // prevent constructor by default
        VaultConfig& operator=(VaultConfig const&);
        VaultConfig(VaultConfig const&);
        VaultConfig();

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
        ::ll::UntypedStorage<8, 152> mUnkd8e898;
        ::ll::UntypedStorage<8, 24>  mUnke36817;
        ::ll::UntypedStorage<4, 4>   mUnk6e6283;
        ::ll::UntypedStorage<1, 1>   mUnke01bb8;
        // NOLINTEND

    public:
        // prevent constructor by default
        VaultSharedData& operator=(VaultSharedData const&);
        VaultSharedData(VaultSharedData const&);
        VaultSharedData();

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
        ::ll::UntypedStorage<4, 4>  mUnk93e1fe;
        ::ll::UntypedStorage<4, 4>  mUnk3807e9;
        ::ll::UntypedStorage<8, 24> mUnk2adaf3;
        // NOLINTEND

    public:
        // prevent constructor by default
        VaultClientData& operator=(VaultClientData const&);
        VaultClientData(VaultClientData const&);
        VaultClientData();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~VaultClientData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct VaultServerData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk687d1c;
        ::ll::UntypedStorage<8, 24> mUnk7e484a;
        ::ll::UntypedStorage<8, 24> mUnk5bea80;
        ::ll::UntypedStorage<1, 1>  mUnkb532c3;
        ::ll::UntypedStorage<8, 8>  mUnkdb75ef;
        ::ll::UntypedStorage<8, 8>  mUnkc01ec6;
        ::ll::UntypedStorage<4, 4>  mUnkea8040;
        // NOLINTEND

    public:
        // prevent constructor by default
        VaultServerData& operator=(VaultServerData const&);
        VaultServerData(VaultServerData const&);
        VaultServerData();

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
        // prevent constructor by default
        Server& operator=(Server const&);
        Server(Server const&);
        Server();

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static void cycleDisplayItemFromLootTable(
            ::BlockSource&                        region,
            ::VaultBlockState                     blockState,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData
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

        MCAPI static void setVaultState(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::Block const&                        oldBlock,
            ::VaultBlockState                     newState,
            ::VaultBlockState                     currentState,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData
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

        MCAPI static void unlock(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultServerData&   serverData,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::std::vector<::ItemStack>&&          itemsToEject
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
        // prevent constructor by default
        Client& operator=(Client const&);
        Client(Client const&);
        Client();

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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VaultBlockActor() /*override*/;

    // vIndex: 7
    virtual void tick(::BlockSource& region) /*override*/;

    // vIndex: 1
    virtual void load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper) /*override*/;

    // vIndex: 2
    virtual bool save(::CompoundTag& tag, ::SaveContext const& saveContext) const /*override*/;

    // vIndex: 43
    virtual ::std::unique_ptr<::BlockActorDataPacket> _getUpdatePacket(::BlockSource&) /*override*/;

    // vIndex: 44
    virtual void _onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit VaultBlockActor(::BlockPos const& pos);

    MCAPI void tryInsertKey(::BlockSource& region, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::VaultBlockState _getCurrentState(::Block const& block);

    MCAPI static void
    _javaSpawnItem(::BlockSource& region, ::ItemStack const& item, int accuracy, uchar direction, ::Vec3 position);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $tick(::BlockSource& region);

    MCAPI void $load(::Level& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
