#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptPersistenceGroupItem; }
namespace Editor::ScriptModule { class ScriptPersistenceService; }
namespace Editor::Services { class PersistenceGroup; }
namespace Editor::Services { class PersistenceItem; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
namespace Scripting { struct Error; }
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
    ::ll::UntypedStorage<8, 64> mUnkdae144;
    ::ll::UntypedStorage<8, 8> mUnkdd5278;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPersistenceGroup& operator=(ScriptPersistenceGroup const&);
    ScriptPersistenceGroup(ScriptPersistenceGroup const&);
    ScriptPersistenceGroup();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptPersistenceGroup(::WeakRef<::Editor::Services::PersistenceGroup> persistenceGroup, ::Editor::ScriptModule::ScriptPersistenceService* owner, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem> _createScriptPersistenceGroupItem(::WeakRef<::Editor::Services::PersistenceItem> groupItemRef);

    MCNAPI ::Scripting::Error _getInvalidGroupError() const;

    MCNAPI ::Scripting::Result_deprecated<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem>> createItem(::std::string const& itemName, ::std::optional<::std::string> defaultJsonValue);

    MCNAPI ::Scripting::Result_deprecated<void> deleteItem(::std::string const& itemName);

    MCNAPI ::Scripting::Result_deprecated<bool> dispose();

    MCNAPI ::Scripting::Result_deprecated<void> disposeAllGroupItems();

    MCNAPI ::Scripting::Result_deprecated<bool> disposeGroupItem(::std::string key);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem>> fetchItem(::std::string const& itemName);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem>> getOrCreateItem(::std::string const& itemName, ::std::optional<::std::string> defaultJsonValue);

    MCNAPI ::Scripting::Result_deprecated<::std::vector<::std::string>> listItems() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WeakRef<::Editor::Services::PersistenceGroup> persistenceGroup, ::Editor::ScriptModule::ScriptPersistenceService* owner, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

};

}
