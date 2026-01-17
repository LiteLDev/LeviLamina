#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class View; }
namespace cohtml { class ViewRenderer; }
namespace cohtml { struct ViewRendererSettings; }
namespace renoir { class RendererBackend; }
// clang-format on

namespace cohtml {

class SystemRenderer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SystemRenderer() = default;

    virtual ::cohtml::ViewRenderer* CreateViewRenderer(::cohtml::View*, ::cohtml::ViewRendererSettings const&) = 0;

    virtual void Destroy() = 0;

    virtual void RegisterRenderThread(::renoir::RendererBackend*) = 0;

    virtual void FreeRenderingResources() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
