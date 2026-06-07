#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Http { class DispatcherProcess; }
// clang-format on

namespace Bedrock::Http {

class Factory {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::Bedrock::Http::DispatcherProcess> createDispatcher();
    // NOLINTEND
};

} // namespace Bedrock::Http
