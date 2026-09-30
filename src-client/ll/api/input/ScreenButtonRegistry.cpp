#include "ll/api/input/ScreenButtonRegistry.h"

#include <algorithm>

#include <mutex>
#include <vector>
#include <windows.h>

#include "ll/api/memory/Hook.h"
#include "ll/api/service/TargetedBedrock.h"
#include "ll/core/LeviLamina.h"

#include "mc/client/game/ClientInstance.h"
#include "mc/client/input/ClientInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/core/string/StringHash.h"
#include "mc/deps/input/InputHandler.h"
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
    };

    std::mutex                      mutex;
    std::vector<KeyboardButton>     keyboardButtons;
    std::vector<std::string>        wheelUpButtonNames;
    std::vector<std::string>        wheelDownButtonNames;
    std::unordered_set<std::string> inputHandlerRegisteredNames;
};

namespace {

// Vanilla rebuilds every input mapping template in _updateKeyboardAndMouseControls;
// appending to the live "screen" mapping (the input stack pushed for UI screens, see
// ClientInputHandler::pushInputMapping) after origin() registers our abstract buttons
// with exactly the same semantics as the vanilla screen buttons. This is the same
// injection point ll::input::KeyRegistry uses for custom keybindings.
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

ScreenButtonRegistry::ScreenButtonRegistry() : impl(std::make_unique<Impl>()) {}

ScreenButtonRegistry::~ScreenButtonRegistry() = default;

ScreenButtonRegistry& ScreenButtonRegistry::getInstance() {
    static ScreenButtonRegistry instance;
    return instance;
}

void ScreenButtonRegistry::registerMenuButtons() {
    // Button events are only dispatched to screens when the button name is registered
    // with the InputHandler (InputHandler::registerButtonDown/UpHandler); enqueued
    // events with unregistered ids are silently dropped. MinecraftInputHandler is
    // constructed before mods enable, so registering through
    // MinecraftInputHandler::_registerInputHandlers is too late — register directly
    // with the InputHandler, fabricating the same forwarding handler vanilla's
    // _registerMenuButton builds (a no-alloc std::function with the vanilla vtable and
    // the button hash captured).
    auto client = service::getClientInstance();
    if (!client) {
        return;
    }
    auto* clientInput = client->getInput();
    if (!clientInput) {
        return;
    }

    auto* inputHandler = *reinterpret_cast<::InputHandler**>(reinterpret_cast<char*>(clientInput) + 0x18);
    if (!inputHandler) {
        return;
    }

    struct alignas(8) VanillaFnStorage {
        uint64_t ptrs[8];
    };
    static_assert(sizeof(VanillaFnStorage) == sizeof(std::function<void(::FocusImpact, ::IClientInstance&)>));

    auto const  base       = reinterpret_cast<uintptr_t>(GetModuleHandleW(nullptr));
    void* const downVtable = reinterpret_cast<void*>(base + 0xE8C6B10); // off_14E8C6B10 (button down)
    void* const upVtable   = reinterpret_cast<void*>(base + 0xE8C6B40); // off_14E8C6B40 (button up)
    using Fn               = ::std::function<void(::FocusImpact, ::IClientInstance&)>;

    auto registerName = [&](std::string const& name) {
        if (!impl->inputHandlerRegisteredNames.insert(name).second) {
            return;
        }
        uint const hash = StringHash{name}.hash();

        VanillaFnStorage down{};
        down.ptrs[0] = reinterpret_cast<uint64_t>(downVtable);
        down.ptrs[1] = hash;
        down.ptrs[7] = reinterpret_cast<uint64_t>(&down);
        VanillaFnStorage up{};
        up.ptrs[0] = reinterpret_cast<uint64_t>(upVtable);
        up.ptrs[1] = hash;
        up.ptrs[7] = reinterpret_cast<uint64_t>(&up);

        inputHandler->registerButtonDownHandler(name, *reinterpret_cast<Fn*>(&down), false);
        inputHandler->registerButtonUpHandler(name, *reinterpret_cast<Fn*>(&up), false);
    };

    for (auto const& button : impl->keyboardButtons) {
        registerName(button.name);
    }
    for (auto const& name : impl->wheelUpButtonNames) {
        registerName(name);
    }
    for (auto const& name : impl->wheelDownButtonNames) {
        registerName(name);
    }
}

void ScreenButtonRegistry::appendToScreenMapping(::VanillaClientInputMappingFactory& factory) {
    std::lock_guard lock(impl->mutex);
    if (impl->keyboardButtons.empty() && impl->wheelUpButtonNames.empty() && impl->wheelDownButtonNames.empty()) {
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
    for (auto const& name : impl->wheelUpButtonNames) {
        it->second.mouseMapping->wheelUpButtonNames->emplace_back(name);
    }
    for (auto const& name : impl->wheelDownButtonNames) {
        it->second.mouseMapping->wheelDownButtonNames->emplace_back(name);
    }
}

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
        impl->keyboardButtons.push_back(Impl::KeyboardButton{std::move(buttonName), keyCode, focusImpact});
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
        auto const      contains = [](std::vector<std::string> const& names, std::string const& name) {
            return std::find(names.begin(), names.end(), name) != names.end();
        };
        if (contains(impl->wheelUpButtonNames, wheelUpButtonName)
            || contains(impl->wheelDownButtonNames, wheelDownButtonName)) {
            return false;
        }
        impl->wheelUpButtonNames.push_back(std::move(wheelUpButtonName));
        impl->wheelDownButtonNames.push_back(std::move(wheelDownButtonName));
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
    auto const      up   = std::erase(impl->wheelUpButtonNames, std::string{wheelUpButtonName});
    auto const      down = std::erase(impl->wheelDownButtonNames, std::string{wheelDownButtonName});
    return up > 0 && down > 0;
}

} // namespace ll::input
