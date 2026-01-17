#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renoir/RenoirTraceEventName.h"

namespace renoir {

class ITracer {
public:
    // ITracer inner types declare
    // clang-format off
    struct Metadata;
    // clang-format on

    // ITracer inner types define
    struct Metadata {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk43d705;
        ::ll::UntypedStorage<4, 4> mUnk1ee919;
        ::ll::UntypedStorage<4, 4> mUnk4f7a7e;
        ::ll::UntypedStorage<4, 4> mUnk5095ce;
        // NOLINTEND

    public:
        // prevent constructor by default
        Metadata& operator=(Metadata const&);
        Metadata(Metadata const&);
        Metadata();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void StartTraceEvent(::renoir::RenoirTraceEventName, uint, ::renoir::ITracer::Metadata const&) = 0;

    virtual void EndTraceEvent(::renoir::RenoirTraceEventName, uint, ::renoir::ITracer::Metadata const&) = 0;

    virtual void UpdateCounter(::renoir::RenoirTraceEventName, uint64) = 0;

    virtual ~ITracer() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
