#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class DebuggerStat;
// clang-format on

class IDebuggerStatPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDebuggerStatPublisher() = default;

    virtual bool isStatPublisherEnabled() const = 0;

    virtual void publishStats(uint64 collectedTick, ::std::vector<::DebuggerStat> const& stats) = 0;
    // NOLINTEND
};
