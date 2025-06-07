#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"

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

    MCNAPI static ::Scripting::Result_deprecated<void> updateSelectedModalTool(
        ::Editor::Services::DataStoreServiceProvider& dataStore,
        ::std::optional<::std::string> const&         newToolId
    );
    // NOLINTEND
};

} // namespace Editor
