#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

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
    MCNAPI ~ScriptWeightedBlock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
