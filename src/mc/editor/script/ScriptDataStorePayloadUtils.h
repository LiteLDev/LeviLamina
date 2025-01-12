#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace Editor::ScriptModule {

struct ScriptDataStorePayloadUtils {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::optional<::std::variant<float, bool, ::std::string>>
    getScriptPayload(::Json::Value const& payload);
    // NOLINTEND
};

} // namespace Editor::ScriptModule
