#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Poi { struct Type; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft::Poi::Block {

struct ScriptType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Poi::Type const*> mType;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft::Poi::Block
