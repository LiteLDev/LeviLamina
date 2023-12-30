#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackTransmissionManager {
public:
    // prevent constructor by default
    ResourcePackTransmissionManager& operator=(ResourcePackTransmissionManager const&);
    ResourcePackTransmissionManager(ResourcePackTransmissionManager const&);
    ResourcePackTransmissionManager();

public:
    // NOLINTBEGIN
    // symbol: ??0ResourcePackTransmissionManager@@QEAA@AEAVScheduler@@@Z
    MCAPI explicit ResourcePackTransmissionManager(class Scheduler& scheduler);

    // symbol: ?cleanupResourcePackManager@ResourcePackTransmissionManager@@QEAAXAEBVNetworkIdentifier@@@Z
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const& source);

    // symbol:
    // ?getResourcePackUploadManager@ResourcePackTransmissionManager@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class ResourcePackFileUploadManager& getResourcePackUploadManager(
        class PacketSender&            packetSender,
        class NetworkIdentifier const& source,
        std::string const&             resourceName
    );

    // symbol: ?update@ResourcePackTransmissionManager@@QEAAXXZ
    MCAPI void update();

    // symbol: ??1ResourcePackTransmissionManager@@QEAA@XZ
    MCAPI ~ResourcePackTransmissionManager();

    // NOLINTEND
};
