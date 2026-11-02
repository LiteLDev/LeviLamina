#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/queries/core/PlatformType.h"
#include "mc/deps/ecs/WeakEntityRef.h"
#include "mc/scripting/modules/minecraft/device/ScriptSystemInfo.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptClientSystemInfo : public ::ScriptModuleMinecraft::ScriptSystemInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mPlayerRef;
    ::ll::TypedStorage<4, 4, ::PlatformType>   mPlatformType;
    ::ll::TypedStorage<4, 4, int>              mMaxRenderDistance;
    ::ll::TypedStorage<8, 32, ::std::string>   mLocale;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptClientSystemInfo& operator=(ScriptClientSystemInfo const&);
    ScriptClientSystemInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptClientSystemInfo(::ScriptModuleMinecraft::ScriptClientSystemInfo const&);

    MCNAPI explicit ScriptClientSystemInfo(::Player const& player);

    MCNAPI ::ScriptModuleMinecraft::ScriptClientSystemInfo&
    operator=(::ScriptModuleMinecraft::ScriptClientSystemInfo&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleMinecraft::ScriptClientSystemInfo const&);

    MCNAPI void* $ctor(::Player const& player);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
