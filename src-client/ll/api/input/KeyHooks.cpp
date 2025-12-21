#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/KeyRegistrar.h"
#include "ll/api/memory/Hook.h"

#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/InputHandler.h"


LL_AUTO_TYPE_INSTANCE_HOOK(
    KeyHandlerRegisterHook0,
    ll::memory::HookPriority::High,
    RemappingLayout,
    &RemappingLayout::assignDefaultMapping,
    void,
    std::vector<::Keymapping>&& newDefaultMapping
) {
    ll::input::KeyRegistrar::getInstance().processPendingKeyMappings(newDefaultMapping);
    origin(std::move(newDefaultMapping));
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    KeyHandlerRegisterHook1,
    ll::memory::HookPriority::High,
    MinecraftInputHandler,
    &MinecraftInputHandler::$_registerInputHandlers,
    void
) {
    origin();
    ll::input::KeyRegistrar::getInstance().registerAllKeysToInputHandler(*this);
}

LL_AUTO_TYPE_INSTANCE_HOOK(
    KeyHandlerRegisterHook2,
    ll::memory::HookPriority::High,
    VanillaClientInputMappingFactory,
    &VanillaClientInputMappingFactory::_createBaseNormalGamePlayKeyboardAndMouseMapping,
    void,
    ::KeyboardInputMapping& normalGamePlayKeyboardMapping,
    ::MouseInputMapping&    normalGamePlayMouseMapping,
    bool                    isEmoteMapping
) {

    ll::input::KeyRegistrar::getInstance()
        .registerKeyboardInputs(*this, normalGamePlayKeyboardMapping, normalGamePlayMouseMapping, FocusImpact::Neutral);
    origin(normalGamePlayKeyboardMapping, normalGamePlayMouseMapping, isEmoteMapping);
}
