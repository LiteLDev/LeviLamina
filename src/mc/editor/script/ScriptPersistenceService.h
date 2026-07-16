#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class PersistenceGroup; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPersistenceService : public ::EnableGetWeakRef<::Editor::Services::PersistenceGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4716fa;
    ::ll::UntypedStorage<8, 8>  mUnk5c47c7;
    ::ll::UntypedStorage<8, 64> mUnk84293d;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPersistenceService& operator=(ScriptPersistenceService const&);
    ScriptPersistenceService(ScriptPersistenceService const&);
    ScriptPersistenceService();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~ScriptPersistenceService();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();

    MCNAPI static ::Scripting::InterfaceBinding bindScriptPersistenceGroupCreationOptions();

    MCNAPI static ::Scripting::EnumBinding bindScriptPersistenceGroupType();

    MCNAPI static ::Scripting::InterfaceBinding bindScriptPersistenceQueryGroupOptions();

    MCNAPI static ::Scripting::EnumBinding bindScriptPersistenceScope();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
