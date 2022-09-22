/**
 * @file  ResourcePackTransmissionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ResourcePackTransmissionManager.
 *
 */
class ResourcePackTransmissionManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESOURCEPACKTRANSMISSIONMANAGER
public:
    class ResourcePackTransmissionManager& operator=(class ResourcePackTransmissionManager const &) = delete;
    ResourcePackTransmissionManager(class ResourcePackTransmissionManager const &) = delete;
    ResourcePackTransmissionManager() = delete;
#endif

public:
    /**
     * @hash   1013266613
     * @symbol ??0ResourcePackTransmissionManager@@QEAA@AEAVScheduler@@@Z
     */
    MCAPI ResourcePackTransmissionManager(class Scheduler &);
    /**
     * @hash   256673312
     * @symbol ?cleanupResourcePackManager@ResourcePackTransmissionManager@@QEAAXAEBVNetworkIdentifier@@@Z
     */
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const &);
    /**
     * @hash   430511277
     * @symbol ?getResourcePackUploadManager@ResourcePackTransmissionManager@@QEAAAEAVResourcePackFileUploadManager@@AEAVPacketSender@@AEBVNetworkIdentifier@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @hash   -1999334219
     * @symbol ?update@ResourcePackTransmissionManager@@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @hash   -1954437746
     * @symbol ??1ResourcePackTransmissionManager@@QEAA@XZ
     */
    MCAPI ~ResourcePackTransmissionManager();

};