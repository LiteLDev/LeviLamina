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

class ScriptWidgetComponentGridOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnk2977f6;
    ::ll::UntypedStorage<8, 32> mUnk2527e5;
    ::ll::UntypedStorage<4, 12> mUnk66bf43;
    ::ll::UntypedStorage<4, 12> mUnk92986b;
    ::ll::UntypedStorage<4, 12> mUnkb77c43;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentGridOptions& operator=(ScriptWidgetComponentGridOptions const&);
    ScriptWidgetComponentGridOptions(ScriptWidgetComponentGridOptions const&);
    ScriptWidgetComponentGridOptions();

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
