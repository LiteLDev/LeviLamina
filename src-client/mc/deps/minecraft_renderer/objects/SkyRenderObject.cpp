#include "mc/deps/minecraft_renderer/objects/SkyRenderObject.h"

SkyRenderObject::~SkyRenderObject() {
    std::destroy_at(&mCubemapTexture.get());
    std::destroy_at(&mCubemapTextures.get());
    std::destroy_at(&mMoonTex.get());
    std::destroy_at(&mSunTex.get());
    std::destroy_at(&mEndFlashTex.get());
    std::destroy_at(&mEndSkyTex.get());
    std::destroy_at(&mMoonMesh);
    std::destroy_at(&mSunMesh);
    std::destroy_at(&mStarsMesh);
    std::destroy_at(&mSkyMesh);
}
