#pragma once

#include "ll/api/base/Macro.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/deps/input/InputHandler.h"
#include "mc/deps/input/enums/FocusImpact.h"


#include <functional>
#include <memory>
#include <string>
#include <string_view>


namespace ll::mod {
class Mod;
}

namespace ll::input {

class KeyRegistry;

class HandleBase {
    friend KeyRegistry;

    struct Impl;
    std::unique_ptr<Impl> impl;

protected:
    HandleBase(
        KeyRegistry&                          registrar,
        std::string_view                      name,
        std::function<bool(std::string_view)> mappingSwitchProvider,
        std::weak_ptr<mod::Mod>               mod
    );

    [[nodiscard]] std::shared_ptr<mod::Mod> getMod() const;

    [[nodiscard]] KeyRegistry& getRegistry() const;

    virtual void disableModOverloads(std::string_view modName) = 0;

    virtual void registerMappingBinding(ClientInputMappingFactory& factory) const = 0;

    virtual void unregisterMappingBinding() const = 0;

    virtual void registerInputHandler(InputHandler& inputHandler);

    void unregisterInputHandler() const;

    virtual void triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) = 0;

    virtual void triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) = 0;

    void handleMenuButton(::FocusImpact focusImpact, ::IClientInstance& client, bool pressed, bool suspendable) const;

public:
    virtual ~HandleBase();

    HandleBase(HandleBase&&) noexcept;
    HandleBase& operator=(HandleBase&&) noexcept;

    LLNDAPI std::string const& getName() const;

    LLNDAPI virtual std::string getFullName() const = 0;

    LLAPI virtual void setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider);

    LLNDAPI bool containsInputMappingStack(std::string_view stack) const;

    LLAPI void setMenuButtonEnabled(bool enable, bool suspendable = false);

    LLNDAPI bool isMenuButtonEnabled() const;

    LLNDAPI bool getMenuButtonSuspendable() const;

    LLAPI void setMenuButtonSuspendable(bool suspendable);

    LLNDAPI bool isValid() const;

    LLAPI void enable();

    LLAPI void disable();
};

} // namespace ll::input
