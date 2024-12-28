#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

namespace ScriptModuleMinecraft {

struct ScriptDimensionLocation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk392c2a;
    ::ll::UntypedStorage<4, 4>  mUnkd1408b;
    ::ll::UntypedStorage<4, 4>  mUnkdceea9;
    ::ll::UntypedStorage<4, 4>  mUnk5bc35f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimensionLocation& operator=(ScriptDimensionLocation const&);
    ScriptDimensionLocation(ScriptDimensionLocation const&);
    ScriptDimensionLocation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptDimensionLocation();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptDimensionLocation> bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
