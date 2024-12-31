#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/services/playtest/SessionResult.h"
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/binding_type/EnumBindingBuilder.h"

// auto generated forward declare list
// clang-format off
class Player;
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPlaytestLauncher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkedb14b;
    ::ll::UntypedStorage<8, 8>  mUnk2af753;
    ::ll::UntypedStorage<8, 24> mUnk6c9ff7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPlaytestLauncher& operator=(ScriptPlaytestLauncher const&);
    ScriptPlaytestLauncher(ScriptPlaytestLauncher const&);
    ScriptPlaytestLauncher();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptPlaytestLauncher() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptPlaytestLauncher(::Player& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::Editor::ScriptModule::ScriptPlaytestLauncher> bindClass();

    MCAPI static ::Scripting::EnumBindingBuilder<::Editor::Playtest::SessionResult, ::Editor::Playtest::SessionResult>
    bindSessionResultEnums();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player& player, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
