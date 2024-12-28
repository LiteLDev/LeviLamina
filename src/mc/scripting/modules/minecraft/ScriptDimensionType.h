#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { class ModuleBindingBuilder; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptDimensionType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2919eb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDimensionType& operator=(ScriptDimensionType const&);
    ScriptDimensionType(ScriptDimensionType const&);
    ScriptDimensionType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string getTypeId() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::Scripting::ModuleBindingBuilder& module);
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
