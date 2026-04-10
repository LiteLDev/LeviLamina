#include "gtest/gtest.h"

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

TEST(ModRegisterTest, RegisterModHelperReturnsSingletonInstance) {
    auto& mod1 = getMyMod();
    auto& mod2 = getMyMod();

    EXPECT_EQ(&mod1, &mod2);
    EXPECT_TRUE(mod1.load());
    EXPECT_TRUE(mod1.enable());
    EXPECT_TRUE(mod1.disable());
    EXPECT_TRUE(mod1.unload());
}

} // namespace test
