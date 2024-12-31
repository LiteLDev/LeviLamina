#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ScriptStat;
// clang-format on

class IScriptStatPublisher {
public:
    // prevent constructor by default
    IScriptStatPublisher& operator=(IScriptStatPublisher const&);
    IScriptStatPublisher(IScriptStatPublisher const&);
    IScriptStatPublisher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScriptStatPublisher() = default;

    // vIndex: 1
    virtual bool isStatPublisherEnabled() const = 0;

    // vIndex: 2
    virtual void publishStats(uint64, ::std::vector<::ScriptStat>&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
