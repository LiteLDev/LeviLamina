#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting {

class LifetimeRegistryReference {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistry*> mRegistry;
    ::ll::TypedStorage<4, 4, uint>                           mVersion;
    // NOLINTEND
};

} // namespace Scripting
