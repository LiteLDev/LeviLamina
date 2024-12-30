#include <memory>

#include "ll/api/mod/Mod.h"
#include "ll/api/mod/RegisterHelper.h"

namespace test {

class MyMod {
public:
    explicit MyMod() {}

    ~MyMod() = default;

    bool load() { return true; }

    bool unload() { return true; }

    bool enable() { return true; }

    bool disable() { return true; }

    void doSomething();
};

MyMod& getMyMod() {
    static MyMod ins;
    return ins;
}

LL_REGISTER_MOD(MyMod, getMyMod());

} // namespace test
