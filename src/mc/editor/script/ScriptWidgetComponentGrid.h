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

class ScriptWidgetComponentGrid : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk807d84;
    ::ll::UntypedStorage<8, 24> mUnk41e8fa;
    ::ll::UntypedStorage<4, 8>  mUnk3010d0;
    ::ll::UntypedStorage<4, 8>  mUnk93b547;
    ::ll::UntypedStorage<4, 8>  mUnkc7a48b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGrid& operator=(ScriptWidgetComponentGrid const&);
    ScriptWidgetComponentGrid(ScriptWidgetComponentGrid const&);
    ScriptWidgetComponentGrid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentGrid() /*override*/ = default;

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
