#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"

// auto generated forward declare list
// clang-format off
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPersistenceGroup : public ::Scripting::WeakHandleFromThis<::Editor::ScriptModule::ScriptPersistenceGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk34c15e;
    ::ll::UntypedStorage<8, 16> mUnk232ba2;
    ::ll::UntypedStorage<8, 16> mUnkd87475;
    ::ll::UntypedStorage<8, 16> mUnk71de30;
    ::ll::UntypedStorage<8, 64> mUnk296f5a;
    ::ll::UntypedStorage<8, 8>  mUnkdd5278;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPersistenceGroup& operator=(ScriptPersistenceGroup const&);
    ScriptPersistenceGroup(ScriptPersistenceGroup const&);
    ScriptPersistenceGroup();

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
