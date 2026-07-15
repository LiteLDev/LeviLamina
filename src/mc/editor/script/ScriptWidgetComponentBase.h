#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/editor/script/ScriptWidgetComponent_WidgetInterface.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Network { class WidgetComponentStateChangePayload; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBase
: public ::Editor::ScriptModule::ScriptWidgetComponent_WidgetInterface,
  public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptWidgetComponentBase> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk677b3a;
    ::ll::UntypedStorage<8, 8>  mUnk9aec33;
    ::ll::UntypedStorage<1, 1>  mUnk3edffa;
    ::ll::UntypedStorage<8, 32> mUnke816e4;
    ::ll::UntypedStorage<8, 16> mUnk25ae07;
    ::ll::UntypedStorage<8, 32> mUnkc88826;
    ::ll::UntypedStorage<4, 12> mUnk2bdc64;
    ::ll::UntypedStorage<1, 1>  mUnk4f80ca;
    ::ll::UntypedStorage<1, 1>  mUnke2205c;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBase& operator=(ScriptWidgetComponentBase const&);
    ScriptWidgetComponentBase(ScriptWidgetComponentBase const&);
    ScriptWidgetComponentBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentBase() = default;

    virtual ::Editor::Widgets::WidgetComponentType const getComponentType() const = 0;

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
