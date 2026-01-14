#pragma once

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

class PropertiesSettings;
class ResourcePackRepository;

namespace ll::service::inline bedrock {

LLNDAPI optional_ref<PropertiesSettings> getPropertiesSettings();

LLNDAPI optional_ref<ResourcePackRepository> getResourcePackRepository();

} // namespace ll::service::inline bedrock
