#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
// clang-format on

class IScriptStatPublisher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptStatPublisher() = default;

    virtual bool isStatPublisherEnabled() const = 0;

    virtual void publishStats(uint64, ::std::vector<::ScriptStat> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
