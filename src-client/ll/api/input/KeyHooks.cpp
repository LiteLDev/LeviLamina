#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/KeyRegistry.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/InputHandler.h"
#include "mc/deps/input/InputMapping.h"

namespace ll::input {


struct KeyRegistry::Hooks {
    struct KeyHandlerRegisterHook;
    struct InputHandlerRegisterHook;

    using HookReg = memory::HookRegistrar<KeyHandlerRegisterHook, InputHandlerRegisterHook>;

    static HookReg hookRegister;
};

LL_TYPE_INSTANCE_HOOK(
    KeyRegistry::Hooks::InputHandlerRegisterHook,
    ll::memory::HookPriority::High,
    MinecraftInputHandler,
    &MinecraftInputHandler::$_registerInputHandlers,
    void
) {
    origin();
    ll::input::KeyRegistry::getInstance().onInputHandlersRegister(*this);
}

LL_TYPE_INSTANCE_HOOK(
    KeyRegistry::Hooks::KeyHandlerRegisterHook,
    ll::memory::HookPriority::High,
    VanillaClientInputMappingFactory,
    &VanillaClientInputMappingFactory::$_updateKeyboardAndMouseControls,
    void,
    IOptionRegistry& options
) {
    origin(options);
    ll::input::KeyRegistry::getInstance().onKeyboardAndMouseControlsUpdate(*this);
}


KeyRegistry::Hooks::HookReg KeyRegistry::Hooks::hookRegister;

} // namespace ll::input
