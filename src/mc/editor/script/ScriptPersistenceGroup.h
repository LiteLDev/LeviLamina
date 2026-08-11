#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakTypedObjectHandle.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::ScriptModule { class ScriptPersistenceGroupItem; }
namespace Editor::Services { class PersistenceItem; }
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
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem>
    _createScriptPersistenceGroupItem(::WeakRef<::Editor::Services::PersistenceItem> groupItemRef);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem>>
    createItem(::std::string const& itemName, ::std::optional<::std::string> defaultJsonValue);

    MCNAPI ::Scripting::Result_deprecated<bool> disposeGroupItem(::std::string const key);

    MCNAPI ::Scripting::Result_deprecated<
        ::Scripting::WeakTypedObjectHandle<::Editor::ScriptModule::ScriptPersistenceGroupItem>>
    getOrCreateItem(::std::string const& itemName, ::std::optional<::std::string> defaultJsonValue);

    MCNAPI ~ScriptPersistenceGroup();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bindScript();
    // NOLINTEND
};

} // namespace Editor::ScriptModule
