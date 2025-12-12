#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ServerRestartServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerRestartServiceProvider() = default;

    virtual void requestReloadScriptsAndFunctions() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::Services
