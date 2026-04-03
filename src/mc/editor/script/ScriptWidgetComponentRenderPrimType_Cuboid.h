#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/script/ScriptWidgetComponentRenderPrimTypeBase.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPrimType_Cuboid
: public ::Editor::ScriptModule::ScriptWidgetComponentRenderPrimTypeBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk8d797f;
    ::ll::UntypedStorage<4, 4>  mUnk949b2f;
    ::ll::UntypedStorage<4, 4>  mUnk64a46f;
    ::ll::UntypedStorage<4, 4>  mUnkd42cdf;
    ::ll::UntypedStorage<8, 24> mUnk94d2e0;
    ::ll::UntypedStorage<4, 16> mUnkd8cf4f;
    ::ll::UntypedStorage<4, 8>  mUnka1747a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPrimType_Cuboid& operator=(ScriptWidgetComponentRenderPrimType_Cuboid const&);
    ScriptWidgetComponentRenderPrimType_Cuboid(ScriptWidgetComponentRenderPrimType_Cuboid const&);
    ScriptWidgetComponentRenderPrimType_Cuboid();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentRenderPrimType_Cuboid() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::ScriptModule::ScriptWidgetComponentRenderPrimType_Cuboid const& other) const;
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
