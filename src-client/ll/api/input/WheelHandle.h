#pragma once

#include <functional>
#include <memory>
#include <string>
#include <string_view>

#include "ll/api/base/Macro.h"

#include "ll/api/input/HandleBase.h"
#include "mc/client/game/IClientInstance.h"


namespace ll::mod {
class Mod;
}

namespace ll::input {

class WheelHandle : public HandleBase {
    friend KeyRegistry;

    struct Impl;
    std::unique_ptr<Impl> impl;

    WheelHandle(
        KeyRegistry&                          registrar,
        std::string_view                      name,
        bool                                  isDown,
        std::function<bool(std::string_view)> mappingSwitchProvider,
        std::weak_ptr<mod::Mod>               mod
    );

    void disableModOverloads(std::string_view modName) override;

    void registerMappingBinding(ClientInputMappingFactory& factory) const override;

    void unregisterMappingBinding() const override;

    void triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) override;

    void triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) override;

public:
    using ScrollHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;

    ~WheelHandle();

    WheelHandle(WheelHandle&&) noexcept;
    WheelHandle& operator=(WheelHandle&&) noexcept;

    LLNDAPI std::string getFullName() const override;

    LLNDAPI bool isDown() const;

    LLAPI void setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) override;

    LLAPI void setScrollHandler(ScrollHandler handler, bool suspendable = false);

    LLAPI void removeScrollHandler();

    LLNDAPI bool getScrollHandlerSuspendable() const;

    LLAPI void setScrollHandlerSuspendable(bool suspendable);
};

} // namespace ll::input
