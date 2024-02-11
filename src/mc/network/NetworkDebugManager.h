#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/enums/TrackerType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class NetworkDebugManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // NetworkDebugManager inner types declare
    // clang-format off
    class Tracker;
    // clang-format on

    // NetworkDebugManager inner types define
    class Tracker {
    public:
        // prevent constructor by default
        Tracker& operator=(Tracker const&);
        Tracker(Tracker const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0Tracker@NetworkDebugManager@@QEAA@XZ
        MCAPI Tracker();

        // symbol: ??1Tracker@NetworkDebugManager@@QEAA@XZ
        MCAPI ~Tracker();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkDebugManager& operator=(NetworkDebugManager const&);
    NetworkDebugManager(NetworkDebugManager const&);
    NetworkDebugManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetworkDebugManager@@UEAA@XZ
    virtual ~NetworkDebugManager() = default;

    // symbol: ?registerStatisticsSource@NetworkDebugManager@@QEAAXAEAVNetworkStatistics@@@Z
    MCAPI void registerStatisticsSource(class NetworkStatistics& s);

    // symbol: ?unregisterStatisticsSource@NetworkDebugManager@@QEAAXAEAVNetworkStatistics@@@Z
    MCAPI void unregisterStatisticsSource(class NetworkStatistics& s);

    // symbol:
    // ?trackReceive@NetworkDebugManager@@SAXW4TrackerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI static void trackReceive(::TrackerType type, std::string const& name, uint64 size);

    // symbol:
    // ?trackSend@NetworkDebugManager@@SAXW4TrackerType@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_K@Z
    MCAPI static void trackSend(::TrackerType type, std::string const& name, uint64 size);

    // symbol: ?MAX_NUMBER_OF_SAMPLES@NetworkDebugManager@@2HB
    MCAPI static int const MAX_NUMBER_OF_SAMPLES;

    // symbol: ?UPDATE_INTERVAL_MILLISECONDS@NetworkDebugManager@@2HB
    MCAPI static int const UPDATE_INTERVAL_MILLISECONDS;

    // NOLINTEND
};
