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
class FrameUpdateContext;
namespace mce { class ImageResourceLoader; }
namespace mce { class ImmediateBuffer; }
namespace mce { class QuadIndexBuffer; }
namespace mce { class RenderContext; }
namespace mce { class ShaderGroup; }
namespace mce::framebuilder { class PBRTextureDataManager; }
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
    ::ll::TypedStorage<8, 312, ::MinecraftGameplayGraphicsResources> mMinecraftGameplayGraphicsResources;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGraphics();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGraphics() /*override*/ = default;

    virtual void onAppSuspended() /*override*/;

    virtual void onAppTerminated() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftGraphics(::mce::RenderContext& renderContext);

    MCAPI void frameUpdate(::FrameUpdateContext& frameUpdateContext);

    MCAPI ::Bedrock::NonOwnerPointer<::mce::framebuilder::PBRTextureDataManager> getPBRTextureDataManager() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::RenderContext& renderContext);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
