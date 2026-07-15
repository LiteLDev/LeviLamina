#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/script/ScriptWidgetComponentBaseOptions.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentRenderPlaneOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk29ce65;
    ::ll::UntypedStorage<8, 32> mUnka1857a;
    ::ll::UntypedStorage<8, 32> mUnk2300e3;
    ::ll::UntypedStorage<4, 8>  mUnk30c4c8;
    ::ll::UntypedStorage<4, 8>  mUnkbc325d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentRenderPlaneOptions& operator=(ScriptWidgetComponentRenderPlaneOptions const&);
    ScriptWidgetComponentRenderPlaneOptions(ScriptWidgetComponentRenderPlaneOptions const&);
    ScriptWidgetComponentRenderPlaneOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::Result_deprecated<void> validate(::AABB const&, ::Vec3 const&, ::Vec3 const&) const
        /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::ScriptModule
