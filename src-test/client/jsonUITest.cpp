#include "ll/api/Versions.h"
#include "ll/api/memory/Hook.h"
#include "mc/deps/core/string/StringHash.h"
#include "mc/gui/screens/controllers/StartMenuScreenController.h"
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemInstance.h"
#include "mc/world/item/ItemStackBase.h"
#include "mc/world/level/Level.h"

namespace ll::test_jsonui {

LL_AUTO_TYPE_INSTANCE_HOOK(
    TESTOOKVERSION,
    HookPriority::Normal,
    StartMenuScreenController,
    &StartMenuScreenController::_registerBindings,
    void
) {
    bindString(
        StringHash("#gettime"),
        []() -> auto {
            auto    now        = std::chrono::system_clock::now();
            auto    time_t_now = std::chrono::system_clock::to_time_t(now);
            std::tm local_time{};
            localtime_s(&local_time, &time_t_now);
            return fmt::format("{:%Y-%m-%d %H:%M:%S}", local_time);
        },
        []() -> bool { return true; }
    );
    origin();
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
