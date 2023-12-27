#include "ll/api/plugin/PluginRegistry.h"

namespace ll::plugin {
PluginRegistry& PluginRegistry::getInstance() {
    static PluginRegistry instance;
    return instance;
}
} // namespace ll