#pragma once

#include "ll/api/base/Macro.h"

#include <memory>
#include <string>
#include <string_view>

#include "mc/deps/input/enums/FocusImpact.h"

#include <functional>

class IClientInstance;

class VanillaClientInputMappingFactory;
class MinecraftInputHandler;

namespace ll::input {

class ScreenButtonRegistry {
    struct Impl;
    std::unique_ptr<Impl> impl;

    ScreenButtonRegistry();

    void disableModButtons(std::string_view modName);

public:
    ScreenButtonRegistry(ScreenButtonRegistry const&) = delete;

    ScreenButtonRegistry& operator=(ScreenButtonRegistry const&) = delete;

    LLAPI ~ScreenButtonRegistry();

    LLNDAPI static ScreenButtonRegistry& getInstance();

    void appendToScreenMapping(::VanillaClientInputMappingFactory& factory);

    void registerMenuButtons();

    LLAPI bool
    registerKeyboardButton(std::string buttonName, int keyCode, ::FocusImpact focusImpact = ::FocusImpact::Neutral);

    LLAPI bool unregisterKeyboardButton(std::string_view buttonName);

    LLAPI bool registerMouseWheelButton(std::string wheelUpButtonName, std::string wheelDownButtonName);

    LLAPI bool unregisterMouseWheelButton(std::string_view wheelUpButtonName, std::string_view wheelDownButtonName);
};

} // namespace ll::input
