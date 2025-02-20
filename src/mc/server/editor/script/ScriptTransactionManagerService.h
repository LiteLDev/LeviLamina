#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EntityOperation.h"
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { class ScriptSelectionContainer; }
namespace Editor::ScriptModule { class ScriptUserDefinedTransactionHandlerId; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptCompoundBlockVolume; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
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
        ::ll::UntypedStorage<8, 16> mUnk7c7f27;
        ::ll::UntypedStorage<8, 88> mUnk45542f;
        ::ll::UntypedStorage<8, 88> mUnk35dabd;
        // NOLINTEND

    public:
        // prevent constructor by default
        ModuleHandlerItem& operator=(ModuleHandlerItem const&);
        ModuleHandlerItem(ModuleHandlerItem const&);
        ModuleHandlerItem();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ModuleHandlerItem();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
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
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptTransactionManagerService(::Editor::ScriptModule::ScriptTransactionManagerService&&);

    MCAPI ::Scripting::Error _getInvalidTransactionServiceError() const;

    MCAPI ::Scripting::Result<bool, ::Scripting::Error> addEntityOperation(
        ::ScriptModuleMinecraft::ScriptActor const&            entity,
        ::Editor::Transactions::EntityOperation::OperationType type
    );

    MCAPI ::Scripting::Result<void> addUserDefinedOperation(
        ::Scripting::ContextConfig const&                                    contextConfig,
        ::Editor::ScriptModule::ScriptUserDefinedTransactionHandlerId const& transactionHandler,
        ::std::string const&                                                 payload,
        ::std::optional<::std::string const>&                                operationName
    );

    MCAPI ::Scripting::Result_deprecated<bool> commitOpenTransaction();

    MCAPI ::Scripting::Result_deprecated<int> commitTrackedChanges();

    MCAPI ::Scripting::Result_deprecated<bool> discardOpenTransaction();

    MCAPI ::Scripting::Result_deprecated<int> discardTrackedChanges();

    MCAPI ::Scripting::Result_deprecated<bool> openTransaction(::std::string const& name);

    MCAPI ::Editor::ScriptModule::ScriptTransactionManagerService&
    operator=(::Editor::ScriptModule::ScriptTransactionManagerService&&);

    MCAPI ::Scripting::Result<void> redo();

    MCAPI ::Scripting::Result_deprecated<int> redoSize() const;

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUserDefinedTransactionHandlerId>>
    registerTransactionHandler(
        ::Scripting::ContextConfig const&         contextConfig,
        ::Scripting::Closure<void(::std::string)> undoClosure,
        ::Scripting::Closure<void(::std::string)> redoClosure
    );

    MCAPI ::Scripting::Result_deprecated<bool> trackBlockChangeArea(::Vec3 const& from, ::Vec3 const& to);

    MCAPI ::Scripting::Result_deprecated<bool>
    trackBlockChangeCompoundBlockVolume(::ScriptModuleMinecraft::ScriptCompoundBlockVolume const& volume);

    MCAPI ::Scripting::Result_deprecated<bool> trackBlockChangeList(::std::vector<::Vec3> const& locations);

    MCAPI ::Scripting::Result_deprecated<bool>
    trackBlockChangeSelection(::Editor::ScriptModule::ScriptSelectionContainer const& selection);

    MCAPI ::Scripting::Result<void> undo();

    MCAPI ::Scripting::Result_deprecated<int> undoSize() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptTransactionManagerService> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ScriptModule::ScriptTransactionManagerService&&);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
