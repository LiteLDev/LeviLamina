#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
// clang-format on

namespace Bedrock::Http {

class Factory {
public:
    // prevent constructor by default
    Factory& operator=(Factory const&);
    Factory(Factory const&);
    Factory();

public:
    // NOLINTBEGIN
    // symbol: ?createDispatcher@Factory@Http@Bedrock@@SA?AV?$shared_ptr@VDispatcherProcess@Http@Bedrock@@@std@@XZ
    MCAPI static std::shared_ptr<class Bedrock::Http::DispatcherProcess> createDispatcher();

    // NOLINTEND
};

}; // namespace Bedrock::Http
