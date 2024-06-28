#include <memory>

#include "ll/api/mod/Mod.h"
#include "ll/api/mod/RegisterHelper.h"

namespace test {

class MyMod {
    ll::mod::Mod& self;

public:
    explicit MyMod(ll::mod::Mod& self) : self(self) {}

    ~MyMod() = default;

    bool load() { return true; }

    bool unload() { return true; }

    bool enable() { return true; }

    bool disable() { return true; }

    void doSomething();
};

std::unique_ptr<class MyMod> myMod114;

LL_REGISTER_MOD(MyMod, myMod114);

} // namespace test
