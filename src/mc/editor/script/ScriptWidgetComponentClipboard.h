#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptClipboardItem; }
namespace Editor::ScriptModule { class ScriptEditorStructure; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentClipboard : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk192ed4;
    ::ll::UntypedStorage<1, 1>  mUnk81f975;
    ::ll::UntypedStorage<1, 1>  mUnkd4706b;
    ::ll::UntypedStorage<4, 12> mUnk62bf0a;
    ::ll::UntypedStorage<4, 12> mUnk865513;
    ::ll::UntypedStorage<1, 1>  mUnkba9362;
    ::ll::UntypedStorage<8, 24> mUnk86fec1;
    ::ll::UntypedStorage<8, 24> mUnkaa0b3f;
    ::ll::UntypedStorage<8, 24> mUnk75e7a4;
    ::ll::UntypedStorage<8, 24> mUnk118379;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboard& operator=(ScriptWidgetComponentClipboard const&);
    ScriptWidgetComponentClipboard(ScriptWidgetComponentClipboard const&);
    ScriptWidgetComponentClipboard();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentClipboard() /*override*/ = default;

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
