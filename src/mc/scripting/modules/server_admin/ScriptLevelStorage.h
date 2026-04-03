#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleServerAdmin { class ScriptLevelStorageSaveStateChangeError; }
namespace Scripting { class ModuleBindingBuilder; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleServerAdmin {

class ScriptLevelStorage {
public:
    // ScriptLevelStorage inner types declare
    // clang-format off
    struct ScriptLevelStorageQuerySnapshotFile;
    // clang-format on

    // ScriptLevelStorage inner types define
    struct ScriptLevelStorageQuerySnapshotFile {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk7ad974;
        ::ll::UntypedStorage<8, 8>  mUnk2a9ee6;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScriptLevelStorageQuerySnapshotFile& operator=(ScriptLevelStorageQuerySnapshotFile const&);
        ScriptLevelStorageQuerySnapshotFile(ScriptLevelStorageQuerySnapshotFile const&);
        ScriptLevelStorageQuerySnapshotFile();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::ScriptModuleServerAdmin::ScriptLevelStorage::ScriptLevelStorageQuerySnapshotFile&
        operator=(::ScriptModuleServerAdmin::ScriptLevelStorage::ScriptLevelStorageQuerySnapshotFile&&);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk48d05a;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptLevelStorage& operator=(ScriptLevelStorage const&);
    ScriptLevelStorage(ScriptLevelStorage const&);
    ScriptLevelStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveHold();

    MCNAPI ::Scripting::Result<
        ::std::vector<::Scripting::StrongTypedObjectHandle<
            ::ScriptModuleServerAdmin::ScriptLevelStorage::ScriptLevelStorageQuerySnapshotFile>>,
        ::ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError>
    saveQuery(::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ::Scripting::Result<void, ::ScriptModuleServerAdmin::ScriptLevelStorageSaveStateChangeError> saveResume();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bind(::Scripting::ModuleBindingBuilder& mod);
    // NOLINTEND
};

} // namespace ScriptModuleServerAdmin
