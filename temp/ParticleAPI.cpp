//
// Created by OEOTYAN on 2022/08/27.
//
#include "ll/api/ParticleAPI.h"
#include "mc/Player.hpp"

#include "ll/api/event/LegacyEvents.h"
#include "mc/ResourcePackRepository.hpp"
#include "mc/ResourcePackStack.hpp"

void InitParticle() {
    ll::event::legacy::ResourcePackInitEvent::subscribe([](ll::event::legacy::ResourcePackInitEvent const& ev) {
        ev.mRepo->setCustomResourcePackPath(PackType::PackType_Resources, R"(plugins/LeviLamina/ResourcePacks)");
        return true;
    });
}

ParticleAPI ParticleCUI::api{};
