#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Services {

class ServerRestartServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerRestartServiceProvider() = default;

    // vIndex: 1
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
