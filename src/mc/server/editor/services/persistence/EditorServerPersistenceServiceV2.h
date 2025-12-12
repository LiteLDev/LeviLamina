#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceGroupChangeAction.h"
#include "mc/common/editor/PersistenceGroupItemChangeAction.h"
#include "mc/common/editor/PersistenceGroupType.h"
#include "mc/common/editor/PersistenceScope.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/services/persistence/EditorPersistenceServiceV2.h"

// auto generated forward declare list
// clang-format off
namespace Editor { class ServiceProviderCollection; }
namespace Editor::Network { class PersistenceQuerySharedGroupPayload; }
namespace Editor::Services { class PersistenceGroup; }
namespace Editor::Services { class PersistenceItem; }
namespace Editor::Services { struct PersistenceGroupItemMetadata; }
namespace Editor::Services { struct PersistenceGroupMetadata; }
// clang-format on

namespace Editor::Services {

class EditorServerPersistenceServiceV2 : public ::Editor::Services::EditorPersistenceServiceV2 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkaca8c2;
    ::ll::UntypedStorage<8, 32> mUnkca40d7;
    // NOLINTEND

public:
    // prevent constructor by default
    EditorServerPersistenceServiceV2& operator=(EditorServerPersistenceServiceV2 const&);
    EditorServerPersistenceServiceV2(EditorServerPersistenceServiceV2 const&);
    EditorServerPersistenceServiceV2();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorServerPersistenceServiceV2() /*override*/ = default;

    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    virtual ::Scripting::Result_deprecated<void> quit() /*override*/;

    virtual ::Scripting::Result_deprecated<void> ready() /*override*/;

    virtual ::std::string_view getServiceName() const /*override*/;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> getOrCreateGroup(
        ::std::string const&                                      namespacedName,
        ::Editor::Services::PersistenceScope                      scope,
        ::std::optional<int>                                      version,
        ::std::optional<::Editor::Services::PersistenceGroupType> groupType
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> createGroup(
        ::std::string const&                                      namespacedName,
        ::Editor::Services::PersistenceScope                      scope,
        ::std::optional<int>                                      version,
        ::std::optional<::Editor::Services::PersistenceGroupType> groupType
    ) /*override*/;

    virtual ::Scripting::Result_deprecated<void> deleteGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    ) /*override*/;

    virtual ::Core::PathBuffer<::std::string> _getGroupRootPath(::Editor::Services::PersistenceScope scope) const
        /*override*/;

    virtual bool _validateScope(::Editor::Services::PersistenceScope scope) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S explicit EditorServerPersistenceServiceV2(::Editor::ServiceProviderCollection& providers);

    MCNAPI ::Editor::Services::PersistenceGroupMetadata _createMetadata(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );

    MCNAPI void _dispatchGroupItemsToClient(
        ::Editor::Services::PersistenceGroupItemMetadata     item,
        ::Editor::Services::PersistenceGroupItemChangeAction action
    );

    MCNAPI void _dispatchGroupToClients(
        ::Editor::Services::PersistenceGroupChangeAction action,
        ::Editor::Services::PersistenceGroupMetadata     groupMetadata
    );

    MCNAPI ::std::string _getGroupItemKey(::std::string groupVersionName, ::Editor::Services::PersistenceScope scope);

    MCNAPI void _handleGroupItemChange(
        ::std::string                                          key,
        ::Editor::Services::PersistenceScope                   scope,
        ::Editor::Services::PersistenceGroupItemChangeAction   action,
        ::StackRefResult<::Editor::Services::PersistenceItem>& item
    );

    MCNAPI void _handleQuerySharedGroupPayload(::Editor::Network::PersistenceQuerySharedGroupPayload const& payload);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::Scripting::Result_deprecated<void> $quit();

    MCNAPI ::Scripting::Result_deprecated<void> $ready();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> $getOrCreateGroup(
        ::std::string const&                                      namespacedName,
        ::Editor::Services::PersistenceScope                      scope,
        ::std::optional<int>                                      version,
        ::std::optional<::Editor::Services::PersistenceGroupType> groupType
    );

    MCNAPI ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> $createGroup(
        ::std::string const&                                      namespacedName,
        ::Editor::Services::PersistenceScope                      scope,
        ::std::optional<int>                                      version,
        ::std::optional<::Editor::Services::PersistenceGroupType> groupType
    );

    MCNAPI ::Scripting::Result_deprecated<void> $deleteGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    );

    MCNAPI ::Core::PathBuffer<::std::string> $_getGroupRootPath(::Editor::Services::PersistenceScope scope) const;

    MCNAPI bool $_validateScope(::Editor::Services::PersistenceScope scope) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorPersistenceServiceV2Provider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
