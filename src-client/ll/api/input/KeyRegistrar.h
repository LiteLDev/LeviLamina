#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

#include "ll/api/base/Macro.h"
#include "ll/api/mod/NativeMod.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/input/Keymapping.h"
#include "mc/client/input/MinecraftInputHandler.h"
#include "mc/client/input/VanillaClientInputMappingFactory.h"
#include "mc/deps/input/enums/FocusImpact.h"

namespace ll::mod {
class Mod;
}

namespace ll::input {

class KeyHandle;

class KeyRegistrar {
    friend KeyHandle;
    struct Impl;
    std::unique_ptr<Impl> impl;

    KeyRegistrar();

    void disableModKeys(std::string_view modName);

public:
    using ButtonDownHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(::FocusImpact, ::IClientInstance&)>;

    LLAPI static KeyRegistrar& getInstance();

    void clear();

    LLAPI KeyHandle& getOrCreateKey(
        std::string const&      name,
        std::vector<int>        defaultKeyCodes,
        bool                    allowRemap = true,
        std::weak_ptr<mod::Mod> mod        = mod::NativeMod::current()
    );

    LLAPI bool hasKey(std::string const& name);

    LLAPI std::vector<std::string> getRegisteredKeys() const;

    LLAPI void triggerKeyDownCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client);
    LLAPI void triggerKeyUpCallback(int keyCode, ::FocusImpact focusImpact, ::IClientInstance& client);

    LLAPI void registerAllKeysToInputHandler(class MinecraftInputHandler& inputHandler);

    LLAPI void registerKeyboardInputs(
        VanillaClientInputMappingFactory& inputs,
        KeyboardInputMapping&             keyboardMapping,
        MouseInputMapping&                mouseMapping,
        FocusImpact                       focusImpact
    );

    LLAPI void processPendingKeyMappings(std::vector<::Keymapping>& newDefaultMapping);
};

} // namespace ll::input