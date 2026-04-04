#pragma once

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

struct PropertiesSettings;

namespace ll::service::inline bedrock {

LLNDAPI optional_ref<PropertiesSettings> getPropertiesSettings();

} // namespace ll::service::inline bedrock
