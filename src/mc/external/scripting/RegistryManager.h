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

public:
    // NOLINTBEGIN
    // symbol: ??0RegistryManager@Scripting@@QEAA@XZ
    MCAPI RegistryManager();

    // symbol:
    // ?createLifetimeRegistry@RegistryManager@Scripting@@QEAA?AV?$shared_ptr@VLifetimeRegistry@Scripting@@@std@@XZ
    MCAPI std::shared_ptr<class Scripting::LifetimeRegistry> createLifetimeRegistry();

    // symbol: ?getRegistryByContextId@RegistryManager@Scripting@@QEAAPEAVLifetimeRegistry@2@UContextId@2@@Z
    MCAPI class Scripting::LifetimeRegistry* getRegistryByContextId(struct Scripting::ContextId);

    // symbol: ??1RegistryManager@Scripting@@QEAA@XZ
    MCAPI ~RegistryManager();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_returnExpiredIdsToFreeList@RegistryManager@Scripting@@AEAAXXZ
    MCAPI void _returnExpiredIdsToFreeList();

    // NOLINTEND
};

}; // namespace Scripting
