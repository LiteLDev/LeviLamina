#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResourcePackTransmissionManager {

public:
    // prevent constructor by default
    ResourcePackTransmissionManager& operator=(ResourcePackTransmissionManager const&) = delete;
    ResourcePackTransmissionManager(ResourcePackTransmissionManager const&)            = delete;
    ResourcePackTransmissionManager()                                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0ResourcePackTransmissionManager\@\@QEAA\@AEAVScheduler\@\@\@Z
     */
    MCAPI ResourcePackTransmissionManager(class Scheduler&);
    /**
     * @symbol ?cleanupResourcePackManager\@ResourcePackTransmissionManager\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const&);
    /**
     * @symbol
     * ?getResourcePackUploadManager\@ResourcePackTransmissionManager\@\@QEAAAEAVResourcePackFileUploadManager\@\@AEAVPacketSender\@\@AEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ResourcePackFileUploadManager&
    getResourcePackUploadManager(class PacketSender&, class NetworkIdentifier const&, std::string const&);
    /**
     * @symbol ?update\@ResourcePackTransmissionManager\@\@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @symbol ??1ResourcePackTransmissionManager\@\@QEAA\@XZ
     */
    MCAPI ~ResourcePackTransmissionManager();
    // NOLINTEND
};
