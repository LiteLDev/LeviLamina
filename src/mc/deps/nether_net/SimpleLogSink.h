#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LogSink.h"

namespace NetherNet {

class SimpleLogSink : public ::rtc::LogSink {
public:
    // prevent constructor by default
    SimpleLogSink& operator=(SimpleLogSink const&);
    SimpleLogSink(SimpleLogSink const&);
    SimpleLogSink();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void OnLogMessage(::std::string const& message) /*override*/;

    // vIndex: 0
    virtual ~SimpleLogSink() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnLogMessage(::std::string const& message);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace NetherNet
