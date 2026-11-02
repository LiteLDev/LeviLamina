#pragma once

#include "ll/api/service/TargetedBedrock.h"
#include "mc/client/game/ClientInstance.h"
#include "mc/client/input/ClientInputHandler.h"
#include "mc/client/input/ClientInputMappingFactory.h"
#include "mc/client/input/MinecraftInputHandler.h"


namespace ll::input {

inline MinecraftInputHandler* registeredInput = nullptr;

inline uint hashButtonName(std::string_view name) {
    uint hash = 0x811C9DC5u;
    for (char const c : name) {
        hash = (hash ^ static_cast<unsigned char>(c)) * 0x01000193u;
    }
    return hash;
}

inline MinecraftInputHandler* getReadyMinecraftInput() {
    auto client = service::getClientInstance();
    if (!client || !client->getInput()) return nullptr;
    auto* mcInput = client->getMinecraftInput().get();
    if (!mcInput || mcInput != registeredInput) return nullptr;
    return mcInput;
}

inline ClientInputMappingFactory* getReadyMappingFactory() {
    if (getReadyMinecraftInput() == nullptr) return nullptr;
    return service::getClientInstance()->getInput()->mMappingFactory.get();
}

inline void setRegisteredInput(MinecraftInputHandler* point) { registeredInput = point; }

} // namespace ll::input