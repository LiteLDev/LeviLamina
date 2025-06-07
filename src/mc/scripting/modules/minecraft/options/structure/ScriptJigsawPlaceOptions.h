#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptJigsawPlaceOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2> mUnk37f030;
    ::ll::UntypedStorage<1, 2> mUnka3cb84;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptJigsawPlaceOptions& operator=(ScriptJigsawPlaceOptions const&);
    ScriptJigsawPlaceOptions(ScriptJigsawPlaceOptions const&);
    ScriptJigsawPlaceOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
