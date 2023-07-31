#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ServerCommunicationInterface {

public:
    // prevent constructor by default
    ServerCommunicationInterface& operator=(ServerCommunicationInterface const&) = delete;
    ServerCommunicationInterface(ServerCommunicationInterface const&)            = delete;
    ServerCommunicationInterface()                                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?create\@ServerCommunicationInterface\@\@SA?AV?$unique_ptr\@VServerCommunicationInterface\@\@U?$default_delete\@VServerCommunicationInterface\@\@\@std\@\@\@std\@\@AEBUNetworkAddress\@\@\@Z
     */
    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const&);
    /**
     * @symbol
     * ?sendBandwidthMetric\@ServerCommunicationInterface\@\@QEAAX_K000AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void sendBandwidthMetric(uint64_t, uint64_t, uint64_t, uint64_t, std::string const&);
    /**
     * @symbol ?sendChunkLoadTelemtryData\@ServerCommunicationInterface\@\@QEAAXAEBUChunkLoadTelemetryData\@\@\@Z
     */
    MCAPI void sendChunkLoadTelemtryData(struct ChunkLoadTelemetryData const&);
    /**
     * @symbol ?sendServerStarted\@ServerCommunicationInterface\@\@QEAAXXZ
     */
    MCAPI void sendServerStarted();
    /**
     * @symbol
     * ?sendServerTickTime\@ServerCommunicationInterface\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void sendServerTickTime(std::chrono::nanoseconds);
    /**
     * @symbol ??1ServerCommunicationInterface\@\@QEAA\@XZ
     */
    MCAPI ~ServerCommunicationInterface();
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?communicate\@ServerCommunicationInterface\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI void communicate(std::string const&, class Json::Value const&);
    // NOLINTEND
};
