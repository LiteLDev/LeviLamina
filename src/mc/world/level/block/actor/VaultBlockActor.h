#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/actor/BlockActor.h"

// auto generated forward declare list
// clang-format off
class BlockActorDataPacket;
class BlockPos;
class BlockSource;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class ILevel;
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
        MCNAPI ~VaultConfig();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI ~VaultSharedData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI ~VaultClientData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
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
        MCNAPI ~VaultServerData();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class Server {
    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static void cycleDisplayItemFromLootTable(
            ::BlockSource&                        region,
            ::VaultBlockState                     blockState,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData
        );

        MCNAPI static void ejectResultItem(
            ::BlockSource&     region,
            ::BlockPos         blockPos,
            ::ItemStack const& item,
            float              ejectionSoundProgress
        );

        MCNAPI static ::ItemStack
        getRandomDisplayItemFromLootTable(::BlockSource& region, ::std::string const& lootTable);

        MCNAPI static ::std::vector<::ItemStack> getRandomLootTableItems(
            ::Level&             level,
            ::DimensionType      dimensionType,
            ::std::string const& lootTableName,
            ::Player&            player,
            ::BlockPos           pos
        );

        MCNAPI static void onTransitionBetweenStates(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                     oldState,
            ::VaultBlockState                     newState
        );

        MCNAPI static void playInsertFailSound(
            ::BlockSource&                         region,
            ::BlockPos                             pos,
            ::VaultBlockActor::VaultServerData&    serverData,
            ::SharedTypes::Legacy::LevelSoundEvent sound
        );

        MCNAPI static void tick(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultServerData&   serverData,
            ::VaultBlockActor::VaultSharedData&   sharedData
        );

        MCNAPI static ::VaultBlockState tickStateAndGetNext(
            ::BlockSource&                        region,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultServerData&   serverData,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                     oldState
        );

        MCNAPI static void tryInsertKey(
            ::BlockSource&                        region,
            ::Player&                             player,
            ::BlockPos                            pos,
            ::VaultBlockActor::VaultConfig const& config,
            ::VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockActor::VaultServerData&   serverData
        );

        MCNAPI static void updateConnectedPlayersWithinRange(
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
        MCNAPI static void emitConnectedParticles(
            ::BlockSource&                            region,
            ::BlockPos                                pos,
            ::VaultBlockActor::VaultSharedData const& sharedData
        );

        MCNAPI static void emitIdleParticles(
            ::BlockSource const&                      region,
            ::VaultBlockActor::VaultSharedData const& sharedData,
            ::BlockPos                                pos
        );

        MCNAPI static void
        playIdleSounds(::BlockSource& region, ::BlockPos pos, ::VaultBlockActor::VaultSharedData const& sharedData);

        MCNAPI static void removeDisplayEntity(::VaultBlockActor::VaultClientData& clientData);
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
    MCNAPI explicit VaultBlockActor(::BlockPos const& pos);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void
    _javaSpawnItem(::BlockSource& region, ::ItemStack const& item, int position, uchar accuracy, ::Vec3 direction);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $tick(::BlockSource& region);

    MCNAPI void $load(::ILevel& level, ::CompoundTag const& tag, ::DataLoadHelper& dataLoadHelper);

    MCNAPI bool $save(::CompoundTag& tag, ::SaveContext const& saveContext) const;

    MCNAPI ::std::unique_ptr<::BlockActorDataPacket> $_getUpdatePacket(::BlockSource&);

    MCNAPI void $_onUpdatePacket(::CompoundTag const& tag, ::BlockSource& region);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
