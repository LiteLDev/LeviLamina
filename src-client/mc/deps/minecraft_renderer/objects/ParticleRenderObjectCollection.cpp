#include "mc/deps/minecraft_renderer/objects/ParticleRenderObjectCollection.h"

ParticleRenderObjectCollection::~ParticleRenderObjectCollection() {
    std::destroy_at(&mOpaque.get());
    std::destroy_at(&mBlended.get());
    std::destroy_at(&mAlphaTested.get());
}
