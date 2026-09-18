#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/deps/script_core/script_engine/scripting/Closure.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptPrefabInstanceTransactionOperationHandler; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptTransactionHandler
: public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptTransactionHandler> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkf82de5;
    ::ll::UntypedStorage<8, 64>  mUnka7a57b;
    ::ll::UntypedStorage<8, 32>  mUnk6cafd3;
    ::ll::UntypedStorage<8, 120> mUnk698f06;
    ::ll::UntypedStorage<8, 16>  mUnkde55c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptTransactionHandler& operator=(ScriptTransactionHandler const&);
    ScriptTransactionHandler(ScriptTransactionHandler const&);
    ScriptTransactionHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptTransactionHandler(::Editor::ScriptModule::ScriptTransactionHandler&& other);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::Editor::ScriptModule::ScriptPrefabInstanceTransactionOperationHandler>>
    addPrefabInstanceOperationHandler(
        ::Scripting::Closure<void(::std::string const&, ::std::optional<::std::string> const&)> closure
    );

    MCNAPI ::std::string getId() const;

    MCNAPI bool isValid() const;

    MCNAPI ::Editor::ScriptModule::ScriptTransactionHandler&
    operator=(::Editor::ScriptModule::ScriptTransactionHandler&& other);

    MCNAPI ~ScriptTransactionHandler();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::Error getInvalidTransactionManagerError();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptTransactionHandler&& other);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
