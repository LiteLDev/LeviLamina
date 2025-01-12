#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/LogSink.h"

namespace NetherNet {

class SimpleLogSink : public ::rtc::LogSink {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 5
    virtual void OnLogMessage(::std::string const& message) /*override*/;

    // vIndex: 0
    virtual ~SimpleLogSink() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
