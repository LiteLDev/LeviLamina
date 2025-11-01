#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class LifetimeRegistry; }
// clang-format on

namespace Scripting {

class RegistryManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfe9f34;
    ::ll::UntypedStorage<8, 4080> mUnk15b833;
    // NOLINTEND

public:
    // prevent constructor by default
    RegistryManager& operator=(RegistryManager const&);
    RegistryManager(RegistryManager const&);
    RegistryManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::Scripting::LifetimeRegistry> createLifetimeRegistry();
    // NOLINTEND

};

}
