#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { struct ScriptActorSpawnError; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptProjectRegion : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptProjectRegion> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb7fbaa;
    ::ll::UntypedStorage<8, 8>  mUnkb9a545;
    ::ll::UntypedStorage<8, 16> mUnkee141c;
    ::ll::UntypedStorage<8, 64> mUnk4fd50a;
    ::ll::UntypedStorage<8, 16> mUnk3611ec;
    ::ll::UntypedStorage<8, 24> mUnkd7db42;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptProjectRegion& operator=(ScriptProjectRegion const&);
    ScriptProjectRegion(ScriptProjectRegion const&);
    ScriptProjectRegion();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptProjectRegion() = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
