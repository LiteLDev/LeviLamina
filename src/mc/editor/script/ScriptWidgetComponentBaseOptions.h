#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptWidgetComponentBaseOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk46e19c;
    ::ll::UntypedStorage<1, 2>  mUnkf44423;
    ::ll::UntypedStorage<1, 2>  mUnk2a2509;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptWidgetComponentBaseOptions& operator=(ScriptWidgetComponentBaseOptions const&);
    ScriptWidgetComponentBaseOptions(ScriptWidgetComponentBaseOptions const&);
    ScriptWidgetComponentBaseOptions();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptWidgetComponentBaseOptions() = default;

    virtual ::Scripting::Result_deprecated<void>
    validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBinding bindScript();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void>
    $validate(::AABB const& absoluteWorldBounds, ::Vec3 const& rootPosition, ::Vec3 const&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
