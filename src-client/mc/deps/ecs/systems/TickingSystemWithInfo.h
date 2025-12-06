#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/SystemInfo.h"

// auto generated forward declare list
// clang-format off
struct ITickingSystem;
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
    MCNAPI ~TickingSystemWithInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
