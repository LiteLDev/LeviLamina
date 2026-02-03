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
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mObjective;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>            mMinScore;
    ::ll::TypedStorage<4, 8, ::std::optional<int>>            mMaxScore;
    ::ll::TypedStorage<1, 2, ::std::optional<bool>>           mExclude;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreTargetSelectorOption& operator=(ScriptScoreTargetSelectorOption const&);
    ScriptScoreTargetSelectorOption(ScriptScoreTargetSelectorOption const&);
    ScriptScoreTargetSelectorOption();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&
    operator=(::ScriptModuleMinecraft::ScriptScoreTargetSelectorOption&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();

    MCAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
