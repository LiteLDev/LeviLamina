#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/WidgetComponentType.h"
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/editor/script/ScriptWidgetComponentBase.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::ScriptModule { class ScriptRelativeVolumeListBlockVolume; }
namespace ScriptModuleMinecraft { class ScriptBlockVolumeBase; }
namespace ScriptModuleMinecraft { class ScriptSimpleBlockVolume; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentVolumeOutline : public ::Editor::ScriptModule::ScriptWidgetComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk139812;
    ::ll::UntypedStorage<8, 24> mUnk95e828;
    ::ll::UntypedStorage<8, 24> mUnke9a2bb;
    ::ll::UntypedStorage<8, 24> mUnk60460d;
    ::ll::UntypedStorage<1, 1>  mUnk2f03b2;
    ::ll::UntypedStorage<1, 1>  mUnkf0ef0f;
    ::ll::UntypedStorage<1, 1>  mUnk31ee18;
    ::ll::UntypedStorage<1, 1>  mUnk9a64c6;
    ::ll::UntypedStorage<4, 12> mUnk12f3ff;
    ::ll::UntypedStorage<4, 12> mUnk155b18;
    ::ll::UntypedStorage<8, 32> mUnk64b844;
    ::ll::UntypedStorage<8, 40> mUnkd6102c;
    ::ll::UntypedStorage<8, 16> mUnk18a8be;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentVolumeOutline& operator=(ScriptWidgetComponentVolumeOutline const&);
    ScriptWidgetComponentVolumeOutline(ScriptWidgetComponentVolumeOutline const&);
    ScriptWidgetComponentVolumeOutline();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentVolumeOutline() /*override*/ = default;

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
