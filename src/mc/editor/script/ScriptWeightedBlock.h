#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace Editor::ScriptModule {

class ScriptWeightedBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke5c6c8;
    ::ll::UntypedStorage<4, 4>  mUnk4a15f2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWeightedBlock& operator=(ScriptWeightedBlock const&);
    ScriptWeightedBlock(ScriptWeightedBlock const&);
    ScriptWeightedBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptWeightedBlock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::Editor::ScriptModule::ScriptWeightedBlock> bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
