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
        // symbol: ??1VaultSharedData@VaultBlockActor@@QEAA@XZ
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
        // symbol:
        // ?emitConnectedParticles@Client@VaultBlockActor@@SAXAEAVBlockSource@@VBlockPos@@AEBUVaultSharedData@2@@Z
        MCAPI static void
        emitConnectedParticles(class BlockSource&, class BlockPos, struct VaultBlockActor::VaultSharedData const&);

        // symbol: ?emitIdleParticles@Client@VaultBlockActor@@SAXAEBVBlockSource@@AEBUVaultSharedData@2@VBlockPos@@@Z
        MCAPI static void
        emitIdleParticles(class BlockSource const&, struct VaultBlockActor::VaultSharedData const&, class BlockPos);

        // symbol: ?randomPosInsideCage@Client@VaultBlockActor@@SA?AVVec3@@VBlockPos@@AEAVRandom@@@Z
        MCAPI static class Vec3 randomPosInsideCage(class BlockPos, class Random&);

        // symbol: ?removeDisplayEntity@Client@VaultBlockActor@@SAXAEAUVaultClientData@2@@Z
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
        // symbol: ??1VaultServerData@VaultBlockActor@@QEAA@XZ
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
        // symbol:
        // ?cycleDisplayItemFromLootTable@Server@VaultBlockActor@@SAXAEAVBlockSource@@W4VaultBlockState@@AEBUVaultConfig@2@AEAUVaultSharedData@2@@Z
        MCAPI static void
        cycleDisplayItemFromLootTable(class BlockSource&, ::VaultBlockState, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultSharedData&);

        // symbol:
        // ?getRandomDisplayItemFromLootTable@Server@VaultBlockActor@@SA?AVItemStack@@AEAVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
        MCAPI static class ItemStack getRandomDisplayItemFromLootTable(class BlockSource&, std::string const&);

        // symbol:
        // ?getRandomLootTableItems@Server@VaultBlockActor@@SA?AV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEAVLevel@@V?$AutomaticID@VDimension@@H@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@AEAVPlayer@@@Z
        MCAPI static std::vector<class ItemStack>
        getRandomLootTableItems(class Level&, DimensionType, std::string const&, class Player&);

        // symbol:
        // ?onTransitionBetweenStates@Server@VaultBlockActor@@SAXAEAVBlockSource@@VBlockPos@@AEBUVaultConfig@2@AEAUVaultSharedData@2@W4VaultBlockState@@4@Z
        MCAPI static void onTransitionBetweenStates(
            class BlockSource&,
            class BlockPos,
            struct VaultBlockActor::VaultConfig const&,
            struct VaultBlockActor::VaultSharedData&,
            ::VaultBlockState,
            ::VaultBlockState
        );

        // symbol:
        // ?setVaultState@Server@VaultBlockActor@@SAXAEAVBlockSource@@VBlockPos@@AEBVBlock@@W4VaultBlockState@@3AEBUVaultConfig@2@AEAUVaultSharedData@2@@Z
        MCAPI static void
        setVaultState(class BlockSource&, class BlockPos, class Block const&, ::VaultBlockState, ::VaultBlockState, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultSharedData&);

        // symbol:
        // ?tick@Server@VaultBlockActor@@SAXAEAVBlockSource@@VBlockPos@@AEBUVaultConfig@2@AEAUVaultServerData@2@AEAUVaultSharedData@2@@Z
        MCAPI static void
        tick(class BlockSource&, class BlockPos, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultServerData&, struct VaultBlockActor::VaultSharedData&);

        // symbol:
        // ?tickStateAndGetNext@Server@VaultBlockActor@@SA?AW4VaultBlockState@@AEAVBlockSource@@VBlockPos@@AEBUVaultConfig@2@AEAUVaultServerData@2@AEAUVaultSharedData@2@W43@@Z
        MCAPI static ::VaultBlockState tickStateAndGetNext(
            class BlockSource&,
            class BlockPos,
            struct VaultBlockActor::VaultConfig const&,
            struct VaultBlockActor::VaultServerData&,
            struct VaultBlockActor::VaultSharedData&,
            ::VaultBlockState
        );

        // symbol:
        // ?tryInsertKey@Server@VaultBlockActor@@SAXAEAVBlockSource@@AEAVPlayer@@VBlockPos@@AEBUVaultConfig@2@AEAUVaultSharedData@2@AEAUVaultServerData@2@@Z
        MCAPI static void
        tryInsertKey(class BlockSource&, class Player&, class BlockPos, struct VaultBlockActor::VaultConfig const&, struct VaultBlockActor::VaultSharedData&, struct VaultBlockActor::VaultServerData&);

        // symbol:
        // ?updateConnectedPlayersWithinRange@Server@VaultBlockActor@@SAXAEAVBlockSource@@VBlockPos@@AEBUVaultServerData@2@AEAUVaultSharedData@2@M@Z
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
        // symbol: ??1VaultClientData@VaultBlockActor@@QEAA@XZ
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
        // symbol: ??1VaultConfig@VaultBlockActor@@QEAA@XZ
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
    // vIndex: 0, symbol: ??1VaultBlockActor@@UEAA@XZ
    virtual ~VaultBlockActor();

    // vIndex: 1, symbol: ?load@VaultBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);

    // vIndex: 2, symbol: ?save@VaultBlockActor@@UEBA_NAEAVCompoundTag@@@Z
    virtual bool save(class CompoundTag&) const;

    // vIndex: 7, symbol: ?tick@VaultBlockActor@@UEAAXAEAVBlockSource@@@Z
    virtual void tick(class BlockSource&);

    // vIndex: 40, symbol:
    // ?_getUpdatePacket@VaultBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);

    // vIndex: 41, symbol: ?_onUpdatePacket@VaultBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);

    // symbol: ??0VaultBlockActor@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit VaultBlockActor(class BlockPos const&);

    // symbol: ?tryInsertKey@VaultBlockActor@@QEAAXAEAVBlockSource@@AEAVPlayer@@@Z
    MCAPI void tryInsertKey(class BlockSource&, class Player&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getCurrentState@VaultBlockActor@@CA?AW4VaultBlockState@@AEBVBlock@@@Z
    MCAPI static ::VaultBlockState _getCurrentState(class Block const&);

    // symbol: ?_javaSpawnItem@VaultBlockActor@@CAXAEAVBlockSource@@AEBVItemStack@@HEVVec3@@@Z
    MCAPI static void _javaSpawnItem(class BlockSource&, class ItemStack const&, int, uchar, class Vec3);

    // NOLINTEND
};
