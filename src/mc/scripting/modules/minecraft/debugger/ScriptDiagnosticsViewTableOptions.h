#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDiagnosticsViewTableOptions {
public:
    // ScriptDiagnosticsViewTableOptions inner types define
    enum class DisplayType : int {
        Table            = 0,
        MultiColumnTable = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ScriptModuleDebugUtilities::ScriptDiagnosticsViewTableOptions::DisplayType> mDisplayType;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                              mKeyLabel;
    ::ll::TypedStorage<8, 32, ::std::optional<::std::vector<::std::string>>>                               mValueLabels;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::ScriptModuleDebugUtilities::ScriptDiagnosticsViewTableOptions const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();

    MCAPI static ::Scripting::EnumBinding bindTypeEnum();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
