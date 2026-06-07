#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStageWithFrameBufferObject.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class ScreenContext;
struct FrameRenderObject;
namespace mce { class RenderContext; }
namespace mce { class Texture; }
// clang-format on

class TickingTextureStage : public ::mce::RenderStageWithFrameBufferObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkdc0098;
    ::ll::UntypedStorage<8, 8>  mUnkb0668a;
    ::ll::UntypedStorage<8, 32> mUnk31e8a2;
    // NOLINTEND

public:
    // prevent constructor by default
    TickingTextureStage& operator=(TickingTextureStage const&);
    TickingTextureStage(TickingTextureStage const&);
    TickingTextureStage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickingTextureStage() /*override*/;

    virtual void preRender(::ScreenContext& screenContext) /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) /*override*/;

    virtual void postRender(::ScreenContext&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TickingTextureStage(::IClientInstance& client);

    MCNAPI void _createRenderTarget(::mce::Texture& atlasTexture, ::mce::RenderContext& renderContext);

    MCNAPI void createRenderTarget(::mce::RenderContext& renderContext);

    MCNAPI void resetStage();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IClientInstance& client);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext& screenContext);

    MCNAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI void $postRender(::ScreenContext&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
