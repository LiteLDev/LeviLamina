#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentText : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkdca7cf;
    ::ll::UntypedStorage<8, 24> mUnk7e685f;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentText& operator=(ScriptWidgetComponentText const&);
    ScriptWidgetComponentText(ScriptWidgetComponentText const&);
    ScriptWidgetComponentText();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentText() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
