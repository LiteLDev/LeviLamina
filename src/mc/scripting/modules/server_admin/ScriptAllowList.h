#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleServerAdmin { class ScriptAllowListFileReloadError; }
namespace ScriptModuleServerAdmin { class ScriptAllowListModificationError; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAllowList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkba978c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAllowList& operator=(ScriptAllowList const&);
    ScriptAllowList(ScriptAllowList const&);
    ScriptAllowList();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    add(::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
        ::std::string> const& playerData);

    MCNAPI ::Scripting::Result<bool, ::ScriptModuleMinecraft::ScriptInvalidActorError> contains(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
            ::std::string> const& playerData
    );

    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::ScriptAllowListFileReloadError> reloadFile();

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError>
    remove(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
            ::std::string> const& playerData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
