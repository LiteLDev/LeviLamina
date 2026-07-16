#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceGroupType.h"
#include "mc/common/editor/PersistenceScope.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"
#include "mc/editor/services/persistence/EditorPersistenceService.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class PersistenceGroup; }
// clang-format on

namespace Editor::Services {

class EditorServerPersistenceService : public ::Editor::Services::EditorPersistenceService {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkf8a37e;
    ::ll::UntypedStorage<8, 32> mUnk4a2014;
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


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEditorPersistenceServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
