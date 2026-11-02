#include "ll/api/input/ChordHandle.h"
#include "ll/api/input/HandleBase.h"
#include "ll/api/input/InputUtils.h"
#include "ll/api/input/KeyRegistry.h"


#include "ll/api/utils/ErrorUtils.h"
#include "ll/core/LeviLamina.h"
#include "mc/deps/input/ChordButtonMapping.h"
#include "mc/deps/input/InputMapping.h"


#include <string>
#include <vector>

namespace ll::input {

struct ChordHandle::Impl {
    std::string              triggerButtonName;
    std::vector<std::string> modifierButtonNames;
    float                    minHoldTime;

    std::pair<ButtonUpHandler, bool>   buttonUpHandler;
    std::pair<ButtonDownHandler, bool> buttonDownHandler;

    Impl(std::string triggerButtonName, std::vector<std::string> modifierButtonNames, float minHoldTime)
    : triggerButtonName(std::move(triggerButtonName)),
      modifierButtonNames(std::move(modifierButtonNames)),
      minHoldTime(minHoldTime) {}
};

ChordHandle::ChordHandle(
    KeyRegistry&                          registrar,
    std::string_view                      name,
    std::string                           triggerButtonName,
    std::vector<std::string>              modifierButtonNames,
    float                                 minHoldTime,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    std::weak_ptr<mod::Mod>               mod
)
: HandleBase(registrar, name, std::move(mappingSwitchProvider), std::move(mod)),
  impl(std::make_unique<Impl>(std::move(triggerButtonName), std::move(modifierButtonNames), minHoldTime)) {}

void ChordHandle::disableModOverloads(std::string_view modName) {
    if (auto mod = getMod(); mod && mod->getName() == modName) {
        impl->buttonDownHandler = {};
        impl->buttonUpHandler   = {};
        setMenuButtonEnabled(false);
        disable();
    }
}

void ChordHandle::registerMappingBinding(ClientInputMappingFactory& factory) const {
    auto buttonName = "button." + getFullName();

    ChordButtonMapping chord;
    chord.generatedButtonName = buttonName;
    chord.sourceButtonNames   = impl->modifierButtonNames;
    chord.sourceButtonNames->emplace_back(impl->triggerButtonName);
    chord.minHoldTime = impl->minHoldTime;

    for (auto& mapping : *factory.mActiveInputMappings) {
        if (containsInputMappingStack(mapping.first)) {
            bool skip = false;
            for (auto& chord : *mapping.second.chordButtonMapping) {
                if (*chord.generatedButtonName == buttonName) {
                    skip = true;
                    break;
                }
            }
            if (!skip) mapping.second.chordButtonMapping->emplace_back(chord);
        }
    }
}

void ChordHandle::unregisterMappingBinding() const {
    auto buttonName = "button." + getFullName();
    if (auto* factory = getReadyMappingFactory()) {
        for (auto& mapping : *factory->mActiveInputMappings) {
            std::erase_if(*mapping.second.chordButtonMapping, [buttonName](auto&& chord) {
                return *chord.generatedButtonName == buttonName;
            });
        }
    }
}

void ChordHandle::triggerButtonDownHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    if (impl->buttonDownHandler.first && suspendable == impl->buttonDownHandler.second) {
        try {
            impl->buttonDownHandler.first(focusImpact, client);
        } catch (...) {
            try {
                getLogger().error("Error in KeyHandle<{}>:", getFullName());
            } catch (...) {}
            error_utils::printCurrentException(getLogger());
        }
    }

    handleMenuButton(focusImpact, client, true, suspendable);
}

void ChordHandle::triggerButtonUpHandler(::FocusImpact focusImpact, ::IClientInstance& client, bool suspendable) {
    auto lock = getRegistry().lock();

    if (!isValid()) return;

    handleMenuButton(focusImpact, client, false, suspendable);

    if (impl->buttonUpHandler.first && suspendable == impl->buttonUpHandler.second) {
        try {
            impl->buttonUpHandler.first(focusImpact, client);
        } catch (...) {
            try {
                getLogger().error("Error in KeyHandle<{}>:", getFullName());
            } catch (...) {}
            error_utils::printCurrentException(getLogger());
        }
    }
}

void ChordHandle::onDataChanged() const {
    auto buttonName        = "button." + getFullName();
    auto sourceButtonNames = impl->modifierButtonNames;
    sourceButtonNames.emplace_back(impl->triggerButtonName);

    if (auto* factory = getReadyMappingFactory()) {
        for (auto& mapping : *factory->mActiveInputMappings) {
            if (containsInputMappingStack(mapping.first)) {
                for (auto& chord : *mapping.second.chordButtonMapping) {
                    if (*chord.generatedButtonName == buttonName) {
                        chord.sourceButtonNames = sourceButtonNames;
                        chord.minHoldTime       = impl->minHoldTime;
                        return;
                    }
                }
            }
        }
    }
}

