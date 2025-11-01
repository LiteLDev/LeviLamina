#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptExplosionOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9fed69;
    ::ll::UntypedStorage<1, 2> mUnk72424f;
    ::ll::UntypedStorage<1, 2> mUnk5a3dc4;
    ::ll::UntypedStorage<1, 2> mUnkf77c5a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptExplosionOptions& operator=(ScriptExplosionOptions const&);
    ScriptExplosionOptions(ScriptExplosionOptions const&);
    ScriptExplosionOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static bool const& ALLOW_UNDERWATER_DEFAULT();

    MCNAPI static bool const& BREAKS_BLOCKS_DEFAULT();

    MCNAPI static bool const& CAUSES_FIRE_DEFAULT();
    // NOLINTEND

};

}
