#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class RenderDevice; }
namespace mce { struct ViewportInfo; }
// clang-format on

namespace mce {

class RenderContextBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnkacad00;
    ::ll::UntypedStorage<4, 40>  mUnk80a540;
    ::ll::UntypedStorage<8, 24>  mUnkd1eb37;
    ::ll::UntypedStorage<8, 8>   mUnkb88807;
    ::ll::UntypedStorage<8, 8>   mUnk5dd278;
    ::ll::UntypedStorage<8, 8>   mUnkfaff0e;
    ::ll::UntypedStorage<4, 52>  mUnka47a14;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContextBase& operator=(RenderContextBase const&);
    RenderContextBase(RenderContextBase const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderContextBase();

    MCNAPI void beginFrame();

    MCNAPI bool captureScreenAsRGB(::std::vector<uchar>& outBytes, int& outWidth, int& outHeight);

    MCNAPI void clearColorBuffer(::mce::Color const& clearColor, ::mce::ViewportInfo const* vpInfo) const;

    MCNAPI void clearContextState();

    MCNAPI void clearDepthStencilBuffer(float depth, uchar stencil, ::mce::ViewportInfo const* vpInfo) const;

    MCNAPI void endFrame();

    MCNAPI void flush();

    MCNAPI ::mce::RenderDevice* getDevice() const;

    MCNAPI void setRenderTarget();

    MCNAPI void setScissorRect(int x, int y, uint w, uint h);

    MCNAPI void setViewport(::mce::ViewportInfo const& viewportInfo);

    MCNAPI void unbindAllTexturesAndShaders();

    MCNAPI ~RenderContextBase();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
