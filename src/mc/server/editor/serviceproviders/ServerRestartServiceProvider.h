#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ServerRestartServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerRestartServiceProvider();

    virtual void requestReloadScriptsAndFunctions() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
