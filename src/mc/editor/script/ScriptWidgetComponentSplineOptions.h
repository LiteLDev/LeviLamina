#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentSplineOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2463bf;
    ::ll::UntypedStorage<4, 8>  mUnkbf8737;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentSplineOptions& operator=(ScriptWidgetComponentSplineOptions const&);
    ScriptWidgetComponentSplineOptions(ScriptWidgetComponentSplineOptions const&);
    ScriptWidgetComponentSplineOptions();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
