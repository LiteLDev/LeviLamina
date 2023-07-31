#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/OwnerPtrT.h"
#include "mc/common/wrapper/StackRefResultT.h"
#include "mc/common/wrapper/WeakRefT.h"
#include "mc/world/AutomaticID.h"

class VolumeEntityManagerServer {
public:
    // VolumeEntityManagerServer inner types define
    enum class CreateVolumeResult {};

public:
    // prevent constructor by default
    VolumeEntityManagerServer& operator=(VolumeEntityManagerServer const&) = delete;
    VolumeEntityManagerServer(VolumeEntityManagerServer const&)            = delete;
    VolumeEntityManagerServer()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0VolumeEntityManagerServer\@\@QEAA\@V?$StackRefResultT\@UEntityRegistryRefTraits\@\@\@\@\@Z
     */
    MCAPI VolumeEntityManagerServer(class StackRefResultT<struct EntityRegistryRefTraits>);
    /**
     * @symbol
     * ?createVolume\@VolumeEntityManagerServer\@\@QEAA?AU?$pair\@W4CreateVolumeResult\@VolumeEntityManagerServer\@\@V?$StackRefResultT\@UEntityRefTraits\@\@\@\@\@std\@\@AEAVLevelStorage\@\@AEAVPacketSender\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEBVBlockPos\@\@3V?$AutomaticID\@VDimension\@\@H\@\@2\@Z
     */
    MCAPI std::pair<
        enum class VolumeEntityManagerServer::CreateVolumeResult,
        class StackRefResultT<struct EntityRefTraits>>
    createVolume(class LevelStorage&, class PacketSender&, std::string const&, class BlockPos const&, class BlockPos const&, class AutomaticID<class Dimension, int>, std::string const&);
    /**
     * @symbol
     * ?getAllVolumesOverlappingChunkPosition\@VolumeEntityManagerServer\@\@QEBA?AV?$vector\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$WeakRefT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@AEBVChunkPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<class WeakRefT<struct EntityRefTraits>>
          getAllVolumesOverlappingChunkPosition(class ChunkPos const&, class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ?loadVolumeFiles\@VolumeEntityManagerServer\@\@QEAAXAEBVResourcePackManager\@\@_N\@Z
     */
    MCAPI void loadVolumeFiles(class ResourcePackManager const&, bool);
    /**
     * @symbol ?loadVolumeInstances\@VolumeEntityManagerServer\@\@QEAAXAEBVLevelStorage\@\@_N\@Z
     */
    MCAPI void loadVolumeInstances(class LevelStorage const&, bool);
    /**
     * @symbol
     * ?removeAllVolumes\@VolumeEntityManagerServer\@\@QEAA?AV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>>
          removeAllVolumes(class LevelStorage&, class AutomaticID<class Dimension, int>, class PacketSender&);
    /**
     * @symbol
     * ?removeVolumes\@VolumeEntityManagerServer\@\@QEAA?AV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>>
    removeVolumes(class LevelStorage&, std::string const&, class AutomaticID<class Dimension, int>, class PacketSender&);
    /**
     * @symbol
     * ?removeVolumes\@VolumeEntityManagerServer\@\@QEAA?AV?$vector\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@V?$allocator\@V?$OwnerPtrT\@UEntityRefTraits\@\@\@\@\@std\@\@\@std\@\@AEAVLevelStorage\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI std::vector<class OwnerPtrT<struct EntityRefTraits>>
    removeVolumes(class LevelStorage&, class BlockPos const&, class AutomaticID<class Dimension, int>, class PacketSender&);
    /**
     * @symbol
     * ?sendAllVolumesToClient\@VolumeEntityManagerServer\@\@QEBAXAEBVUserEntityIdentifierComponent\@\@AEBVNetworkIdentifier\@\@AEAVPacketSender\@\@\@Z
     */
    MCAPI void
    sendAllVolumesToClient(class UserEntityIdentifierComponent const&, class NetworkIdentifier const&, class PacketSender&)
        const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_findUsableName\@VolumeEntityManagerServer\@\@AEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::string _findUsableName(class AutomaticID<class Dimension, int>) const;
    // NOLINTEND
};
