#include <memory>

#include "ll/api/plugin/Plugin.h"
#include "ll/api/plugin/RegisterHelper.h"

namespace test {

class MyPlugin {
    ll::plugin::Plugin& self;

public:
    explicit MyPlugin(ll::plugin::Plugin& self) : self(self) {}

    ~MyPlugin() = default;

    bool load() { return true; }

    bool unload() { return true; }

    bool enable() { return true; }

    bool disable() { return true; }

    void doSomething();
};

std::unique_ptr<class MyPlugin> myPlugin114;

LL_REGISTER_PLUGIN(MyPlugin, myPlugin114);

} // namespace test
