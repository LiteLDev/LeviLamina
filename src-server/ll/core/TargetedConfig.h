#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/reflection/Dispatcher.h"
#include "ll/core/Statistics.h"
#include "ll/core/tweak/SimpleServerLogger.h"

namespace ll {
struct TargetedConfig {
    ll::reflection::Dispatcher<bool, Statistics>                         enableStatitics = true;
    reflection::Dispatcher<SimpleServerLoggerConfig, SimpleServerLogger> simpleServerLogger{};
};
} // namespace ll