ChordHandle::~ChordHandle() = default;

ChordHandle::ChordHandle(ChordHandle&&) noexcept            = default;
ChordHandle& ChordHandle::operator=(ChordHandle&&) noexcept = default;

std::string ChordHandle::getFullName() const {
    if (auto mod = getMod()) {
        return mod->getName() + ".chord." + getName();
    } else {
        return getName();
    }
}

std::string ChordHandle::getTriggerButtonName() const {
    auto lock = getRegistry().lock();
    return impl->triggerButtonName;
}

void ChordHandle::setTriggerButtonName(std::string triggerButtonName) {
    auto lock               = getRegistry().lock();
    impl->triggerButtonName = std::move(triggerButtonName);
    onDataChanged();
}

std::vector<std::string> ChordHandle::getModifierButtonNames() const {
    auto lock = getRegistry().lock();
    return impl->modifierButtonNames;
}

void ChordHandle::setModifierButtonNames(std::vector<std::string> modifierButtonNames) {
    auto lock                 = getRegistry().lock();
    impl->modifierButtonNames = std::move(modifierButtonNames);
    onDataChanged();
}

float ChordHandle::getMinHoldTime() const {
    auto lock = getRegistry().lock();
    return impl->minHoldTime;
}

void ChordHandle::setMinHoldTime(float minHoldTime) {
    auto lock         = getRegistry().lock();
    impl->minHoldTime = minHoldTime;
    onDataChanged();
}

void ChordHandle::setInputMappingStack(std::function<bool(std::string_view)> mappingSwitchProvider) {
    auto lock = getRegistry().lock();
    if (isValid()) {
        if (auto* factory = getReadyMappingFactory()) {

            std::string buttonName = "button." + getFullName();

            ChordButtonMapping chord;
            chord.generatedButtonName = "button." + getFullName();
            chord.sourceButtonNames   = impl->modifierButtonNames;
            chord.sourceButtonNames->emplace_back(impl->triggerButtonName);
            chord.minHoldTime = impl->minHoldTime;

            for (auto& mapping : *factory->mActiveInputMappings) {
                bool contains = containsInputMappingStack(mapping.first);
                try {
                    if (contains == mappingSwitchProvider(mapping.first)) continue;
                } catch (...) {
                    try {
                        getLogger().error("Error in KeyHandle<{}>:", getFullName());
                    } catch (...) {}
                    error_utils::printCurrentException(getLogger());
                    return;
                }

                if (contains) {
                    std::erase_if(*mapping.second.chordButtonMapping, [buttonName](auto&& chord) {
                        return *chord.generatedButtonName == buttonName;
                    });
                } else {
                    mapping.second.chordButtonMapping->emplace_back(chord);
                }
            }
        }
    }
    HandleBase::setInputMappingStack(std::move(mappingSwitchProvider));
}

void ChordHandle::setButtonDownHandler(ButtonDownHandler handler, bool suspendable) {
    auto lock               = getRegistry().lock();
    impl->buttonDownHandler = std::make_pair(std::move(handler), suspendable);
}

void ChordHandle::removeButtonDownHandler() {
    auto lock                     = getRegistry().lock();
    impl->buttonDownHandler.first = {};
}

bool ChordHandle::getButtonDownHandlerSuspendable() const {
    auto lock = getRegistry().lock();
    return impl->buttonDownHandler.second;
}

void ChordHandle::setButtonDownHandlerSuspendable(bool suspendable) {
    auto lock                      = getRegistry().lock();
    impl->buttonDownHandler.second = suspendable;
}

void ChordHandle::setButtonUpHandler(ButtonUpHandler handler, bool suspendable) {
    auto lock             = getRegistry().lock();
    impl->buttonUpHandler = std::make_pair(std::move(handler), suspendable);
}

void ChordHandle::removeButtonUpHandler() {
    auto lock                   = getRegistry().lock();
    impl->buttonUpHandler.first = {};
}

bool ChordHandle::getButtonUpHandlerSuspendable() const {
    auto lock = getRegistry().lock();
    return impl->buttonUpHandler.second;
}

void ChordHandle::setButtonUpHandlerSuspendable(bool suspendable) {
    auto lock                    = getRegistry().lock();
    impl->buttonUpHandler.second = suspendable;
}

} // namespace ll::input