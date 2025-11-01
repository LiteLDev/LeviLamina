#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/scripting/modules/minecraft/ScriptActorFilter.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptActorQueryOptions : public ::ScriptModuleMinecraft::ScriptActorFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mPosition;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMinDistance;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mMaxDistance;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mClosest;
    ::ll::TypedStorage<4, 8, ::std::optional<int>> mFarthest;
    ::ll::TypedStorage<4, 16, ::std::optional<::Vec3>> mVolume;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptActorQueryOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bindV010();

    MCAPI static ::Scripting::InterfaceBinding bindV1();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};

}
