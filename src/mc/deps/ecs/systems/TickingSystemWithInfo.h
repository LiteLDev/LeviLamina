#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ITickingSystem;
struct SystemInfo;
// clang-format on

struct TickingSystemWithInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ITickingSystem>> mTickingSystem;
    ::ll::TypedStorage<8, 192, ::SystemInfo>                      mInfo;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TickingSystemWithInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
