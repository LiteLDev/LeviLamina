#include "ll/api/plugin/PluginManagerRegistry.h"

namespace ll::plugin {
PluginManagerRegistry& PluginManagerRegistry::getInstance() {
    static PluginManagerRegistry instance;
    return instance;
}
} // namespace ll