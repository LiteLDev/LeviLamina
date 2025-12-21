#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>

#include "ll/api/base/Macro.h"

#include "mc/client/game/IClientInstance.h"
#include "mc/deps/input/enums/FocusImpact.h"

namespace ll::mod {
class Mod;
}

namespace ll::input {

class KeyRegistrar;

class KeyHandle {
    friend KeyRegistrar;

    struct Impl;
    std::unique_ptr<Impl> impl;

public:
    using ButtonDownHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(::FocusImpact, ::IClientInstance&)>;

    KeyHandle(
        KeyRegistrar&           registrar,
        std::string const&      name,
        std::vector<int> const& keyCodes,
        bool                    allowRemap,
        std::weak_ptr<mod::Mod> mod
    );

public:
    ~KeyHandle();

    LLAPI std::string const& getName() const;

    LLAPI std::string const& getModName() const;

    LLAPI std::string getFullName() const;

    LLAPI std::vector<int> getKeyCodes() const;

    LLAPI bool isAllowRemap() const;

    LLAPI void setAllowRemap(bool allowRemap);

    LLAPI bool isValid() const;

    LLAPI void registerButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);

    LLAPI void registerButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);

    LLAPI void disableModOverloads(std::string_view modName);

    LLAPI void triggerButtonDownHandlers(::FocusImpact focusImpact, ::IClientInstance& client);

    LLAPI void triggerButtonUpHandlers(::FocusImpact focusImpact, ::IClientInstance& client);
};

} // namespace ll::input