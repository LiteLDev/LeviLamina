#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/modules/minecraft/EqualsComparison.h"
#include "mc/scripting/modules/minecraft/GreaterThanComparison.h"
#include "mc/scripting/modules/minecraft/GreaterThanOrEqualsComparison.h"
#include "mc/scripting/modules/minecraft/LessThanComparison.h"
#include "mc/scripting/modules/minecraft/LessThanOrEqualsComparison.h"
#include "mc/scripting/modules/minecraft/NotEqualsComparison.h"
#include "mc/scripting/modules/minecraft/RangeComparison.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptPropertyTargetSelectorOption {
public:
    // ScriptPropertyTargetSelectorOption inner types define
    using Comparison = ::std::variant<
        ::ScriptModuleMinecraft::LessThanComparison,
        ::ScriptModuleMinecraft::LessThanOrEqualsComparison,
        ::ScriptModuleMinecraft::GreaterThanComparison,
        ::ScriptModuleMinecraft::GreaterThanOrEqualsComparison,
        ::ScriptModuleMinecraft::EqualsComparison,
        ::ScriptModuleMinecraft::NotEqualsComparison,
        ::ScriptModuleMinecraft::RangeComparison>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>        mPropertyId;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>> mExclude;
    ::ll::TypedStorage<
        8,
        64,
        ::std::optional<::std::variant<
            bool,
            ::std::string,
            ::std::variant<
                ::ScriptModuleMinecraft::LessThanComparison,
                ::ScriptModuleMinecraft::LessThanOrEqualsComparison,
                ::ScriptModuleMinecraft::GreaterThanComparison,
                ::ScriptModuleMinecraft::GreaterThanOrEqualsComparison,
                ::ScriptModuleMinecraft::EqualsComparison,
                ::ScriptModuleMinecraft::NotEqualsComparison,
                ::ScriptModuleMinecraft::RangeComparison>>>>
        mValue;
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
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
