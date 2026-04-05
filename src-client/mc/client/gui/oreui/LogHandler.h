#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/ILogHandler.h"
#include "mc/external/gameface/cohtml/Severity.h"

namespace OreUI {

class LogHandler : public ::cohtml::Logging::ILogHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mIgnoredStrings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~LogHandler() /*override*/ = default;

    virtual void WriteLog(::cohtml::Logging::Severity, char const*, uint64) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
