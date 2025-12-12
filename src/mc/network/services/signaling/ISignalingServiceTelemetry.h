#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/services/signaling/SignalServiceConnectStage.h"

// auto generated forward declare list
// clang-format off
class MessagePerformance;
namespace Json { class Value; }
// clang-format on

class ISignalingServiceTelemetry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISignalingServiceTelemetry() = default;

    virtual void fireEventSignalServiceConnect(::SignalServiceConnectStage, ::Json::Value const&) const = 0;

    virtual void fireEventSignalMessagePerformance(::MessagePerformance const&) const = 0;

    virtual ::std::string getAppSessionId() const = 0;

    virtual ::std::string getCorrelationId() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
