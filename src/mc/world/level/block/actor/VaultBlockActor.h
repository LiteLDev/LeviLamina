#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/actor/BlockActor.h"

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
        MCAPI static void emitConnectedParticles(
            class BlockSource&                             region,
            class BlockPos                                 pos,
            struct VaultBlockActor::VaultSharedData const& sharedData
        );

        MCAPI static void emitIdleParticles(
            class BlockSource const&                       region,
            struct VaultBlockActor::VaultSharedData const& sharedData,
            class BlockPos                                 pos
        );

        MCAPI static class Vec3 randomPosInsideCage(class BlockPos pos, class Random& random);

        MCAPI static void removeDisplayEntity(struct VaultBlockActor::VaultClientData& clientData);

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
        MCAPI static void cycleDisplayItemFromLootTable(
            class BlockSource&                         region,
            ::VaultBlockState                          blockState,
            struct VaultBlockActor::VaultConfig const& config,
            struct VaultBlockActor::VaultSharedData&   sharedData
        );

        MCAPI static class ItemStack
        getRandomDisplayItemFromLootTable(class BlockSource& region, std::string const& lootTable);

        MCAPI static std::vector<class ItemStack> getRandomLootTableItems(
            class Level&       level,
            DimensionType      dimensionType,
            std::string const& lootTableName,
            class Player&      player
        );

        MCAPI static void onTransitionBetweenStates(
            class BlockSource&                         region,
            class BlockPos                             pos,
            struct VaultBlockActor::VaultConfig const& config,
            struct VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                          oldState,
            ::VaultBlockState                          newState
        );

        MCAPI static void setVaultState(
            class BlockSource&                         region,
            class BlockPos                             pos,
            class Block const&                         oldBlock,
            ::VaultBlockState                          newState,
            ::VaultBlockState                          currentState,
            struct VaultBlockActor::VaultConfig const& config,
            struct VaultBlockActor::VaultSharedData&   sharedData
        );

        MCAPI static void tick(
            class BlockSource&                         region,
            class BlockPos                             pos,
            struct VaultBlockActor::VaultConfig const& config,
            struct VaultBlockActor::VaultServerData&   serverData,
            struct VaultBlockActor::VaultSharedData&   sharedData
        );

        MCAPI static ::VaultBlockState tickStateAndGetNext(
            class BlockSource&                         region,
            class BlockPos                             pos,
            struct VaultBlockActor::VaultConfig const& config,
            struct VaultBlockActor::VaultServerData&   serverData,
            struct VaultBlockActor::VaultSharedData&   sharedData,
            ::VaultBlockState                          oldState
        );

        MCAPI static void tryInsertKey(
            class BlockSource&                         region,
            class Player&                              player,
            class BlockPos                             pos,
            struct VaultBlockActor::VaultConfig const& config,
            struct VaultBlockActor::VaultSharedData&   sharedData,
            struct VaultBlockActor::VaultServerData&   serverData
        );

        MCAPI static void updateConnectedPlayersWithinRange(
            class BlockSource&                             region,
            class BlockPos                                 pos,
            struct VaultBlockActor::VaultServerData const& serverData,
            struct VaultBlockActor::VaultSharedData&       sharedData,
            float                                          range
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
    virtual void load(class Level& level, class CompoundTag const& tag, class DataLoadHelper& dataLoadHelper);

    // vIndex: 2
    virtual bool save(class CompoundTag& tag) const;

    // vIndex: 7
    virtual void tick(class BlockSource& region);

    // vIndex: 40
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41
    virtual void _onUpdatePacket(class CompoundTag const& tag, class BlockSource& region);

    MCAPI explicit VaultBlockActor(class BlockPos const& pos);

    MCAPI void tryInsertKey(class BlockSource& region, class Player& player);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static ::VaultBlockState _getCurrentState(class Block const& block);

    MCAPI static bool _isOminous(class BlockSource const& region, class BlockPos pos);

    MCAPI static void _javaSpawnItem(
        class BlockSource&     region,
        class ItemStack const& item,
        int                    accuracy,
        uchar                  direction,
        class Vec3             position
    );

    // NOLINTEND
};
