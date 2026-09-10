#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptInvalidActorError; }
namespace ScriptModuleServerAdmin { class ScriptAllowListModificationError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { struct InvalidArgumentError; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptAllowList {
public:
    // ScriptAllowList inner types declare
    // clang-format off
    struct AllowListEntryData;
    // clang-format on

    // ScriptAllowList inner types define
    struct AllowListEntryData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnkfead68;
        ::ll::UntypedStorage<8, 40> mUnk1467da;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntryData& operator=(AllowListEntryData const&);
        AllowListEntryData(AllowListEntryData const&);
        AllowListEntryData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData const&) const;
        // NOLINTEND
    };

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
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
    add(::std::variant<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
        ::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const& playerData);

    MCNAPI ::std::vector<::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> entries() const;

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleServerAdmin::ScriptAllowListModificationError,
        ::ScriptModuleMinecraft::ScriptInvalidActorError,
        ::Scripting::InvalidArgumentError>
    remove(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>,
            ::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryData> const& playerData
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
