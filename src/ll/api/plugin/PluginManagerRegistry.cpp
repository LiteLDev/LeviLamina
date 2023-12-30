#include "ll/api/plugin/PluginManagerRegistry.h"

#include "ll/core/LeviLamina.h"

namespace ll::plugin {
PluginManagerRegistry& PluginManagerRegistry::getInstance() {
    static PluginManagerRegistry instance;
    return instance;
}
} // namespace ll::plugin
