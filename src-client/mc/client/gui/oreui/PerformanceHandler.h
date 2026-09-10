#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/gameface/cohtml/IPerformanceHandler.h"

// auto generated forward declare list
// clang-format off
namespace cohtml::Logging { class ILogHandler; }
// clang-format on

namespace OreUI {

class PerformanceHandler : public ::cohtml::Profile::IPerformanceHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::Logging::ILogHandler&> mLogHandler;
    // NOLINTEND

public:
    // prevent constructor by default
    PerformanceHandler& operator=(PerformanceHandler const&);
    PerformanceHandler(PerformanceHandler const&);
    PerformanceHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PerformanceHandler() /*override*/ = default;

    virtual void WriteLog(char const* message, uint64 length) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $WriteLog(char const* message, uint64 length);
    // NOLINTEND
};

} // namespace OreUI
