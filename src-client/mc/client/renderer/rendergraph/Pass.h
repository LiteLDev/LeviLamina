#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rendergraph { class RenderContext; }
// clang-format on

namespace rendergraph {

class Pass {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Pass() = default;

    virtual void execute(::rendergraph::RenderContext& renderCtx) = 0;
    // NOLINTEND
};

} // namespace rendergraph
