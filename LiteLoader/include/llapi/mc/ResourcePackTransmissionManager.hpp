/**
 * @file  ResourcePackTransmissionManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   387755557
     * @symbol  ??0ResourcePackTransmissionManager\@\@QEAA\@AEAVScheduler\@\@\@Z
     */
    MCAPI ResourcePackTransmissionManager(class Scheduler &);
    /**
     * @hash   -368822368
     * @symbol  ?cleanupResourcePackManager\@ResourcePackTransmissionManager\@\@QEAAXAEBVNetworkIdentifier\@\@\@Z
     */
    MCAPI void cleanupResourcePackManager(class NetworkIdentifier const &);
    /**
     * @hash   -194799891
     * @symbol  ?getResourcePackUploadManager\@ResourcePackTransmissionManager\@\@QEAAAEAVResourcePackFileUploadManager\@\@AEAVPacketSender\@\@AEBVNetworkIdentifier\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ResourcePackFileUploadManager & getResourcePackUploadManager(class PacketSender &, class NetworkIdentifier const &, std::string const &);
    /**
     * @hash   1670398789
     * @symbol  ?update\@ResourcePackTransmissionManager\@\@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @hash   1715018494
     * @symbol  ??1ResourcePackTransmissionManager\@\@QEAA\@XZ
     */
    MCAPI ~ResourcePackTransmissionManager();

};