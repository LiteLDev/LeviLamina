#include "ll/api/input/KeyRegistry.h"
#include "ll/api/input/InputUtils.h"

#include "ll/api/input/ChordHandle.h"
#include "ll/api/input/HandleBase.h"
#include "ll/api/input/KeyHandle.h"
#include "ll/api/mod/ModManagerRegistry.h"
#include "mc/client/game/ClientInstance.h"


namespace ll::input {

struct KeyRegistry::Impl {
    SmallStringNodeMap<KeyHandle>   keys;   // keyed by "<mod>.key.<name>"
    SmallStringNodeMap<WheelHandle> wheels; // keyed by "<mod>.wheel.<name>"
    SmallStringNodeMap<ChordHandle> chords; // keyed by "<mod>.chord.<name>"

    std::recursive_mutex mutex;
};

KeyRegistry::KeyRegistry() : impl(std::make_unique<Impl>()) {
    auto& reg = mod::ModManagerRegistry::getInstance();
    reg.executeOnModDisable([this](std::string_view name) { disableModKeys(name); });
}

void KeyRegistry::disableModKeys(std::string_view modName) {
    std::lock_guard lock{impl->mutex};
    for (auto& [name, handle] : impl->keys) {
        handle.disableModOverloads(modName);
    }
    for (auto& [name, wheel] : impl->wheels) {
        wheel.disableModOverloads(modName);
    }
    for (auto& [name, chord] : impl->chords) {
        chord.disableModOverloads(modName);
    }
}

std::unique_lock<std::recursive_mutex> KeyRegistry::lock() const { return std::unique_lock{impl->mutex}; }

void KeyRegistry::onInputHandlersRegister(::MinecraftInputHandler& mcInput) {
    std::lock_guard lock{impl->mutex};

    auto& inputHandler = *mcInput.mInputHandler;
    for (auto& [name, key] : impl->keys) {
        if (key.isValid()) {
            key.registerInputHandler(inputHandler);
        }
    }
    for (auto& [name, wheel] : impl->wheels) {
        if (wheel.isValid()) {
            wheel.registerInputHandler(inputHandler);
        }
    }
    for (auto& [name, chord] : impl->chords) {
        if (chord.isValid()) {
            chord.registerInputHandler(inputHandler);
        }
    }
    setRegisteredInput(&mcInput);
}

void KeyRegistry::onKeyboardAndMouseControlsUpdate(::VanillaClientInputMappingFactory& factory) {
    std::lock_guard lock{impl->mutex};

    for (auto& [name, key] : impl->keys) {
        if (key.isValid()) {
            key.registerMappingBinding(factory);
        }
    }
    for (auto& [name, wheel] : impl->wheels) {
        if (wheel.isValid()) {
            wheel.registerMappingBinding(factory);
        }
    }
    for (auto& [name, chord] : impl->chords) {
        if (chord.isValid()) {
            chord.registerMappingBinding(factory);
        }
    }
}

KeyRegistry& KeyRegistry::getInstance() {
    static KeyRegistry instance;
    return instance;
}

KeyHandle& KeyRegistry::getOrCreateKey(
    std::string_view                      name,
    std::vector<int>                      defaultKeyCodes,
    bool                                  allowRemap,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    FocusImpact                           focusImpact,
    std::weak_ptr<mod::Mod>               mod
) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += ".key.";
    }
    fullName += name;

    if (auto it = impl->keys.find(fullName); it != impl->keys.end()) {
        return it->second;
    }

    auto& created = impl->keys
                        .insert_or_assign(
                            fullName,
                            KeyHandle{
                                *this,
                                name,
                                std::move(defaultKeyCodes),
                                allowRemap,
                                std::move(mappingSwitchProvider),
                                focusImpact,
                                std::move(mod)
                            }
                        )
                        .first->second;
    created.enable();
    return created;
}

WheelHandle& KeyRegistry::getOrCreateWheel(
    std::string_view                      name,
    bool                                  isDown,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    std::weak_ptr<mod::Mod>               mod
) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += ".wheel.";
    }
    fullName += name;

    if (auto it = impl->wheels.find(fullName); it != impl->wheels.end()) {
        return it->second;
    }

    auto& created = impl->wheels
                        .insert_or_assign(
                            fullName,
                            WheelHandle{*this, name, isDown, std::move(mappingSwitchProvider), std::move(mod)}
                        )
                        .first->second;
    created.enable();
    return created;
}

ChordHandle& KeyRegistry::getOrCreateChord(
    std::string_view                      name,
    std::string                           triggerButtonName,
    std::vector<std::string>              modifierButtonNames,
    float                                 minHoldTime,
    std::function<bool(std::string_view)> mappingSwitchProvider,
    std::weak_ptr<mod::Mod>               mod
) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += ".chord.";
    }
    fullName += name;

    if (auto it = impl->chords.find(fullName); it != impl->chords.end()) {
        return it->second;
    }

    auto& created = impl->chords
                        .insert_or_assign(
                            fullName,
                            ChordHandle{
                                *this,
                                name,
                                std::move(triggerButtonName),
                                std::move(modifierButtonNames),
                                minHoldTime,
                                std::move(mappingSwitchProvider),
                                std::move(mod)
                            }
                        )
                        .first->second;
    created.enable();
    return created;
}

bool KeyRegistry::hasKey(std::string_view name, std::weak_ptr<mod::Mod> const& mod) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += ".key.";
    }
    fullName += name;

    return impl->keys.find(fullName) != impl->keys.end() || impl->keys.find(name) != impl->keys.end();
}

bool KeyRegistry::hasWheel(std::string_view name, std::weak_ptr<mod::Mod> const& mod) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += ".wheel.";
    }
    fullName += name;

    return impl->wheels.find(fullName) != impl->wheels.end() || impl->wheels.find(name) != impl->wheels.end();
}

bool KeyRegistry::hasChord(std::string_view name, std::weak_ptr<mod::Mod> const& mod) {
    std::lock_guard lock{impl->mutex};

    std::string fullName;
    if (auto modPtr = mod.lock()) {
        fullName  = modPtr->getName();
        fullName += ".chord.";
    }
    fullName += name;

    return impl->chords.find(fullName) != impl->chords.end() || impl->chords.find(name) != impl->chords.end();
}

// 是否应该改为获取该mod注册的keys？
std::vector<std::string> KeyRegistry::getRegisteredKeys() const {
    std::lock_guard          lock{impl->mutex};
    std::vector<std::string> keys;
    keys.reserve(impl->keys.size());

    for (auto const& pair : impl->keys) {
        keys.push_back(pair.first);
    }

    return keys;
}

std::vector<std::string> KeyRegistry::getRegisteredWheels() const {
    std::lock_guard          lock{impl->mutex};
    std::vector<std::string> wheels;
    wheels.reserve(impl->wheels.size());

    for (auto const& pair : impl->wheels) {
        wheels.push_back(pair.first);
    }

    return wheels;
}

std::vector<std::string> KeyRegistry::getRegisteredChords() const {
    std::lock_guard          lock{impl->mutex};
    std::vector<std::string> chords;
    chords.reserve(impl->chords.size());

    for (auto const& pair : impl->chords) {
        chords.push_back(pair.first);
    }

    return chords;
}

} // namespace ll::input