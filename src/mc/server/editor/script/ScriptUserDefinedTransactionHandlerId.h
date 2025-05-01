#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptUserDefinedTransactionHandlerId {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8811bd;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptUserDefinedTransactionHandlerId& operator=(ScriptUserDefinedTransactionHandlerId const&);
    ScriptUserDefinedTransactionHandlerId(ScriptUserDefinedTransactionHandlerId const&);
    ScriptUserDefinedTransactionHandlerId();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptUserDefinedTransactionHandlerId>
    bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
