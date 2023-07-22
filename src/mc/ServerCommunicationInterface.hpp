/**
 * @file  ServerCommunicationInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerCommunicationInterface.
 *
 */
class ServerCommunicationInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCOMMUNICATIONINTERFACE
public:
    class ServerCommunicationInterface& operator=(class ServerCommunicationInterface const &) = delete;
    ServerCommunicationInterface(class ServerCommunicationInterface const &) = delete;
    ServerCommunicationInterface() = delete;
#endif

public:
    /**
     * @symbol  ?sendBandwidthMetric\@ServerCommunicationInterface\@\@QEAAX_K000AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendBandwidthMetric(unsigned __int64, unsigned __int64, unsigned __int64, unsigned __int64, std::string const &);
    /**
     * @symbol  ?sendChunkLoadTelemtryData\@ServerCommunicationInterface\@\@QEAAXAEBUChunkLoadTelemetryData\@\@\@Z
     */
    MCAPI void sendChunkLoadTelemtryData(struct ChunkLoadTelemetryData const &);
    /**
     * @symbol  ?sendServerStarted\@ServerCommunicationInterface\@\@QEAAXXZ
     */
    MCAPI void sendServerStarted();
    /**
     * @symbol  ?sendServerTickTime\@ServerCommunicationInterface\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
    /**
     * @symbol  ??1ServerCommunicationInterface\@\@QEAA\@XZ
     */
    MCAPI ~ServerCommunicationInterface();
    /**
     * @symbol  ?create\@ServerCommunicationInterface\@\@SA?AV?$unique_ptr\@VServerCommunicationInterface\@\@U?$default_delete\@VServerCommunicationInterface\@\@\@std\@\@\@std\@\@AEBUNetworkAddress\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const &);

//private:
    /**
     * @symbol  ?communicate\@ServerCommunicationInterface\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void communicate(std::string const &, class Json::Value const &);

private:

};