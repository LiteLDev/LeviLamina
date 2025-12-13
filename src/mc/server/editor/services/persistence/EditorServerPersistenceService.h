#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/persistence/EditorPersistenceService.h"
#include "mc/editor/services/persistence/PersistentDataType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
// clang-format on

namespace Editor::Services {

class EditorServerPersistenceService : public ::Editor::Services::EditorPersistenceService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke0f2d7;
    ::ll::UntypedStorage<1, 1>  mUnkedb2c6;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerPersistenceService& operator=(EditorServerPersistenceService const&);
    EditorServerPersistenceService(EditorServerPersistenceService const&);
    EditorServerPersistenceService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EditorServerPersistenceService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 3
    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    // vIndex: 2
    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 8
    virtual ::std::string const& getPlayerSaveId() const /*override*/;

    // vIndex: 7
    virtual void
    _removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) /*override*/;

    // vIndex: 8
    virtual void _tick(::Editor::ServiceProviderCollection& serviceProvider) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _loadPersistDataFromLevel();

    MCNAPI void _removePersistDataFromLevel(::HashedString const& key);

    MCNAPI void _saveDataOnLevel(::HashedString const& key, ::std::string value);

    MCNAPI void _savePersistDataOnLevel();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& LEVEL_STORAGE_PERSISTDATA_KEY_SUFFIX();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::std::string const& $getPlayerSaveId() const;

    MCNAPI void $_removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType);

    MCNAPI void $_tick(::Editor::ServiceProviderCollection& serviceProvider);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorPersistenceServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
