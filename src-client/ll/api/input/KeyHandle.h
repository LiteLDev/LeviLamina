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

class KeyRegistry;

class KeyHandle {
    friend KeyRegistry;

    struct Impl;
    std::unique_ptr<Impl> impl;

    KeyHandle(
        KeyRegistry&            registrar,
        std::string_view        name,
        std::vector<int> const& keyCodes,
        bool                    allowRemap,
        std::weak_ptr<mod::Mod> mod
    );

    void disableModOverloads(std::string_view modName);

    void triggerButtonDownHandlers(::FocusImpact focusImpact, ::IClientInstance& client);

    void triggerButtonUpHandlers(::FocusImpact focusImpact, ::IClientInstance& client);

public:
    using ButtonDownHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(::FocusImpact, ::IClientInstance&)>;

    ~KeyHandle();

    KeyHandle(KeyHandle&&) noexcept;
    KeyHandle& operator=(KeyHandle&&) noexcept;

    LLNDAPI std::string const& getName() const;

    LLNDAPI std::shared_ptr<mod::Mod> getMod() const;

    LLNDAPI std::string getFullName() const;

    LLNDAPI std::vector<int> const& getKeyCodes() const;

    LLNDAPI bool isAllowRemap() const;

    LLNDAPI void setAllowRemap(bool allowRemap);

    LLNDAPI bool isValid() const;

    LLAPI void registerButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);

    LLAPI void registerButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);

    LLAPI void setInputMappingStack(std::vector<std::string> stacks);

    LLNDAPI bool containsInputMappingStack(std::string_view stack) const;
};

} // namespace ll::input
