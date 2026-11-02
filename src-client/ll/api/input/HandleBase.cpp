#include "ll/api/input/HandleBase.h"
#include "ll/api/input/InputUtils.h"
#include "ll/api/input/KeyRegistry.h"


#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"
#include "mc/client/gui/screens/AbstractScene.h"


namespace ll::input {

struct HandleBase::Impl {
    KeyRegistry&                          registrar;
    std::string                           name;
    std::function<bool(std::string_view)> mappingSwitchProvider;
    std::weak_ptr<mod::Mod>               mod;

    bool menuButtonEnabled     = false;
    bool menuButtonSuspendable = false;

    bool valid = false;

    Impl(
        KeyRegistry&                          registrar,
        std::string_view                      name,
        std::function<bool(std::string_view)> mappingSwitchProvider,
        std::weak_ptr<mod::Mod>               mod
    )
    : registrar(registrar),
      name(name),
      mappingSwitchProvider(std::move(mappingSwitchProvider)),
      mod(std::move(mod)) {}
};

HandleBase::HandleBase(
    KeyRegistry&                          registrar,
    std::string_view                      name,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    std::weak_ptr<mod::Mod>               mod
)
: impl(std::make_unique<Impl>(registrar, name, std::move(mappingSwitchProvider), std::move(mod))) {}

std::shared_ptr<mod::Mod> HandleBase::getMod() const { return impl->mod.lock(); }

KeyRegistry& HandleBase::getRegistry() const { return impl->registrar; }

void HandleBase::registerInputHandler(InputHandler& inputHandler) {
    std::string buttonName = "button." + getFullName();
    for (bool suspendable : {true, false}) {
        inputHandler.registerButtonDownHandler(
            buttonName,
            [this, suspendable](::FocusImpact focusImpact, ::IClientInstance& client) {
                auto lock = impl->registrar.lock();
                triggerButtonDownHandler(focusImpact, client, suspendable);
            },
            suspendable
        );
        inputHandler.registerButtonUpHandler(
            buttonName,
            [this, suspendable](::FocusImpact focusImpact, ::IClientInstance& client) {
                auto lock = impl->registrar.lock();
                triggerButtonUpHandler(focusImpact, client, suspendable);
            },
            suspendable
        );
    }
}

void HandleBase::unregisterInputHandler() const {
    std::string buttonName = "button." + getFullName();
    uint        buttonId   = hashButtonName(buttonName);

    if (auto* mcInput = getReadyMinecraftInput()) {
        auto& inputHandler = *mcInput->mInputHandler;
        inputHandler.mButtonDownHandlerMap.get().erase(buttonId);
        inputHandler.mButtonUpHandlerMap.get().erase(buttonId);
    }
}

void HandleBase::handleMenuButton(
    ::FocusImpact      focusImpact,
    ::IClientInstance& client,
    bool               pressed,
    bool               suspendable
) const {
    if (!impl->valid) return;

    if (impl->menuButtonEnabled && suspendable == impl->menuButtonSuspendable) {
        client.forEachAlwaysAcceptInputScreenWithTop(
            {[buttonId = hashButtonName("button." + getFullName()), focusImpact, pressed](::AbstractScene& scene) {
                if (pressed) {
                    scene.handleButtonPress(buttonId, focusImpact);
                } else {
                    scene.handleButtonRelease(buttonId, focusImpact);
                }
            }}
        );
    }
}

HandleBase::~HandleBase() = default;

HandleBase::HandleBase(HandleBase&&) noexcept            = default;
HandleBase& HandleBase::operator=(HandleBase&&) noexcept = default;

std::string const& HandleBase::getName() const { return impl->name; }

void HandleBase::setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) {
    auto lock                   = impl->registrar.lock();
    impl->mappingSwitchProvider = std::move(mappingSwitchProvider);
}

bool HandleBase::containsInputMappingStack(std::string_view stack) const {
    auto lock = impl->registrar.lock();
    if (!impl->mappingSwitchProvider) return false;
    try {
        return impl->mappingSwitchProvider(stack);
    } catch (...) {
        try {
            getLogger().error("Error in Handle<{}>:", getFullName());
        } catch (...) {}
        error_utils::printCurrentException(getLogger());
        return false;
    }
}

void HandleBase::setMenuButtonEnabled(bool enable, bool suspendable) {
    auto lock                   = impl->registrar.lock();
    impl->menuButtonEnabled     = enable;
    impl->menuButtonSuspendable = suspendable;
}

bool HandleBase::isMenuButtonEnabled() const {
    auto lock = impl->registrar.lock();
    return impl->menuButtonEnabled;
}

bool HandleBase::getMenuButtonSuspendable() const {
    auto lock = impl->registrar.lock();
    return impl->menuButtonSuspendable;
}

void HandleBase::setMenuButtonSuspendable(bool suspendable) {
    auto lock                   = impl->registrar.lock();
    impl->menuButtonSuspendable = suspendable;
}

bool HandleBase::isValid() const {
    auto lock = impl->registrar.lock();
    return impl->valid;
}

void HandleBase::enable() {
    auto lock = impl->registrar.lock();
    if (!impl->valid) {
        impl->valid = true;

        if (auto* factory = getReadyMappingFactory()) {
            registerMappingBinding(*factory);
        }

        if (auto* mcInput = getReadyMinecraftInput()) {
            registerInputHandler(*mcInput->mInputHandler);
        }
    }
}

void HandleBase::disable() {
    auto lock = impl->registrar.lock();
    if (impl->valid) {
        impl->valid = false;

        unregisterMappingBinding();
        unregisterInputHandler();
    }
}

} // namespace ll::input
