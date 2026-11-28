#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Pass.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class RenderContext; }
// clang-format on

namespace rendergraph {

class RenderPass : public ::rendergraph::Pass {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void render(::rendergraph::RenderContext& renderCtx) = 0;

    virtual void execute(::rendergraph::RenderContext& renderCtx) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $execute(::rendergraph::RenderContext& renderCtx);
    // NOLINTEND
};

} // namespace rendergraph
