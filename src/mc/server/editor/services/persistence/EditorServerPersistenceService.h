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
    virtual ~EditorServerPersistenceService() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::std::string const& getPlayerSaveId() const /*override*/;

    virtual void
    _removePersistData(::HashedString const& key, ::Editor::Services::PersistentDataType const dataType) /*override*/;

    virtual void _tick(::Editor::ServiceProviderCollection& serviceProviderCollection) /*override*/;
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

    MCNAPI void $_tick(::Editor::ServiceProviderCollection& serviceProviderCollection);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorPersistenceServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
