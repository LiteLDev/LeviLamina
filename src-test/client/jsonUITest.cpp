#include "ll/api/Versions.h"
#include "ll/api/memory/Hook.h"
#include "mc/deps/json/Value.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/components/FoodItemComponentLegacy.h"
#include "mc/world/level/Level.h"


class StringHash {
    const unsigned int m_hash;

public:
    StringHash(unsigned int hash) : m_hash(hash) {}
    [[nodiscard]] unsigned int getHash() const { return m_hash; }
    operator unsigned int() const { return m_hash; }
};

class PropertyBag {
protected:
    Json::Value mJsonValue;     // this+0x0
    int         mChangeVersion; // this+0x10
};

class UIPropertyBag : public PropertyBag {};

class ScreenController {
public:
    char                                                                                           pad_0x0000[2512];
    std::unordered_map<unsigned int, std::function<void(int, std::string const&, UIPropertyBag&)>> mBindCallbacks;

public:
    MCAPI void bindString(
        class StringHash const&                       bindingName,
        class std::function<std::string(void)> const& callback,
        class std::function<bool(void)> const&        condition
    );
};

namespace ll::test_jsonui {

uint versionHash = 3295792350;
auto version     = StringHash(versionHash);

LL_AUTO_TYPE_INSTANCE_HOOK(
    TESTOOKVERSION,
    HookPriority::Normal,
    ScreenController,
    &ScreenController::bindString,
    void,
    class StringHash const&                       bindingName,
    class std::function<std::string(void)> const& callback,
    class std::function<bool(void)> const&        condition
) {
    if (mBindCallbacks.find(versionHash) != mBindCallbacks.end()) {
        mBindCallbacks.erase(versionHash);
        auto gameVer   = getGameVersion();
        auto loaderVer = getLoaderVersion();
        origin(
            version,
            [=]() -> auto {
                return fmt::format(
                    "v{}.{}.{}/LL-{}.{}.{}",
                    gameVer.major,
                    gameVer.minor,
                    gameVer.patch,
                    loaderVer.major,
                    loaderVer.minor,
                    loaderVer.patch
                );
            },
            []() -> auto { return true; }
        );
    }
    origin(bindingName, callback, condition);
}


LL_AUTO_TYPE_INSTANCE_HOOK(
    TESTAAAA,
    HookPriority::Normal,
    Item,
    "?appendFormattedHovertext@Item@@UEBAXAEBVItemStackBase@@AEAVLevel@@AEAV?$basic_string@DU?$char_traits@D@std@@"
    "V?$"
    "allocator@D@2@@std@@_N@Z",
    void,
    class ItemStackBase const& stack,
    Level&                     level,
    std::string&               hovertext,
    bool                       showCategory
) {

    origin(stack, level, hovertext, showCategory);
    uint64_t max = stack.getItem()->getMaxDamage();
    if (max != 0) {
        uint64_t current = max - stack.getDamageValue();
        hovertext.append(fmt::format("\n§7耐久: {} / {}§r", current, max));
    }

    if (stack.mChargedItem && stack.mItem && stack.getTypeName() == "minecraft:crossbow") {
        hovertext.append(fmt::format("\n§7弹药: {}§r", stack.mChargedItem->toString()));
    }

    auto foodComp = (stack.mItem->getFood());

    if (foodComp) {
        auto hunger             = ll::memory::dAccess<int>(foodComp, 16);
        auto saturationModifier = ll::memory::dAccess<float>(foodComp, 20);
        auto saturation         = saturationModifier * 2.0f * static_cast<float>(hunger);
        hovertext.append(fmt::format("\n§7饥饿值: {}§r", hunger));
        hovertext.append(fmt::format("\n§7饱和度: {:.2f}§r", saturation));
    }
}
} // namespace ll::test_jsonui
