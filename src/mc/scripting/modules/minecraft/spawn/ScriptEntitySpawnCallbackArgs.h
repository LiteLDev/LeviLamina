#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/EntitySpawnReason.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace br::spawn { struct EntityType; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptEntitySpawnCallbackArgs {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk89f51d;
    ::ll::UntypedStorage<2, 2>  mUnkcb3780;
    ::ll::UntypedStorage<8, 48> mUnk2967b1;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptEntitySpawnCallbackArgs& operator=(ScriptEntitySpawnCallbackArgs const&);
    ScriptEntitySpawnCallbackArgs(ScriptEntitySpawnCallbackArgs const&);
    ScriptEntitySpawnCallbackArgs();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptEntitySpawnCallbackArgs(
        ::Scripting::WeakLifetimeScope scope,
        ::br::spawn::EntityType const& entityType,
        ::br::spawn::EntitySpawnReason entitySpawnReason,
        ::BlockSource&                 region,
        ::Vec3                         position
    );

    MCNAPI ~ScriptEntitySpawnCallbackArgs();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::WeakLifetimeScope scope,
        ::br::spawn::EntityType const& entityType,
        ::br::spawn::EntitySpawnReason entitySpawnReason,
        ::BlockSource&                 region,
        ::Vec3                         position
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
