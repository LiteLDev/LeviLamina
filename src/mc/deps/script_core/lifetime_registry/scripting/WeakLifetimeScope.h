#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistryReference; }
// clang-format on

namespace Scripting {

class WeakLifetimeScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Scripting::LifetimeRegistryReference*> mRegistryRef;
    ::ll::TypedStorage<4, 4, uint>                                    mVersion;
    // NOLINTEND
};

} // namespace Scripting
