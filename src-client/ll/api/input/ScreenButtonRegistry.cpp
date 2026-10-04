#include "ll/api/input/ScreenButtonRegistry.h"

#include <algorithm>

#include <mutex>
#include <vector>

#include "ll/api/memory/Hook.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "ll/api/mod/NativeMod.h"
#include "ll/api/service/TargetedBedrock.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/input/ClientInputHandler.h"
#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/InputMapping.h"
#include "mc/deps/input/KeyboardInputMapping.h"
#include "mc/deps/input/KeyboardKeyBinding.h"
#include "mc/deps/input/MouseButtonBinding.h"
#include "mc/deps/input/MouseInputMapping.h"

namespace ll::input {

struct ScreenButtonRegistry::Impl {
    struct KeyboardButton {
        std::string   name;
        int           keyCode;
        ::FocusImpact focusImpact;
        std::string   modName;
    };

    struct WheelButtons {
        std::string up;
        std::string down;
        std::string modName;
    };

    std::mutex                      mutex;
    std::vector<KeyboardButton>     keyboardButtons;
    std::vector<WheelButtons>       wheelButtons;
    std::unordered_set<std::string> inputHandlerRegisteredNames;
};

namespace {

LL_TYPE_INSTANCE_HOOK(
    UpdateKeyboardAndMouseControlsHook,
    memory::HookPriority::High,
    VanillaClientInputMappingFactory,
    &VanillaClientInputMappingFactory::$_updateKeyboardAndMouseControls,
    void,
    IOptionRegistry& options
) {
    origin(options);
    ScreenButtonRegistry::getInstance().appendToScreenMapping(*this);
}

} // namespace

ScreenButtonRegistry::ScreenButtonRegistry() : impl(std::make_unique<Impl>()) {
    mod::ModManagerRegistry::getInstance().executeOnModDisable([this](std::string_view name) {
        disableModButtons(name);
    });
}

ScreenButtonRegistry::~ScreenButtonRegistry() = default;

ScreenButtonRegistry& ScreenButtonRegistry::getInstance() {
    static ScreenButtonRegistry instance;
    return instance;
}

void ScreenButtonRegistry::registerMenuButtons() {
    // Button events are only dispatched when the button name is registered with the
    // InputHandler; MinecraftInputHandler is constructed before mods enable, so register
    // directly through the same helper vanilla menu buttons use.
    auto client = service::getClientInstance();
    if (!client) {
        return;
    }
    auto mcInput = client->getMinecraftInput();
    if (mcInput.get() == nullptr) {
        return;
    }

    auto registerName = [&](std::string const& name) {
        if (impl->inputHandlerRegisteredNames.insert(name).second) {
            mcInput->_registerMenuButton(name, false);
        }
    };

    for (auto const& button : impl->keyboardButtons) {
        registerName(button.name);
    }
    for (auto const& wheel : impl->wheelButtons) {
        registerName(wheel.up);
        registerName(wheel.down);
    }
}

void ScreenButtonRegistry::appendToScreenMapping(::VanillaClientInputMappingFactory& factory) {
    std::lock_guard lock(impl->mutex);
    if (impl->keyboardButtons.empty() && impl->wheelButtons.empty()) {
        return;
    }
    registerMenuButtons();
    auto it = factory.mActiveInputMappings->find("screen");
    if (it == factory.mActiveInputMappings->end()) {
        std::string keys;
        for (auto const& [name, mapping] : *factory.mActiveInputMappings) {
            if (!keys.empty()) keys += ", ";
            keys += name;
        }
        getLogger().warn("ScreenButtonRegistry: 'screen' mapping not found; active mappings: [{}]", keys);
        return;
    }
    for (auto const& button : impl->keyboardButtons) {
        it->second.keyboardMapping->keyBindings->emplace_back(button.name, button.keyCode, button.focusImpact);
    }
    for (auto const& wheel : impl->wheelButtons) {
        it->second.mouseMapping->wheelUpButtonNames->emplace_back(wheel.up);
        it->second.mouseMapping->wheelDownButtonNames->emplace_back(wheel.down);
    }
}

namespace {

std::string currentModName() {
    if (auto mod = mod::NativeMod::current()) {
        return mod->getName();
    }
    return {};
}

} // namespace

bool ScreenButtonRegistry::registerKeyboardButton(std::string buttonName, int keyCode, ::FocusImpact focusImpact) {
    if (buttonName.empty()) {
        return false;
    }
    {
        std::lock_guard lock(impl->mutex);
        for (auto const& button : impl->keyboardButtons) {
            if (button.name == buttonName) {
                return false;
            }
        }
        impl->keyboardButtons.push_back(
            Impl::KeyboardButton{std::move(buttonName), keyCode, focusImpact, currentModName()}
        );
    }
    static std::once_flag hookOnce;
    std::call_once(hookOnce, [] { memory::HookRegistrar<UpdateKeyboardAndMouseControlsHook>::hook(); });
    return true;
}

bool ScreenButtonRegistry::unregisterKeyboardButton(std::string_view buttonName) {
    std::lock_guard lock(impl->mutex);
    return std::erase_if(
               impl->keyboardButtons,
               [&](Impl::KeyboardButton const& button) { return button.name == buttonName; }
           )
         > 0;
}


bool ScreenButtonRegistry::registerMouseWheelButton(std::string wheelUpButtonName, std::string wheelDownButtonName) {
    if (wheelUpButtonName.empty() || wheelDownButtonName.empty()) {
        return false;
    }
    {
        std::lock_guard lock(impl->mutex);
        for (auto const& wheel : impl->wheelButtons) {
            if (wheel.up == wheelUpButtonName || wheel.down == wheelDownButtonName || wheel.up == wheelDownButtonName
                || wheel.down == wheelUpButtonName) {
                return false;
            }
        }
        impl->wheelButtons.push_back(
            Impl::WheelButtons{std::move(wheelUpButtonName), std::move(wheelDownButtonName), currentModName()}
        );
    }
    static std::once_flag hookOnce;
    std::call_once(hookOnce, [] { memory::HookRegistrar<UpdateKeyboardAndMouseControlsHook>::hook(); });
    return true;
}

bool ScreenButtonRegistry::unregisterMouseWheelButton(
    std::string_view wheelUpButtonName,
    std::string_view wheelDownButtonName
) {
    std::lock_guard lock(impl->mutex);
    return std::erase_if(
               impl->wheelButtons,
               [&](Impl::WheelButtons const& wheel) {
                   return wheel.up == wheelUpButtonName && wheel.down == wheelDownButtonName;
               }
           )
         > 0;
}

void ScreenButtonRegistry::disableModButtons(std::string_view modName) {
    std::lock_guard lock(impl->mutex);
    std::erase_if(impl->keyboardButtons, [&](Impl::KeyboardButton const& button) { return button.modName == modName; });
    std::erase_if(impl->wheelButtons, [&](Impl::WheelButtons const& wheel) { return wheel.modName == modName; });
}

} // namespace ll::input
