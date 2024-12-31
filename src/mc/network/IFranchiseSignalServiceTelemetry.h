#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/SignalServiceConnectStage.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct NetworkID; }
// clang-format on

class IFranchiseSignalServiceTelemetry {
public:
    // prevent constructor by default
    IFranchiseSignalServiceTelemetry& operator=(IFranchiseSignalServiceTelemetry const&);
    IFranchiseSignalServiceTelemetry(IFranchiseSignalServiceTelemetry const&);
    IFranchiseSignalServiceTelemetry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IFranchiseSignalServiceTelemetry() = default;

    // vIndex: 1
    virtual void fireEvent(::SignalServiceConnectStage, ::NetherNet::NetworkID, ::std::string const&) const = 0;

    // vIndex: 2
    virtual ::std::string getAppSessionId() const = 0;

    // vIndex: 3
    virtual ::std::string getCorrelationId() const = 0;
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
