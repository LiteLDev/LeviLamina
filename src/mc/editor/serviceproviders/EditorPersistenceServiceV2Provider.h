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

class EditorPersistenceServiceV2Provider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EditorPersistenceServiceV2Provider() = default;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> getOrCreateGroup(
        ::std::string const&,
        ::Editor::Services::PersistenceScope,
        ::std::optional<int>,
        ::std::optional<::Editor::Services::PersistenceGroupType>
    ) = 0;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>> createGroup(
        ::std::string const&,
        ::Editor::Services::PersistenceScope,
        ::std::optional<int>,
        ::std::optional<::Editor::Services::PersistenceGroupType>
    ) = 0;

    virtual ::Scripting::Result_deprecated<::StackRefResult<::Editor::Services::PersistenceGroup>>
    getGroup(::std::string const&, ::Editor::Services::PersistenceScope, ::std::optional<int>) = 0;

    virtual ::Scripting::Result_deprecated<void>
    deleteGroup(::std::string const&, ::Editor::Services::PersistenceScope, ::std::optional<int>) = 0;

    virtual ::Scripting::Result_deprecated<void>
    deleteGroup(::StackRefResult<::Editor::Services::PersistenceGroup> const) = 0;

    virtual ::std::vector<::StackRefResult<::Editor::Services::PersistenceGroup>> fetchGroups(
        ::std::optional<::std::string>,
        ::std::optional<::std::string>,
        ::std::optional<::Editor::Services::PersistenceScope>,
        ::std::optional<int>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
