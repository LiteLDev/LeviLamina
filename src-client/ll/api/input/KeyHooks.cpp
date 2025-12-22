#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/KeyRegistry.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/InputHandler.h"

namespace ll::input {
struct KeyRegistry::Hooks {
    struct KeyHandlerRegisterHook0;
    struct KeyHandlerRegisterHook1;
    struct KeyHandlerRegisterHook2;

    using HookReg = memory::HookRegistrar<
      KeyHandlerRegisterHook0,
      KeyHandlerRegisterHook1,
      KeyHandlerRegisterHook2>;

    static HookReg hookRegister;
};

LL_TYPE_INSTANCE_HOOK(
    KeyRegistry::Hooks::KeyHandlerRegisterHook0,
    ll::memory::HookPriority::High,
    RemappingLayout,
    &RemappingLayout::assignDefaultMapping,
    void,
    std::vector<::Keymapping>&& newDefaultMapping
) {
    ll::input::KeyRegistry::getInstance().processPendingKeyMappings(newDefaultMapping);
    origin(std::move(newDefaultMapping));
}

LL_TYPE_INSTANCE_HOOK(
    KeyRegistry::Hooks::KeyHandlerRegisterHook1,
    ll::memory::HookPriority::High,
    MinecraftInputHandler,
    &MinecraftInputHandler::$_registerInputHandlers,
    void
) {
    origin();
    ll::input::KeyRegistry::getInstance().registerAllKeysToInputHandler(*this);
}

LL_TYPE_INSTANCE_HOOK(
    KeyRegistry::Hooks::KeyHandlerRegisterHook2,
    ll::memory::HookPriority::High,
    VanillaClientInputMappingFactory,
    &VanillaClientInputMappingFactory::_createBaseNormalGamePlayKeyboardAndMouseMapping,
    void,
    ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
    ::MouseInputMapping&    normalGamePlayMouseMapping,
    bool                    isEmoteMapping
) {

    ll::input::KeyRegistry::getInstance()
        .registerKeyboardInputs(*this, normalGamePlayKeyboardMapping, normalGamePlayMouseMapping, FocusImpact::Neutral);
    origin(normalGamePlayKeyboardMapping, normalGamePlayMouseMapping, isEmoteMapping);
}

KeyRegistry::Hooks::HookReg KeyRegistry::Hooks::hookRegister;

} // namespace ll::input
