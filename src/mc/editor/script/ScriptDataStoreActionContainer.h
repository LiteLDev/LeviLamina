#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/runtime/Result.h"

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
    MCAPI ::Scripting::Result<void> bindActionToControl(::std::string controlId, ::std::string const& actionPayload);

    MCAPI ::Scripting::Result<void>
    removeActionFromControl(::std::string controlId, ::std::optional<::std::string> actionPayload);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptDataStoreActionContainer> bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
