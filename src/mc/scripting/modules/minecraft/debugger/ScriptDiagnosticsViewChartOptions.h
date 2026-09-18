#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDiagnosticsViewChartOptions {
public:
    // ScriptDiagnosticsViewChartOptions inner types define
    enum class DisplayType : int {
        LineChart        = 0,
        StackedLineChart = 1,
        StackedBarChart  = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleDebugUtilities::ScriptDiagnosticsViewChartOptions::DisplayType> mDisplayType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                              mYLabel;
    ::ll::TypedStorage<4, 8, ::std::optional<uint>>                                                        mTickRange;
    ::ll::TypedStorage<8, 16, ::std::optional<double>>                                                     mTargetValue;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();

    MCAPI static ::Scripting::EnumBinding bindTypeEnum();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
