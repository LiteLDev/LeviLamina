/**
 * @file  VolumeEntityManagerServer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeEntityManagerServer.
 *
 */
class VolumeEntityManagerServer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEENTITYMANAGERSERVER
public:
    class VolumeEntityManagerServer& operator=(class VolumeEntityManagerServer const &) = delete;
    VolumeEntityManagerServer(class VolumeEntityManagerServer const &) = delete;
    VolumeEntityManagerServer() = delete;
#endif

public:
    /**
     * @hash   296241077
     * @symbol ??0VolumeEntityManagerServer@@QEAA@V?$StackRefResultT@UEntityRegistryRefTraits@@@@@Z
     */
    MCAPI VolumeEntityManagerServer(class StackRefResultT<struct EntityRegistryRefTraits>);
    /**
     * @hash   500861694
     * @symbol ?createVolume@VolumeEntityManagerServer@@QEAA?AU?$pair@W4CreateVolumeResult@VolumeEntityManagerServer@@V?$StackRefResultT@UEntityRefTraits@@@@@std@@AEAVLevelStorage@@AEAVPacketSender@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AEBVBlockPos@@3V?$AutomaticID@VDimension@@H@@2@Z
     */
    MCAPI struct std::pair<enum VolumeEntityManagerServer::CreateVolumeResult, class StackRefResultT<struct EntityRefTraits>> createVolume(class LevelStorage &, class PacketSender &, std::string const &, class BlockPos const &, class BlockPos const &, class AutomaticID<class Dimension, int>, std::string const &);
    /**
     * @hash   -768786510
     * @symbol ?getAllVolumesOverlappingChunkPosition@VolumeEntityManagerServer@@QEBA?AV?$vector@V?$WeakRefT@UEntityRefTraits@@@@V?$allocator@V?$WeakRefT@UEntityRefTraits@@@@@std@@@std@@AEBVChunkPos@@V?$AutomaticID@VDimension@@H@@@Z
     */
    MCAPI std::vector<class WeakRefT<struct EntityRefTraits>> getAllVolumesOverlappingChunkPosition(class ChunkPos const &, class AutomaticID<class Dimension, int>) const;
    /**
     * @hash   1637438241
     * @symbol ?loadVolumeFiles@VolumeEntityManagerServer@@QEAAXAEBVResourcePackManager@@_N@Z
     */
    MCAPI void loadVolumeFiles(class ResourcePackManager const &, bool);
    /**
     * @hash   -1344450675
     * @symbol ?loadVolumeInstances@VolumeEntityManagerServer@@QEAAXAEBVLevelStorage@@_N@Z
     */
    MCAPI void loadVolumeInstances(class LevelStorage const &, bool);
    /**
     * @hash   -1188433395
     * @symbol ?removeAllVolumes@VolumeEntityManagerServer@@QEAA?AV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@AEAVLevelStorage@@V?$AutomaticID@VDimension@@H@@AEAVPacketSender@@@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeAllVolumes(class LevelStorage &, class AutomaticID<class Dimension, int>, class PacketSender &);
    /**
     * @hash   -728543358
     * @symbol ?removeVolumes@VolumeEntityManagerServer@@QEAA?AV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@AEAVLevelStorage@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@V?$AutomaticID@VDimension@@H@@AEAVPacketSender@@@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeVolumes(class LevelStorage &, std::string const &, class AutomaticID<class Dimension, int>, class PacketSender &);
    /**
     * @hash   1611513674
     * @symbol ?removeVolumes@VolumeEntityManagerServer@@QEAA?AV?$vector@V?$OwnerPtrT@UEntityRefTraits@@@@V?$allocator@V?$OwnerPtrT@UEntityRefTraits@@@@@std@@@std@@AEAVLevelStorage@@AEBVBlockPos@@V?$AutomaticID@VDimension@@H@@AEAVPacketSender@@@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>> removeVolumes(class LevelStorage &, class BlockPos const &, class AutomaticID<class Dimension, int>, class PacketSender &);
    /**
     * @hash   -325110892
     * @symbol ?sendAllVolumesToClient@VolumeEntityManagerServer@@QEBAXAEBVUserEntityIdentifierComponent@@AEBVNetworkIdentifier@@AEAVPacketSender@@@Z
     */
    MCAPI void sendAllVolumesToClient(class UserEntityIdentifierComponent const &, class NetworkIdentifier const &, class PacketSender &) const;

};