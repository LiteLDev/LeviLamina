#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransactionManagerService
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptTransactionManagerService> {
public:
    // ScriptTransactionManagerService inner types declare
    // clang-format off
    struct ModuleHandlerItem;
    // clang-format on

    // ScriptTransactionManagerService inner types define
    struct ModuleHandlerItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16>  mUnk7c7f27;
        ::ll::UntypedStorage<8, 112> mUnked2ff5;
        ::ll::UntypedStorage<8, 112> mUnk9288b9;
        // NOLINTEND

    public:
        // prevent constructor by default
        ModuleHandlerItem& operator=(ModuleHandlerItem const&);
        ModuleHandlerItem(ModuleHandlerItem const&);
        ModuleHandlerItem();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5f49c3;
    ::ll::UntypedStorage<8, 8>  mUnk11835f;
    ::ll::UntypedStorage<8, 64> mUnk25521c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransactionManagerService& operator=(ScriptTransactionManagerService const&);
    ScriptTransactionManagerService(ScriptTransactionManagerService const&);
    ScriptTransactionManagerService();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
