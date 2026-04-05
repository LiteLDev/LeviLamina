#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace renoir { struct Texture2D; }
// clang-format on

namespace cohtml {

class ViewRenderer {
public:
    // ViewRenderer inner types define
    enum class PaintResult : int {
        NotFound       = 0,
        NothingToPaint = 1,
        PaintedSome    = 2,
        FrameComplete  = 3,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ViewRenderer() = default;

    virtual void Destroy() = 0;

    virtual ::cohtml::ViewRenderer::PaintResult Paint(uint, bool) = 0;

    virtual void SetRenderTarget(void*, void*, uint, uint, uint) = 0;

    virtual void SetRenderTarget(void*, void*, ::renoir::Texture2D) = 0;

    virtual void FreeRenderingResources() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
