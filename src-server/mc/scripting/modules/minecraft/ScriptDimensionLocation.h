#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptDimensionLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk392c2a;
    ::ll::UntypedStorage<4, 4> mUnkd1408b;
    ::ll::UntypedStorage<4, 4> mUnkdceea9;
    ::ll::UntypedStorage<4, 4> mUnk5bc35f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimensionLocation& operator=(ScriptDimensionLocation const&);
    ScriptDimensionLocation(ScriptDimensionLocation const&);
    ScriptDimensionLocation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptDimensionLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
