#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/input/ChordHandle.h"
#include "ll/api/input/HandleBase.h"
#include "ll/api/input/KeyHandle.h"
#include "ll/api/input/WheelHandle.h"
#include "ll/api/mod/NativeMod.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"


class InputHandler;

namespace ll::input {

class KeyRegistry {
    friend HandleBase;
    friend KeyHandle;
    friend WheelHandle;
    friend ChordHandle;
    struct Impl;
    struct Hooks;
    std::unique_ptr<Impl> impl;

    KeyRegistry();

    void disableModKeys(std::string_view modName);

    [[nodiscard]] std::unique_lock<std::recursive_mutex> lock() const;

    void onInputHandlersRegister(::MinecraftInputHandler& mcInput);

    void onKeyboardAndMouseControlsUpdate(::VanillaClientInputMappingFactory& factory);

public:
    KeyRegistry(KeyRegistry&&)            = delete;
    KeyRegistry& operator=(KeyRegistry&&) = delete;

    LLNDAPI static KeyRegistry& getInstance();

    LLAPI KeyHandle& getOrCreateKey(
        std::string_view                      name,
        std::vector<int>                      defaultKeyCodes,
        bool                                  allowRemap = true,
        std::function<bool(std::string_view)> mappingSwitchProvider =
            [](std::string_view mapping) { return mapping.starts_with("gamePlay"); },
        FocusImpact focusImpact = FocusImpact::Neutral,
        std::weak_ptr<mod::Mod> = mod::NativeMod::current()
    );

    LLNDAPI WheelHandle& getOrCreateWheel(
        std::string_view name,
        bool             isDown,
        std::function<bool(std::string_view)> =
            [](std::string_view mapping) { return mapping.starts_with("gamePlay"); },
        std::weak_ptr<mod::Mod> mod = mod::NativeMod::current()
    );

    LLNDAPI ChordHandle& getOrCreateChord(
        std::string_view                      name,
        std::string                           triggerButtonName,
        std::vector<std::string>              modifierButtonNames,
        float                                 minHoldTime = 0.0f,
        std::function<bool(std::string_view)> mappingSwitchProvider =
            [](std::string_view mapping) { return mapping.starts_with("gamePlay"); },
        std::weak_ptr<mod::Mod> mod = mod::NativeMod::current()
    );

    LLNDAPI bool hasKey(std::string_view name, std::weak_ptr<mod::Mod> const& mod = mod::NativeMod::current());

    LLNDAPI bool hasWheel(std::string_view name, std::weak_ptr<mod::Mod> const& mod = mod::NativeMod::current());

    LLNDAPI bool hasChord(std::string_view name, std::weak_ptr<mod::Mod> const& mod = mod::NativeMod::current());

    LLNDAPI std::vector<std::string> getRegisteredKeys() const;

    LLNDAPI std::vector<std::string> getRegisteredWheels() const;

    LLNDAPI std::vector<std::string> getRegisteredChords() const;
};

} // namespace ll::input
