#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/RenderStageWithFrameBufferObject.h"

// auto generated forward declare list
// clang-format off
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
    // vIndex: 0
    virtual ~TickingTextureStage() /*override*/ = default;

    // vIndex: 3
    virtual void preRender(::ScreenContext& screenContext) /*override*/;

    // vIndex: 5
    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) /*override*/;

    // vIndex: 6
    virtual void postRender(::ScreenContext& screenContext) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _createRenderTarget(::mce::Texture& atlasTexture, ::mce::RenderContext& renderContext);

    MCNAPI void createRenderTarget(::mce::RenderContext& renderContext);

    MCNAPI void resetStage();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $preRender(::ScreenContext& screenContext);

    MCNAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCNAPI void $postRender(::ScreenContext& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
