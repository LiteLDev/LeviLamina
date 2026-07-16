#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"
#include "mc/scripting/modules/minecraft_ui/ddui/ScriptDataDrivenScreenClosedReason.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptCustomForm : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptCustomForm> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk79d155;
    ::ll::UntypedStorage<8, 32>  mUnka5eaf1;
    ::ll::UntypedStorage<8, 216> mUnkbf8dda;
    ::ll::UntypedStorage<8, 24>  mUnk63d1ad;
    ::ll::UntypedStorage<1, 1>   mUnk656f06;
    ::ll::UntypedStorage<8, 16>  mUnk15455b;
    ::ll::UntypedStorage<8, 568> mUnk292132;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptCustomForm& operator=(ScriptCustomForm const&);
    ScriptCustomForm(ScriptCustomForm const&);
    ScriptCustomForm();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::IGameplayUserManagerConnector& userManagerConnector);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
