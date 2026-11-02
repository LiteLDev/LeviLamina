#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>

#include "ll/api/base/Macro.h"

#include "ll/api/input/HandleBase.h"
#include "mc/client/game/IClientInstance.h"
#include "mc/deps/input/enums/FocusImpact.h"

namespace ll::mod {
class Mod;
}

namespace ll::input {

class KeyHandle : public HandleBase {
    friend KeyRegistry;

    struct Impl;
    std::unique_ptr<Impl> impl;

    KeyHandle(
        KeyRegistry&                          registrar,
        std::string_view                      name,
        std::vector<int>                      keyCodes,
        bool                                  allowRemap,
        std::function<bool(std::string_view)> mappingSwitchProvider,
        FocusImpact                           focusImpact,
        std::weak_ptr<mod::Mod>               mod
    );

    void disableModOverloads(std::string_view modName) override;

    void registerMappingBinding(ClientInputMappingFactory& factory) const override;

    void unregisterMappingBinding() const override;

    void triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) override;

    void triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) override;

    void onRemappingLayoutDataChanged() const;

    void onFocusImpactChanged() const;

public:
    using ButtonDownHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(::FocusImpact, ::IClientInstance&)>;

    ~KeyHandle();

    KeyHandle(KeyHandle&&) noexcept;
    KeyHandle& operator=(KeyHandle&&) noexcept;

    LLNDAPI std::string getFullName() const override;

    LLNDAPI std::vector<int> getKeyCodes() const;

    LLAPI void setKeyCodes(std::vector<int> keyCodes);

    LLAPI void remapKeyCodes(std::vector<int> const& keyCodes);

    LLAPI void resetKeyCodes();

    LLNDAPI bool isAllowRemap() const;

    LLAPI void setAllowRemap(bool allowRemap);

    LLAPI void setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) override;

    LLNDAPI FocusImpact getFocusImpact() const;

    LLAPI void setFocusImpact(::FocusImpact focusImpact);

    LLAPI void setButtonDownHandler(ButtonDownHandler handler, bool suspendable = false);

    LLAPI void removeButtonDownHandler();

    LLNDAPI bool getButtonDownHandlerSuspendable() const;

    LLAPI void setButtonDownHandlerSuspendable(bool suspendable);

    LLAPI void setButtonUpHandler(ButtonUpHandler handler, bool suspendable = false);

    LLAPI void removeButtonUpHandler();

    LLNDAPI bool getButtonUpHandlerSuspendable() const;

    LLAPI void setButtonUpHandlerSuspendable(bool suspendable);
};

} // namespace ll::input
