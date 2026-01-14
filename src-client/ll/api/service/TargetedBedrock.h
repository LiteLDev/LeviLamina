#pragma once

#include "ll/api/base/Macro.h"

#include "mc/deps/core/utility/optional_ref.h"

class Level;
class ClientInstance;
class AppPlatform;

namespace ll::service::inline bedrock {

LLNDAPI optional_ref<ClientInstance> getClientInstance();

LLNDAPI optional_ref<Level> getMultiPlayerLevel();

LLNDAPI optional_ref<AppPlatform> getAppPlatform();
} // namespace ll::service::inline bedrock
