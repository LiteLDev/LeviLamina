#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ServerCommunicationInterface {
public:
    // prevent constructor by default
    ServerCommunicationInterface& operator=(ServerCommunicationInterface const&);
    ServerCommunicationInterface(ServerCommunicationInterface const&);
    ServerCommunicationInterface();

public:
    // NOLINTBEGIN
    // symbol:
    // ?sendBandwidthMetric@ServerCommunicationInterface@@QEAAX_K000AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void sendBandwidthMetric(
        uint64             connectionTotalBytesReceived,
        uint64             connectionTotalBytesSent,
        uint64             playerDeltaBytesReceived,
        uint64             playerDeltaBytesSent,
        std::string const& xuid
    );

    // symbol: ?sendChunkLoadTelemtryData@ServerCommunicationInterface@@QEAAXAEBUChunkLoadTelemetryData@@@Z
    MCAPI void sendChunkLoadTelemtryData(struct ChunkLoadTelemetryData const& data);

    // symbol: ?sendServerStarted@ServerCommunicationInterface@@QEAAXXZ
    MCAPI void sendServerStarted();

    // symbol:
    // ?sendServerTickTime@ServerCommunicationInterface@@QEAAXV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    MCAPI void sendServerTickTime(std::chrono::nanoseconds timepoint);

    // symbol: ??1ServerCommunicationInterface@@QEAA@XZ
    MCAPI ~ServerCommunicationInterface();

    // symbol:
    // ?create@ServerCommunicationInterface@@SA?AV?$unique_ptr@VServerCommunicationInterface@@U?$default_delete@VServerCommunicationInterface@@@std@@@std@@AEBUNetworkAddress@@@Z
    MCAPI static std::unique_ptr<class ServerCommunicationInterface> create(struct NetworkAddress const& address);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?communicate@ServerCommunicationInterface@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI void communicate(std::string const& method, class Json::Value const& params);

    // NOLINTEND
};
