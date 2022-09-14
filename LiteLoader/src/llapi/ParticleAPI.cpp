//
// Created by OEOTYAN on 2022/08/27.
//
#include "ParticleAPI.h"
#include "mc/Player.hpp"
#include "mc/Dimension.hpp"
#include "mc/Level.hpp"
#include <mc/ResourcePackRepository.hpp>
#include <mc/ResourcePackStack.hpp>
#include <EventAPI.h>
#include <mc/ResourcePackRepository.hpp>
void InitParticle() {
    Event::ResourcePackInitEvent::subscribe([](const Event::ResourcePackInitEvent& ev) {
        ev.mRepo->setCustomResourcePackPath(PackType::PackType_Resources, R"(plugins/LiteLoader/ResourcePacks)");
        return true;
    });
}

ParticleAPI ParticleCUI::api{};