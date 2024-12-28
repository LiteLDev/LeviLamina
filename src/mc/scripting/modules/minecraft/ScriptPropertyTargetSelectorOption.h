#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct EqualsComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanComparison; }
namespace ScriptModuleMinecraft { struct GreaterThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct LessThanComparison; }
namespace ScriptModuleMinecraft { struct LessThanOrEqualsComparison; }
namespace ScriptModuleMinecraft { struct NotEqualsComparison; }
namespace ScriptModuleMinecraft { struct RangeComparison; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPropertyTargetSelectorOption {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk603a03;
    ::ll::UntypedStorage<1, 2>  mUnka7b984;
    ::ll::UntypedStorage<8, 64> mUnk8a71cb;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPropertyTargetSelectorOption(ScriptPropertyTargetSelectorOption const&);
    ScriptPropertyTargetSelectorOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&&);

    MCAPI ::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptPropertyTargetSelectorOption>
    bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
