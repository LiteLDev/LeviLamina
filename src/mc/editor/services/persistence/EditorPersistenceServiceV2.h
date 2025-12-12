#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceGroupType.h"
#include "mc/common/editor/PersistenceScope.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/serviceproviders/EditorPersistenceServiceV2Provider.h"
#include "mc/editor/services/IEditorService.h"
#include "mc/editor/services/PayloadStoreHelper.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Services { class PersistenceGroup; }
namespace Editor::Services { struct PersistenceGroupManifest; }
// clang-format on

namespace Editor::Services {

class EditorPersistenceServiceV2 : public ::Editor::Services::IEditorService,
                                   public ::Editor::Services::EditorPersistenceServiceV2Provider,
                                   public ::Editor::Services::PayloadStoreHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnke2c956;
    ::ll::UntypedStorage<8, 24> mUnk1d7142;
    ::ll::UntypedStorage<8, 24> mUnk66e0d5;
    ::ll::UntypedStorage<8, 8>  mUnk831bec;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorPersistenceServiceV2& operator=(EditorPersistenceServiceV2 const&);
    EditorPersistenceServiceV2(EditorPersistenceServiceV2 const&);
    EditorPersistenceServiceV2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPersistenceServiceV2() /*override*/;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> getGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> deleteGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void>
    deleteGroup(::StackRefResult<::Editor::Services::PersistenceGroup> const group) /*override*/;

    virtual ::std::vector<::StackRefResult<::Editor::Services::PersistenceGroup>> fetchGroups(
        ::std::optional<::std::string>                        groupNamespace,
        ::std::optional<::std::string>                        namespacedName,
        ::std::optional<::Editor::Services::PersistenceScope> scope,
        ::std::optional<int>                                  version
    ) /*override*/;

    virtual bool _validateScope(::Editor::Services::PersistenceScope) const = 0;

    virtual ::Core::PathBuffer<::std::string> _getGroupRootPath(::Editor::Services::PersistenceScope) const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit EditorPersistenceServiceV2(::Editor::ServiceProviderCollection& providers);

    MCNAPI ::WeakRef<::Editor::Services::PersistenceGroup> _createCacheGroup(
        ::std::string const&                     namespacedName,
        ::Editor::Services::PersistenceScope     scope,
        int                                      version,
        ::Editor::Services::PersistenceGroupType groupType
    );

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> _createGroup(
        ::std::string const&                     namespacedName,
        ::Editor::Services::PersistenceScope     scope,
        ::std::optional<int>                     version,
        ::Editor::Services::PersistenceGroupType groupType
    );

    MCNAPI ::StackRefResult<::Editor::Services::PersistenceGroup> _getGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );

    MCNAPI ::Core::PathBuffer<::Core::BasicStackString<char, 1024>>
    _getManifestFilePath(::Editor::Services::PersistenceScope scope);

    MCNAPI int _getMaxVersion(::std::string const& namespacedName, ::Editor::Services::PersistenceScope scope);

    MCNAPI ::Core::PathBuffer<::std::string> _getPath(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    ) const;

    MCNAPI void _loadGroupMetaData(::Editor::Services::PersistenceScope scope);

    MCNAPI ::std::optional<::Editor::Services::PersistenceGroupManifest> _parseJsonToGroupManifest(::std::string value);

    MCNAPI bool _saveGroupMetaData(::Editor::Services::PersistenceScope scope);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> $getGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );

    MCNAPI ::Scripting::Result_deprecated<void> $deleteGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );

    MCNAPI ::Scripting::Result_deprecated<void>
    $deleteGroup(::StackRefResult<::Editor::Services::PersistenceGroup> const group);

    MCNAPI ::std::vector<::StackRefResult<::Editor::Services::PersistenceGroup>> $fetchGroups(
        ::std::optional<::std::string>                        groupNamespace,
        ::std::optional<::std::string>                        namespacedName,
        ::std::optional<::Editor::Services::PersistenceScope> scope,
        ::std::optional<int>                                  version
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIEditorService();

    MCNAPI static void** $vftableForEditorPersistenceServiceV2Provider();
    // NOLINTEND
};

} // namespace Editor::Services
