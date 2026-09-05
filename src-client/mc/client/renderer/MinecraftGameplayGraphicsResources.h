#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/DynamicImageResourceManager.h"
#include "mc/client/renderer/ImageBufferResourceManager.h"
#include "mc/client/renderer/ImageResourceManager.h"
#include "mc/client/renderer/TickingTextures.h"
#include "mc/deps/core_graphics/ResourceManagerTracker.h"
#include "mc/deps/minecraft_renderer/resources/ImmediateBufferResourceService.h"
#include "mc/deps/minecraft_renderer/resources/TextureResourceService.h"
#include "mc/deps/minecraft_renderer/resources/mcr/DynamicTextureResourceManager.h"

// auto generated forward declare list
// clang-format off
class RuntimeLocalLightingConfig;
namespace mce { struct BufferResourceService; }
// clang-format on

class MinecraftGameplayGraphicsResources {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::ImageResourceManager>                                    mImageResources;
    ::ll::TypedStorage<8, 8, ::cg::ResourceManagerTracker<::ImageResourceManager>>       mImageResourceTracker;
    ::ll::TypedStorage<8, 16, ::ImageBufferResourceManager>                              mItemAtlasResources;
    ::ll::TypedStorage<8, 8, ::cg::ResourceManagerTracker<::ImageBufferResourceManager>> mSharedImageBufferAtlasTracker;
    ::ll::TypedStorage<8, 16, ::DynamicImageResourceManager>                             mDynamicImageResourceManager;
    ::ll::TypedStorage<8, 8, ::cg::ResourceManagerTracker<::DynamicImageResourceManager>> mDynamicImageTracker;
    ::ll::TypedStorage<8, 8, ::TickingTextures>                                           mTickingTextures;
    ::ll::TypedStorage<8, 16, ::mcr::DynamicTextureResourceManager>                       mDynamicTextures;
    ::ll::TypedStorage<8, 64, ::mce::TextureResourceService>                              mTextureResourceService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::BufferResourceService>>            mBufferResourceService;
    ::ll::TypedStorage<8, 72, ::mce::ImmediateBufferResourceService>               mImmediateBufferResourceService;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>> mRuntimeLocalLightingConfig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void cleanImageCachesForActiveResourcePackChange();

    MCAPI void flushResourceService();

    MCAPI void reloadTickingTextures();

    MCAPI void resume();
    // NOLINTEND
};
