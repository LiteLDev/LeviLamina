#include "ll/api/input/WheelHandle.h"
#include "ll/api/input/HandleBase.h"
#include "ll/api/input/InputUtils.h"
#include "ll/api/input/KeyRegistry.h"

#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"
#include "mc/deps/input/InputMapping.h"


namespace ll::input {

struct WheelHandle::Impl {
    bool isDown;

    std::pair<WheelHandle::ScrollHandler, bool> scrollHandler;

    Impl(bool isDown) : isDown(isDown) {}
};

WheelHandle::WheelHandle(
    KeyRegistry&                          registrar,
    std::string_view                      name,
    bool                                  isDown,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    std::weak_ptr<mod::Mod>               mod
)
: HandleBase(registrar, name, std::move(mappingSwitchProvider), std::move(mod)),
  impl(std::make_unique<Impl>(isDown)) {}


void WheelHandle::disableModOverloads(std::string_view modName) {
    if (auto mod = getMod(); mod && mod->getName() == modName) {
        impl->scrollHandler = {};
        setMenuButtonEnabled(false);
        disable();
    }
}

void WheelHandle::registerMappingBinding(ClientInputMappingFactory& factory) const {
    std::string buttonName = "button." + getFullName();

    for (auto& mapping : *factory.mActiveInputMappings) {
        if (!containsInputMappingStack(mapping.first)) continue;

        auto& names = isDown() ? *mapping.second.mouseMapping->wheelDownButtonNames
                               : *mapping.second.mouseMapping->wheelUpButtonNames;
        names.emplace_back(buttonName);
    }
}

void WheelHandle::unregisterMappingBinding() const {
    std::string buttonName = "button." + getFullName();

    auto* factory = getReadyMappingFactory();
    if (!factory) return;
    for (auto& mapping : *factory->mActiveInputMappings) {
        std::erase(*mapping.second.mouseMapping->wheelDownButtonNames, buttonName);
        std::erase(*mapping.second.mouseMapping->wheelUpButtonNames, buttonName);
    }
}

void WheelHandle::triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    handleMenuButton(focusImpact, client, true, suspendable);
}

void WheelHandle::triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    handleMenuButton(focusImpact, client, false, suspendable);

    if (impl->scrollHandler.first && impl->scrollHandler.second == suspendable) {
        try {
            impl->scrollHandler.first(focusImpact, client);
        } catch (...) {
            try {
                getLogger().error("Error in WheelHandle<{}>:", getFullName());
            } catch (...) {}
            error_utils::printCurrentException(getLogger());
        }
    }
}

WheelHandle::~WheelHandle() = default;

WheelHandle::WheelHandle(WheelHandle&&) noexcept            = default;
WheelHandle& WheelHandle::operator=(WheelHandle&&) noexcept = default;

std::string WheelHandle::getFullName() const {
    if (auto mod = getMod()) {
        return mod->getName() + ".wheel." + getName();
    } else {
        return getName();
    }
}

bool WheelHandle::isDown() const { return impl->isDown; }

void WheelHandle::setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) {
    auto lock = getRegistry().lock();
    if (isValid()) {
        if (auto* factory = getReadyMappingFactory()) {

            std::string buttonName = "button." + getFullName();

            for (auto& mapping : *factory->mActiveInputMappings) {
                bool contains = containsInputMappingStack(mapping.first);
                try {
                    if (contains == mappingSwitchProvider(mapping.first)) continue;
                } catch (...) {
                    try {
                        getLogger().error("Error in WheelHandle<{}>:", getFullName());
                    } catch (...) {}
                    error_utils::printCurrentException(getLogger());
                    return;
                }

                auto& names = isDown() ? *mapping.second.mouseMapping->wheelDownButtonNames
                                       : *mapping.second.mouseMapping->wheelUpButtonNames;
                if (contains) {
                    std::erase(names, buttonName);
                } else {
                    names.emplace_back(buttonName);
                }
            }
        }
    }
    HandleBase::setInputMappingStack(std::move(mappingSwitchProvider));
}

void WheelHandle::setScrollHandler(ScrollHandler handler, bool suspendable) {
    auto lock           = getRegistry().lock();
    impl->scrollHandler = std::make_pair(std::move(handler), suspendable);
}

void WheelHandle::removeScrollHandler() {
    auto lock                 = getRegistry().lock();
    impl->scrollHandler.first = {};
}

bool WheelHandle::getScrollHandlerSuspendable() const {
    auto lock = getRegistry().lock();
    return impl->scrollHandler.second;
}

void WheelHandle::setScrollHandlerSuspendable(bool suspendable) {
    auto lock                  = getRegistry().lock();
    impl->scrollHandler.second = suspendable;
}

} // namespace ll::input