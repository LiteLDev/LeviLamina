#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace LoadingScreenSystems {

class IClientFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IClientFactory() = default;

    virtual ::TickingSystemWithInfo clientLoadingScreenSystem() const = 0;

    virtual ::TickingSystemWithInfo clientPushDimensionLoadingScreenSystem() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace LoadingScreenSystems
