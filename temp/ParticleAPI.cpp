//
// Created by OEOTYAN on 2022/08/27.
//
#include "liteloader/api/ParticleAPI.h"
#include "mc/Player.hpp"

#include "mc/ResourcePackRepository.hpp"
#include "mc/ResourcePackStack.hpp"
#include "liteloader/api/event/LegacyEvents.h"

void InitParticle() {
    ll::event::legacy::ResourcePackInitEvent::subscribe([](const ll::event::legacy::ResourcePackInitEvent& ev) {
        ev.mRepo->setCustomResourcePackPath(PackType::PackType_Resources, R"(plugins/LiteLoader/ResourcePacks)");
        return true;
    });
}

ParticleAPI ParticleCUI::api{};
