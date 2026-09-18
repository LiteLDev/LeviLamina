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
    struct AllowListEntry;
    struct AllowListEntryNameInfo;
    // clang-format on

    // ScriptAllowList inner types define
    struct AllowListEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnke6d784;
        ::ll::UntypedStorage<8, 40> mUnkabf489;
        ::ll::UntypedStorage<1, 1>  mUnk1004a0;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntry& operator=(AllowListEntry const&);
        AllowListEntry(AllowListEntry const&);
        AllowListEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntry const&) const;
        // NOLINTEND
    };

    struct AllowListEntryNameInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 40> mUnk124b6a;
        ::ll::UntypedStorage<8, 40> mUnk598775;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntryNameInfo& operator=(AllowListEntryNameInfo const&);
        AllowListEntryNameInfo(AllowListEntryNameInfo const&);
        AllowListEntryNameInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool operator==(::ScriptModuleServerAdmin::ScriptAllowList::AllowListEntryNameInfo const&) const;
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
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& moduleBuilder);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
