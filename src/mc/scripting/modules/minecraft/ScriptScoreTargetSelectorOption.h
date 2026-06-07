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
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ScriptScoreTargetSelectorOption();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();

    MCAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
