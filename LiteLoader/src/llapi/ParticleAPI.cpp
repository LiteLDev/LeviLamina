//
// Created by OEOTYAN on 2022/08/27.
//
#include "ParticleAPI.h"
#include "mc/Player.hpp"
#include "mc/Dimension.hpp"
#include "mc/Level.hpp"
#include <llapi/mc/ResourcePackRepository.hpp>
#include <llapi/mc/ResourcePackStack.hpp>
#include <llapi/EventAPI.h>
#include <llapi/mc/ResourcePackRepository.hpp>
void InitParticle() {
    Event::ResourcePackInitEvent::subscribe([](const Event::ResourcePackInitEvent& ev) {
        ev.mRepo->setCustomResourcePackPath(PackType::PackType_Resources, R"(plugins/LiteLoader/ResourcePacks)");
        return true;
    });
}

ParticleAPI ParticleCUI::api{};