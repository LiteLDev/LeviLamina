#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/editor/PersistenceGroupType.h"
#include "mc/common/editor/PersistenceScope.h"
#include "mc/deps/game_refs/StackRefResult.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class PersistenceGroup; }
// clang-format on

namespace Editor::Services {

class EditorPersistenceServiceProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPersistenceServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> getOrCreateGroup(
        ::std::string const&                                      namespacedName,
        ::Editor::Services::PersistenceScope                      scope,
        ::std::optional<int>                                      version,
        ::std::optional<::Editor::Services::PersistenceGroupType> groupType
    ) = 0;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> createGroup(
        ::std::string const&                                      namespacedName,
        ::Editor::Services::PersistenceScope                      scope,
        ::std::optional<int>                                      version,
        ::std::optional<::Editor::Services::PersistenceGroupType> groupType
    ) = 0;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> getGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> deleteGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    deleteGroup(::StackRefResult<::Editor::Services::PersistenceGroup> const group) = 0;

    virtual ::std::vector<::StackRefResult<::Editor::Services::PersistenceGroup>> fetchGroups(
        ::std::optional<::std::string>                        groupNamespace,
        ::std::optional<::std::string>                        namespacedName,
        ::std::optional<::Editor::Services::PersistenceScope> scope,
        ::std::optional<int>                                  version
    ) = 0;

    virtual ::Scripting::Result_deprecated<void> requestGroup(
        ::std::string const&                 namespacedName,
        ::Editor::Services::PersistenceScope scope,
        ::std::optional<int>                 version,
        ::std::function<void(::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>>)>
            callback
    ) = 0;

    virtual ::Scripting::Result_deprecated<void>
    syncAndSaveGroup(::StackRefResult<::Editor::Services::PersistenceGroup> group) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
