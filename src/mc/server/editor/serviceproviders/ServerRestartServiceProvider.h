#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ServerRestartServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ServerRestartServiceProvider() = default;
#else // LL_PLAT_C
    virtual ~ServerRestartServiceProvider();
#endif

    virtual void requestReloadScriptsAndFunctions() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
