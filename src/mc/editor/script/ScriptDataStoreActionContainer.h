#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class DataStoreServiceProvider; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptDataStoreActionContainer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4ac3e4;
    ::ll::UntypedStorage<8, 8>  mUnkc98f52;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDataStoreActionContainer& operator=(ScriptDataStoreActionContainer const&);
    ScriptDataStoreActionContainer(ScriptDataStoreActionContainer const&);
    ScriptDataStoreActionContainer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDataStoreActionContainer(
        ::Editor::Services::DataStoreServiceProvider& dataStoreService,
        ::Scripting::WeakLifetimeScope const&         scope
    );

    MCAPI ::Scripting::Result<void> bindActionToControl(::std::string controlId, ::std::string const& actionPayload);

    MCAPI ::Scripting::Result<void>
    removeActionFromControl(::std::string controlId, ::std::optional<::std::string> actionPayload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStoreActionContainer> bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Editor::Services::DataStoreServiceProvider& dataStoreService, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
