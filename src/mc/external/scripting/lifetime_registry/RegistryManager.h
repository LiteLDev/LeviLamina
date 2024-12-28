#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
namespace Scripting { struct ContextId; }
// clang-format on

namespace Scripting {

class RegistryManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>   mUnkfe9f34;
    ::ll::UntypedStorage<8, 4080> mUnk15b833;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryManager& operator=(RegistryManager const&);
    RegistryManager(RegistryManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RegistryManager();

    MCAPI ::std::unique_ptr<::Scripting::LifetimeRegistry> createLifetimeRegistry();

    MCAPI ::Scripting::LifetimeRegistry* getRegistryByContextId(::Scripting::ContextId contextId);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace Scripting
