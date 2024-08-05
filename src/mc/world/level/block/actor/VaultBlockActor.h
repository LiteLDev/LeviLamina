#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/block/actor/BlockActor.h"
#include "mc/world/level/block/states/VaultBlockState.h"

class VaultBlockActor : public ::BlockActor {
public:
    // VaultBlockActor inner types declare
    // clang-format off
    struct VaultSharedData;
    class Client;
    struct VaultServerData;
    class Server;
    struct VaultClientData;
    struct VaultConfig;
    // clang-format on

    // VaultBlockActor inner types define
    struct VaultSharedData {
    public:
        // prevent constructor by default
        VaultSharedData& operator=(VaultSharedData const&);
        VaultSharedData(VaultSharedData const&);
        VaultSharedData();

    public:
        // NOLINTBEGIN
        MCAPI ~VaultSharedData();

        // NOLINTEND
    };

    class Client {
    public:
        // prevent constructor by default
        Client& operator=(Client const&);
        Client(Client const&);
        Client();

    public:
        // NOLINTBEGIN
        MCAPI static void
        emitConnectedParticles(class BlockSource&, class BlockPos, struct VaultBlockActor::VaultSharedData const&);

        MCAPI static void
        emitIdleParticles(class BlockSource const&, struct VaultBlockActor::VaultSharedData const&, class BlockPos);

        MCAPI static class Vec3 randomPosInsideCage(class BlockPos, class Random&);

        MCAPI static void removeDisplayEntity(struct VaultBlockActor::VaultClientData&);

        // NOLINTEND
    };

    struct VaultServerData {
    public:
        // prevent constructor by default
        VaultServerData& operator=(VaultServerData const&);
        VaultServerData(VaultServerData const&);
        VaultServerData();

    public:
        // NOLINTBEGIN
        MCAPI ~VaultServerData();

        // NOLINTEND
    };

    class Server {
    public:
        // prevent constructor by default
        Server& operator=(Server const&);
        Server(Server const&);
        Server();

    public:
        // NOLINTBEGIN
        MCAPI static void
        cycleDisplayItemFromLootTable(class BlockSource&, ::VaultBlockState, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultSharedData&);

        MCAPI static class ItemStack getRandomDisplayItemFromLootTable(class BlockSource&, std::string const&);

        MCAPI static std::vector<class ItemStack>
        getRandomLootTableItems(class Level&, DimensionType, std::string const&, class Player&);

        MCAPI static void onTransitionBetweenStates(
            class BlockSource&,
            class BlockPos,
            struct VaultBlockActor::VaultConfig const&,
            struct VaultBlockActor::VaultSharedData&,
            ::VaultBlockState,
            ::VaultBlockState
        );

        MCAPI static void
        setVaultState(class BlockSource&, class BlockPos, class Block const&, ::VaultBlockState, ::VaultBlockState, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultSharedData&);

        MCAPI static void
        tick(class BlockSource&, class BlockPos, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultServerData&, struct VaultBlockActor::VaultSharedData&);

        MCAPI static ::VaultBlockState tickStateAndGetNext(
            class BlockSource&,
            class BlockPos,
            struct VaultBlockActor::VaultConfig const&,
            struct VaultBlockActor::VaultServerData&,
            struct VaultBlockActor::VaultSharedData&,
            ::VaultBlockState
        );

        MCAPI static void
        tryInsertKey(class BlockSource&, class Player&, class BlockPos, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultSharedData&, struct VaultBlockActor::VaultServerData&);

        MCAPI static void updateConnectedPlayersWithinRange(
            class BlockSource&,
            class BlockPos,
            struct VaultBlockActor::VaultServerData const&,
            struct VaultBlockActor::VaultSharedData&,
            float
        );

        // NOLINTEND
    };

    struct VaultClientData {
    public:
        // prevent constructor by default
        VaultClientData& operator=(VaultClientData const&);
        VaultClientData(VaultClientData const&);
        VaultClientData();

    public:
        // NOLINTBEGIN
        MCAPI ~VaultClientData();

        // NOLINTEND
    };

    struct VaultConfig {
    public:
        // prevent constructor by default
        VaultConfig& operator=(VaultConfig const&);
        VaultConfig(VaultConfig const&);
        VaultConfig();

    public:
        // NOLINTBEGIN
        MCAPI ~VaultConfig();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    VaultBlockActor& operator=(VaultBlockActor const&);
    VaultBlockActor(VaultBlockActor const&);
    VaultBlockActor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VaultBlockActor();

    // vIndex: 1
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7
    virtual void tick(class BlockSource&);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    MCAPI explicit VaultBlockActor(class BlockPos const&);

    MCAPI void tryInsertKey(class BlockSource&, class Player&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static ::VaultBlockState _getCurrentState(class Block const&);

    MCAPI static bool _isOminous(class BlockSource const&, class BlockPos);

    MCAPI static void _javaSpawnItem(class BlockSource&, class ItemStack const&, int, uchar, class Vec3);

    // NOLINTEND
};
