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
    // prevent constructor by default
    RegistryManager& operator=(RegistryManager const&);
    RegistryManager(RegistryManager const&);
    RegistryManager();

public:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<class Scripting::LifetimeRegistry> createLifetimeRegistry();

    MCAPI class Scripting::LifetimeRegistry* getRegistryByContextId(struct Scripting::ContextId);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _returnExpiredIdsToFreeList();

    // NOLINTEND
};

}; // namespace Scripting
