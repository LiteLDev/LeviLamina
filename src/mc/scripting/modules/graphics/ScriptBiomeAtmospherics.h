#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerGraphics { struct BiomeKey; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleServerGraphics {

class ScriptBiomeAtmospherics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc1823b;
    ::ll::UntypedStorage<8, 32> mUnk7a17e6;
    ::ll::UntypedStorage<8, 8>  mUnk847794;
    ::ll::UntypedStorage<8, 40> mUnkfeed04;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBiomeAtmospherics(ScriptBiomeAtmospherics const&);
    ScriptBiomeAtmospherics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleServerGraphics::ScriptBiomeAtmospherics&
    operator=(::ScriptModuleServerGraphics::ScriptBiomeAtmospherics const&);

    MCNAPI ~ScriptBiomeAtmospherics();
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
