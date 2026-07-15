#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerGraphics { struct BiomeKey; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeWater {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4e5505;
    ::ll::UntypedStorage<8, 32> mUnk6cfe64;
    ::ll::UntypedStorage<8, 8>  mUnk53fac5;
    ::ll::UntypedStorage<8, 40> mUnkf844f7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeWater(ScriptBiomeWater const&);
    ScriptBiomeWater();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeWater&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeWater const&);

    MCNAPI ~ScriptBiomeWater();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleServerGraphics
