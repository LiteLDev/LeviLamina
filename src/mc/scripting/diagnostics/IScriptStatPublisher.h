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
    // vIndex: 0
    virtual ~IScriptStatPublisher() = default;

    // vIndex: 1
    virtual bool isStatPublisherEnabled() const = 0;

    // vIndex: 2
    virtual void publishStats(uint64, ::std::vector<::ScriptStat> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
