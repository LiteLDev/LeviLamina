#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Cone
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk54033c;
    ::ll::UntypedStorage<4, 4>  mUnkded177;
    ::ll::UntypedStorage<4, 4>  mUnk175704;
    ::ll::UntypedStorage<4, 4>  mUnk56a88d;
    ::ll::UntypedStorage<8, 24> mUnk68310a;
    ::ll::UntypedStorage<4, 8>  mUnk14d90c;
    ::ll::UntypedStorage<4, 16> mUnka3639b;
    ::ll::UntypedStorage<4, 8>  mUnk496b32;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Cone& operator=(ScriptWidgetComponentRenderPrimType_Cone const&);
    ScriptWidgetComponentRenderPrimType_Cone(ScriptWidgetComponentRenderPrimType_Cone const&);
    ScriptWidgetComponentRenderPrimType_Cone();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPrimType_Cone() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cone const& other) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
