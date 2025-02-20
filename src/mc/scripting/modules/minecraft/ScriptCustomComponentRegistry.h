#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleMinecraft {

class ScriptCustomComponentRegistry {
public:
    // ScriptCustomComponentRegistry inner types define
    enum class State : int {
        PreInit               = 0,
        ScriptLoaded          = 1,
        Finalized             = 2,
        ReloadingPreInit      = 3,
        ReloadingScriptLoaded = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka41faa;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomComponentRegistry& operator=(ScriptCustomComponentRegistry const&);
    ScriptCustomComponentRegistry(ScriptCustomComponentRegistry const&);
    ScriptCustomComponentRegistry();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptCustomComponentRegistry() = default;

    // vIndex: 1
    virtual void _onReload() = 0;

    // vIndex: 2
    virtual void _onScriptInitializationComplete() = 0;

    // vIndex: 3
    virtual void _onScriptModuleStartupComplete();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $_onScriptModuleStartupComplete();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
