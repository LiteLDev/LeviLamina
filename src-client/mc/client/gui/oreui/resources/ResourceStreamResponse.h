#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class ISyncStreamReader; }
namespace cohtml { class IAsyncResourceStreamResponse; }
// clang-format on

namespace Gameface {

class ResourceStreamResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceStreamResponse*> mResponse;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setStreamReader(::Gameface::ISyncStreamReader* reader);
    // NOLINTEND
};

} // namespace Gameface
