#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/debug/log/LogArea.h"
#include "mc/deps/core/debug/log/LogLevel.h"

class ContextMessageLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7692d5;
    ::ll::UntypedStorage<1, 5>  mUnk522f81;
    ::ll::UntypedStorage<1, 14> mUnk15d953;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessageLogger& operator=(ContextMessageLogger const&);
    ContextMessageLogger(ContextMessageLogger const&);
    ContextMessageLogger();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ContextMessageLogger();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void log(::LogArea area, ::LogLevel level, char const* message);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
