#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/EntityOperation.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/deps/scripting/script_engine/Closure.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { class ScriptUserDefinedTransactionHandlerId; }
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct Error; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransactionManagerService : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptTransactionManagerService> {
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
        ::ll::UntypedStorage<8, 248> mUnk45542f;
        ::ll::UntypedStorage<8, 248> mUnk35dabd;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ModuleHandlerItem& operator=(ModuleHandlerItem const&);
        ModuleHandlerItem(ModuleHandlerItem const&);
        ModuleHandlerItem();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~ModuleHandlerItem();
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk5f49c3;
    ::ll::UntypedStorage<8, 8> mUnk11835f;
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
    MCNAPI ScriptTransactionManagerService(::Editor::ScriptModule::ScriptTransactionManagerService&&);

    MCNAPI ::Scripting::Error _getInvalidTransactionServiceError() const;

    MCNAPI ::Scripting::Result_deprecated<bool> addEntityOperation(::ScriptModuleMinecraft::ScriptActor const& entity, ::Editor::Transactions::EntityOperation::OperationType type);

    MCNAPI ::Scripting::Result_deprecated<void> addUserDefinedOperation(::Scripting::ContextConfig const& contextConfig, ::Editor::ScriptModule::ScriptUserDefinedTransactionHandlerId const& transactionHandler, ::std::string const& payload, ::std::optional<::std::string const>& operationName);

    MCNAPI ::Scripting::Result_deprecated<bool> commitOpenTransaction();

    MCNAPI ::Scripting::Result_deprecated<int> commitTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<bool> discardOpenTransaction();

    MCNAPI ::Scripting::Result_deprecated<int> discardTrackedChanges();

    MCNAPI ::Scripting::Result_deprecated<bool> isBusy();

    MCNAPI ::Scripting::Result_deprecated<bool> openTransaction(::std::string const& name);

    MCNAPI ::Scripting::Result_deprecated<void> redo();

    MCNAPI ::Scripting::Result_deprecated<int> redoSize() const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptUserDefinedTransactionHandlerId>> registerTransactionHandler(::Scripting::ContextConfig const& contextConfig, ::Scripting::Closure<void(::std::string)> undoClosure, ::Scripting::Closure<void(::std::string)> redoClosure);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeArea(::Vec3 const& from, ::Vec3 const& to);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeList(::std::vector<::Vec3> const& locations);

    MCNAPI ::Scripting::Result_deprecated<bool> trackBlockChangeVolume(::ScriptModuleMinecraft::ScriptBlockVolumeBase const& volume);

    MCNAPI ::Scripting::Result_deprecated<void> undo();

    MCNAPI ::Scripting::Result_deprecated<int> undoSize() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptTransactionManagerService&&);
    // NOLINTEND

};

}
