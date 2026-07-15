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

class ScriptWidgetComponentVolumeOutlineOptions : public ::Editor::ScriptModule::ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk337e61;
    ::ll::UntypedStorage<8, 32> mUnk9f8bb6;
    ::ll::UntypedStorage<8, 32> mUnk1fa68a;
    ::ll::UntypedStorage<8, 32> mUnk29cd7c;
    ::ll::UntypedStorage<1, 2>  mUnk6f9f4f;
    ::ll::UntypedStorage<1, 2>  mUnkc49051;
    ::ll::UntypedStorage<1, 2>  mUnkb1ac46;
    ::ll::UntypedStorage<1, 2>  mUnkf7bd52;
    ::ll::UntypedStorage<4, 16> mUnkf0201b;
    ::ll::UntypedStorage<4, 16> mUnk808108;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentVolumeOutlineOptions& operator=(ScriptWidgetComponentVolumeOutlineOptions const&);
    ScriptWidgetComponentVolumeOutlineOptions(ScriptWidgetComponentVolumeOutlineOptions const&);
    ScriptWidgetComponentVolumeOutlineOptions();

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
