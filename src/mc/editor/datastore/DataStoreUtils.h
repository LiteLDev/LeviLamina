#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/runtime/scripting/Result_deprecated.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Services { class DataStoreServiceProvider; }
// clang-format on

namespace Editor {

class DataStoreUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::std::string>
    getSelectedModalTool(::Editor::Services::DataStoreServiceProvider& dataStore);

    MCNAPI static ::std::optional<::std::vector<::std::string>>
    getSortOrder(::Editor::Services::DataStoreServiceProvider& dataStore, ::std::string const& groupId);

    MCNAPI static ::Scripting::Result_deprecated<void> updateSelectedModalTool(
        ::Editor::Services::DataStoreServiceProvider& dataStore,
        ::std::optional<::std::string> const&         newToolId
    );

    MCNAPI static ::Scripting::Result_deprecated<void> updateSortOrder(
        ::Editor::Services::DataStoreServiceProvider&        dataStore,
        ::std::string const&                                 groupId,
        ::std::optional<::std::vector<::std::string>> const& sortOrder
    );
    // NOLINTEND
};

} // namespace Editor
