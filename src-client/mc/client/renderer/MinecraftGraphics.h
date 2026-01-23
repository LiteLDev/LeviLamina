#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/MinecraftGameplayGraphicsResources.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ImageResourceLoader; }
namespace mce { class RenderContext; }
namespace mce { struct ImmediateBuffer; }
namespace mce { struct QuadIndexBuffer; }
namespace mce { struct ShaderGroup; }
namespace mce::framebuilder { struct PBRTextureDataManager; }
// clang-format on

class MinecraftGraphics : public ::Bedrock::EnableNonOwnerReferences, public ::AppPlatformListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::ShaderGroup>>                         mShaderGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::QuadIndexBuffer>>                     mQuadBuffer;
    ::ll::TypedStorage<8, 24, ::mce::ClientResourcePointer<::mce::ImmediateBuffer>>         mImmediateBuffer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::framebuilder::PBRTextureDataManager>> mPBRTextureDataManager;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::ImageResourceLoader>>                mImageResourceLoader;
    ::ll::TypedStorage<8, 328, ::MinecraftGameplayGraphicsResources> mMinecraftGameplayGraphicsResources;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGraphics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGraphics() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppTerminated() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MinecraftGraphics(::mce::RenderContext& renderContext);

    MCNAPI ::std::shared_ptr<::mce::ImageResourceLoader> getImageResourceLoader() const;

    MCNAPI ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> getPBRTextureDataManager() const;
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

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onAppTerminated();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForEnableNonOwnerReferences();

    MCNAPI static void** $vftableForAppPlatformListener();
    // NOLINTEND
};
