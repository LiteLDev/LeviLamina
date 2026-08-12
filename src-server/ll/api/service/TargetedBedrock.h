#pragma once

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

struct PropertiesSettings;
class DedicatedServer;
namespace ll::service::inline bedrock {

LLNDAPI optional_ref<PropertiesSettings> getPropertiesSettings();

LLNDAPI optional_ref<DedicatedServer> getDedicatedServer();

} // namespace ll::service::inline bedrock
