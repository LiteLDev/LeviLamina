#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerGraphics { struct BiomeKey; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeLighting {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk78dde0;
    ::ll::UntypedStorage<8, 32> mUnkf75dd0;
    ::ll::UntypedStorage<8, 8>  mUnk79888d;
    ::ll::UntypedStorage<8, 40> mUnkd81ff9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeLighting(ScriptBiomeLighting const&);
    ScriptBiomeLighting();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeLighting&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeLighting const&);

    MCNAPI ~ScriptBiomeLighting();
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
