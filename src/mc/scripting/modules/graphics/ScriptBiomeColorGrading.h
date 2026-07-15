#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerGraphics { struct BiomeKey; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeColorGrading {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk255e2d;
    ::ll::UntypedStorage<8, 32> mUnkb3ab0b;
    ::ll::UntypedStorage<8, 8>  mUnk5c890c;
    ::ll::UntypedStorage<8, 40> mUnk81b971;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeColorGrading(ScriptBiomeColorGrading const&);
    ScriptBiomeColorGrading();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeColorGrading&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeColorGrading const&);

    MCNAPI ~ScriptBiomeColorGrading();
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
