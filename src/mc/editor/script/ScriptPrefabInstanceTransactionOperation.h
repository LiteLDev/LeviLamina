#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptPrefabInstanceTransactionOperationHandler; }
namespace Editor::ScriptModule { class ScriptPrefabTemplateInstance; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPrefabInstanceTransactionOperation
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPrefabInstanceTransactionOperation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd896c5;
    ::ll::UntypedStorage<8, 8>  mUnk17f81d;
    ::ll::UntypedStorage<8, 32> mUnk50b269;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrefabInstanceTransactionOperation& operator=(ScriptPrefabInstanceTransactionOperation const&);
    ScriptPrefabInstanceTransactionOperation(ScriptPrefabInstanceTransactionOperation const&);
    ScriptPrefabInstanceTransactionOperation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<::std::string>
    _serializeInstanceSnapshot(::Editor::ScriptModule::ScriptPrefabTemplateInstance const& instance) const;

    MCNAPI ::Scripting::Result_deprecated<void> addCreateOperation(
        ::Editor::ScriptModule::ScriptPrefabInstanceTransactionOperationHandler const& operationHandler,
        ::Editor::ScriptModule::ScriptPrefabTemplateInstance const&                    instance
    );

    MCNAPI ::Scripting::Result_deprecated<void> addDeleteOperation(
        ::Editor::ScriptModule::ScriptPrefabInstanceTransactionOperationHandler const& operationHandler,
        ::Editor::ScriptModule::ScriptPrefabTemplateInstance const&                    instance
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
