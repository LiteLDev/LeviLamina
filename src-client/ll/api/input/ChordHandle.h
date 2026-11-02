#pragma once

#include "ll/api/base/Macro.h"
#include "ll/api/input/HandleBase.h"

#include "mc/client/game/IClientInstance.h"
#include "mc/deps/input/enums/FocusImpact.h"

#include <functional>
#include <memory>
#include <string>
#include <string_view>
#include <vector>

namespace ll::mod {
class Mod;
} // namespace ll::mod

namespace ll::input {

class ChordHandle : public HandleBase {
private:
    friend KeyRegistry;

    struct Impl;
    std::unique_ptr<Impl> impl;

    ChordHandle(
        KeyRegistry&                          registrar,
        std::string_view                      name,
        std::string                           triggerButtonName,
        std::vector<std::string>              modifierButtonNames,
        float                                 minHoldTime,
        std::function<bool(std::string_view)> mappingSwitchProvider,
        std::weak_ptr<mod::Mod>               mod
    );

    void disableModOverloads(std::string_view modName) override;

    void registerMappingBinding(ClientInputMappingFactory& factory) const override;

    void unregisterMappingBinding() const override;

    void triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) override;

    void triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) override;

    void onDataChanged() const;

public:
    using ButtonDownHandler = std::function<void(::FocusImpact, ::IClientInstance&)>;
    using ButtonUpHandler   = std::function<void(::FocusImpact, ::IClientInstance&)>;

    ~ChordHandle();

    ChordHandle(ChordHandle&&) noexcept;
    ChordHandle& operator=(ChordHandle&&) noexcept;

    LLNDAPI std::string getFullName() const override;

    LLNDAPI std::string getTriggerButtonName() const;

    LLAPI void setTriggerButtonName(std::string triggerButtonName);

    LLNDAPI std::vector<std::string> getModifierButtonNames() const;

    LLAPI void setModifierButtonNames(std::vector<std::string> modifierButtonNames);

    LLNDAPI float getMinHoldTime() const;

    LLAPI void setMinHoldTime(float minHoldTime);

    LLAPI void setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) override;

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
