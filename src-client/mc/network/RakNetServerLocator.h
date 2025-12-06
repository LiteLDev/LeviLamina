#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RakNetServerLocator {
public:
    // RakNetServerLocator inner types declare
    // clang-format off
    struct AnnounceServerData;
    struct NatHolePuncherFunctor;
    struct PingRateRecorder;
    struct StateChangeRequestData;
    struct SuspendStateData;
    // clang-format on

    // RakNetServerLocator inner types define
    enum class protocolVersion : uint {};

    struct AnnounceServerData {};

    struct NatHolePuncherFunctor {};

    struct PingRateRecorder {};

    struct StateChangeRequestData {};

    struct SuspendStateData {};
};
