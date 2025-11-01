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
    // vIndex: 0
    virtual ~IClientFactory() = default;

    // vIndex: 1
    virtual ::TickingSystemWithInfo clientLoadingScreenSystem() const = 0;

    // vIndex: 2
    virtual ::TickingSystemWithInfo clientPushDimensionLoadingScreenSystem() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
