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

class ScriptWidgetComponentClipboardOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 2>  mUnk6e5b33;
    ::ll::UntypedStorage<1, 2>  mUnkc882fe;
    ::ll::UntypedStorage<4, 16> mUnk320886;
    ::ll::UntypedStorage<4, 16> mUnkac6d6a;
    ::ll::UntypedStorage<1, 2>  mUnk12aa80;
    ::ll::UntypedStorage<8, 32> mUnk4bcb08;
    ::ll::UntypedStorage<8, 32> mUnkfd7ba1;
    ::ll::UntypedStorage<8, 32> mUnk10d5e2;
    ::ll::UntypedStorage<8, 32> mUnk44a836;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentClipboardOptions& operator=(ScriptWidgetComponentClipboardOptions const&);
    ScriptWidgetComponentClipboardOptions(ScriptWidgetComponentClipboardOptions const&);
    ScriptWidgetComponentClipboardOptions();

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
