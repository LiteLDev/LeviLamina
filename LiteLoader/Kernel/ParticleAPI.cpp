//
// Created by OEOTYAN on 2022/08/27.
//
#include "ParticleAPI.h"
#include "MC/Player.hpp"
#include "MC/Dimension.hpp"
#include "MC/Level.hpp"
#include <MC/ResourcePackRepository.hpp>
#include <MC/ResourcePackStack.hpp>
#include <EventAPI.h>
#include <MC/ResourcePackRepository.hpp>
void InitParticle() {
    Event::ResourcePackInitEvent::subscribe([](const Event::ResourcePackInitEvent& ev) {
        ev.mRepo->setCustomResourcePackPath(PackType::PackType_Resources, R"(plugins/LiteLoader/ResourcePacks)");
        return true;
    });
}

ParticleAPI ParticleCUI::api{};