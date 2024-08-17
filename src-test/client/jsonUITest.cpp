#include "ll/api/Versions.h"
#include "ll/api/memory/Hook.h"
#include "mc/deps/json/Value.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/item/components/FoodItemComponentLegacy.h"
#include "mc/world/level/Level.h"


class StringHash {
    uint mHash{2166136261u};

public:
    template <size_t N>
    consteval StringHash(char const (&str)[N]) : StringHash(std::string_view{str}) {}
    constexpr StringHash(std::string_view str) {
        for (auto c : str) {
            mHash ^= c;
            mHash *= 16777619u;
        }
    }
    [[nodiscard]] uint hash() const { return mHash; }
    operator uint() const { return mHash; }
};

class PropertyBag {
protected:
    Json::Value mJsonValue;     // this+0x0
    int         mChangeVersion; // this+0x10
};

class UIPropertyBag : public PropertyBag {};

class ScreenController {
public:
    char                                                                                   pad_0x0000[2512];
    std::unordered_map<uint, std::function<void(std::string const&, UIPropertyBag&)>>      mBindCallbacks;
    std::unordered_map<uint, std::function<void(int, std::string const&, UIPropertyBag&)>> mCollectionBindCallbacks;
    std::unordered_map<uint, std::function<void(std::string const&, int, std::string const&, UIPropertyBag&)>>
        mAnyCollectionBindCallbacks;

public:
    MCAPI void bindString(
        class StringHash const&                       bindingName,
        class std::function<std::string(void)> const& callback,
        class std::function<bool(void)> const&        condition
    );
};

namespace ll::test_jsonui {

auto version = StringHash("#version");

LL_AUTO_TYPE_INSTANCE_HOOK(
    TESTOOKVERSION,
    HookPriority::Normal,
    ScreenController,
    &ScreenController::bindString,
    void,
    StringHash const&                       bindingName,
    std::function<std::string(void)> const& callback,
    std::function<bool(void)> const&        condition
) {
    if (mBindCallbacks.find(version) != mBindCallbacks.end()) {
        mBindCallbacks.erase(version);
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
    } else {
        origin(bindingName, callback, condition);
    }
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
