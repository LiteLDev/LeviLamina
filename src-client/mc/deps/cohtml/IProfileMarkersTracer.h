#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class IProfileMarkersTracer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProfileMarkersTracer() = default;

    virtual void BeginTraceEvent(char const*, char const*) = 0;

    virtual void BeginTraceEventWithString(char const*, char const*, char const*, char const*) = 0;

    virtual void BeginTraceEventWithInt(char const*, char const*, char const*, int) = 0;

    virtual void EndTraceEvent(char const*, char const*) = 0;

    virtual void BeginTraceEventAsync(char const*, char const*, void*) = 0;

    virtual void EndTraceEventAsync(char const*, char const*, void*) = 0;

    virtual void InstantTraceEvent(char const*, char const*) = 0;

    virtual void InstantTraceEventWithInt(char const*, char const*, char const*, int) = 0;

    virtual void UpdateCounter(char const*, int) = 0;

    virtual void HintThreadName(char const*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
