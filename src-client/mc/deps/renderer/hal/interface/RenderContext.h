#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/RenderContextNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
namespace mce { class RenderDevice; }
namespace mce { struct ViewportInfo; }
// clang-format on

namespace mce {

class RenderContext : public ::mce::RenderContextNull,
                      public ::mce::deprecated::ResourceBase<::mce::RenderContextNull> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mWithinFrame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void beginFrame();

    MCAPI bool captureScreenAsRGB(::std::vector<uchar>& outBytes, int& outWidth, int& outHeight);

    MCFOLD void clearColorBuffer(::mce::Color const& clearColor, ::mce::ViewportInfo const* vpInfo);

    MCFOLD void clearContextState();

    MCFOLD void clearDepthStencilBuffer(float depth, uchar stencil, ::mce::ViewportInfo const* vpInfo);

    MCAPI void endFrame();

    MCFOLD void flush();

    MCAPI ::mce::RenderDevice* getDevice() const;

    MCFOLD bool isWithinFrame();

    MCAPI void setScissorRect(int x, int y, uint w, uint h);

    MCAPI void setViewportWithFullScissor(::mce::ViewportInfo const& viewportInfo);

    MCFOLD void unbindAllTexturesAndShaders();
    // NOLINTEND
};

} // namespace mce
