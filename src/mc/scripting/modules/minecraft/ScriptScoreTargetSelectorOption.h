#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptScoreTargetSelectorOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk385a3c;
    ::ll::UntypedStorage<4, 8>  mUnkbc73f6;
    ::ll::UntypedStorage<4, 8>  mUnkc71f5d;
    ::ll::UntypedStorage<1, 2>  mUnk324102;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreTargetSelectorOption(ScriptScoreTargetSelectorOption const&);
    ScriptScoreTargetSelectorOption();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&&);

    MCNAPI ::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindV010();

    MCNAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
