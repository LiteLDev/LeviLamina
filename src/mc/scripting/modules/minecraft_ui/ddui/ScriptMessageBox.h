#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/deps/script_core/script_engine/scripting/Promise.h"

// auto generated forward declare list
// clang-format off
class IGameplayUserManagerConnector;
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleMinecraftServerUI { class ScriptFormVisibilityError; }
namespace ScriptModuleMinecraftServerUI { class ScriptInvalidFormError; }
namespace ScriptModuleMinecraftServerUI { class ScriptPlayerLeftError; }
namespace ScriptModuleMinecraftServerUI { struct ScriptMessageBoxResult; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EngineError; }
// clang-format on

namespace ScriptModuleMinecraftServerUI {

class ScriptMessageBox : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraftServerUI::ScriptMessageBox> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnkc31ed8;
    ::ll::UntypedStorage<8, 32>  mUnk447b66;
    ::ll::UntypedStorage<8, 216> mUnk852f39;
    ::ll::UntypedStorage<8, 216> mUnkcd09d9;
    ::ll::UntypedStorage<8, 216> mUnk1bac06;
    ::ll::UntypedStorage<8, 224> mUnkf5b621;
    ::ll::UntypedStorage<8, 216> mUnk2b471c;
    ::ll::UntypedStorage<8, 224> mUnk58ff6d;
    ::ll::UntypedStorage<8, 40>  mUnk28f02e;
    ::ll::UntypedStorage<8, 40>  mUnkfaca99;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptMessageBox& operator=(ScriptMessageBox const&);
    ScriptMessageBox(ScriptMessageBox const&);
    ScriptMessageBox();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind(::IGameplayUserManagerConnector& userManagerConnector);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftServerUI
