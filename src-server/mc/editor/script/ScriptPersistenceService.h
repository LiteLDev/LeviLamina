#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/EnableGetWeakRef.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptPersistenceGroup; }
namespace Editor::Services { class PersistenceGroup; }
namespace Editor::Services { struct PersistenceGroupCreationOptions; }
namespace Editor::Services { struct PersistenceQueryGroupOptions; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct ContextConfig; }
namespace Scripting { struct EnumBinding; }
namespace Scripting { struct InterfaceBinding; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::ScriptModule {

class ScriptPersistenceService : public ::EnableGetWeakRef<::Editor::Services::PersistenceGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk4716fa;
    ::ll::UntypedStorage<8, 8> mUnk1f0d6e;
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
    MCNAPI ScriptPersistenceService(::Editor::ScriptModule::ScriptPersistenceService&&);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroup> _createScriptPersistenceGroup(::WeakRef<::Editor::Services::PersistenceGroup> groupRef);

    MCNAPI bool _validateNamespace(::Scripting::ContextConfig const& contextConfig, ::std::string namespacedName);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroup>> createGroup(::Scripting::ContextConfig const& contextConfig, ::std::string const& namespacedName, ::Editor::Services::PersistenceGroupCreationOptions options);

    MCNAPI ::Scripting::Result_deprecated<void> deleteGroup(::Scripting::ContextConfig const& contextConfig, ::std::string const& namespacedName, ::Editor::Services::PersistenceGroupCreationOptions options);

    MCNAPI ::Scripting::Result_deprecated<void> disposeAllGroups();

    MCNAPI ::Scripting::Result_deprecated<bool> disposeGroup(::mce::UUID uuid);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroup>>> fetchGroups(::Editor::Services::PersistenceQueryGroupOptions options);

    MCNAPI ::std::optional<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroup>> getGroup(::std::string const& namespacedName, ::Editor::Services::PersistenceGroupCreationOptions options);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroup>> getOrCreateGroup(::Scripting::ContextConfig const& contextConfig, ::std::string const& namespacedName, ::Editor::Services::PersistenceGroupCreationOptions options);

    MCNAPI ::Editor::ScriptModule::ScriptPersistenceService& operator=(::Editor::ScriptModule::ScriptPersistenceService&&);
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
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ScriptModule::ScriptPersistenceService&&);
    // NOLINTEND

};

}
