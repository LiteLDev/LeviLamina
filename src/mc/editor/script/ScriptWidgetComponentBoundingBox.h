#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBoundingBox : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnkbedf59;
    ::ll::UntypedStorage<8, 24>  mUnk465970;
    ::ll::UntypedStorage<1, 1>   mUnk528215;
    ::ll::UntypedStorage<1, 1>   mUnkc088ec;
    ::ll::UntypedStorage<1, 1>   mUnk9d6c75;
    ::ll::UntypedStorage<4, 12>  mUnk7bd12f;
    ::ll::UntypedStorage<4, 12>  mUnked29f8;
    ::ll::UntypedStorage<4, 12>  mUnkf59555;
    ::ll::UntypedStorage<8, 32>  mUnke160c5;
    ::ll::UntypedStorage<8, 112> mUnke648d7;
    ::ll::UntypedStorage<1, 1>   mUnk3f23b7;
    ::ll::UntypedStorage<4, 4>   mUnk3c1e79;
    ::ll::UntypedStorage<4, 32>  mUnk5df0be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBoundingBox& operator=(ScriptWidgetComponentBoundingBox const&);
    ScriptWidgetComponentBoundingBox(ScriptWidgetComponentBoundingBox const&);
    ScriptWidgetComponentBoundingBox();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentBoundingBox() /*override*/ = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const /*override*/;

    virtual void
    _handleWidgetComponentStateChange(::Editor::Network::WidgetComponentStateChangePayload const&) /*override*/;

    virtual void _onOwnerPositionUpdate() /*override*/;
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
