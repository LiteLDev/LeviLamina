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
struct FrameUpdateContext;
struct RuntimeLocalLightingConfig;
namespace mce { class RenderContext; }
namespace mce { struct BufferResourceService; }
namespace mcr { struct DeferredResourceTransactions; }
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
    ::ll::TypedStorage<8, 24, ::TickingTextures>                                          mTickingTextures;
    ::ll::TypedStorage<8, 16, ::mcr::DynamicTextureResourceManager>                       mDynamicTextures;
    ::ll::TypedStorage<8, 80, ::mce::TextureResourceService>                              mTextureResourceService;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::BufferResourceService>>            mBufferResourceService;
    ::ll::TypedStorage<8, 72, ::mce::ImmediateBufferResourceService>               mImmediateBufferResourceService;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>> mLocalLightingConfig;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameplayGraphicsResources();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGameplayGraphicsResources(::mce::RenderContext& renderContext);

    MCNAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCNAPI ::mcr::DeferredResourceTransactions getDeferredResourceTransactions();

    MCNAPI ~MinecraftGameplayGraphicsResources();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderContext& renderContext);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
