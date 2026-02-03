#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/EntityType.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace ScriptModuleMinecraft { class ScriptAABB; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::br::spawn::EntityType> mEntityType;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnType(ScriptEntitySpawnType const&);
    ScriptEntitySpawnType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptAABB _getSpawnAABB(::Vec3 const& position) const;

    MCAPI ::ScriptModuleMinecraft::ScriptEntitySpawnType&
    operator=(::ScriptModuleMinecraft::ScriptEntitySpawnType const&);

    MCAPI ~ScriptEntitySpawnType();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
