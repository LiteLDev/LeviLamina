#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/deprecated/ResourceBase.h"
#include "mc/deps/renderer/hal/null/RenderContextNull.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct ViewportInfo; }
// clang-format on

namespace mce {

class RenderContext : public ::mce::RenderContextNull,
                      public ::mce::deprecated::ResourceBase<::mce::RenderContextNull> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbfa895;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderContext& operator=(RenderContext const&);
    RenderContext(RenderContext const&);
    RenderContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setViewportWithFullScissor(::mce::ViewportInfo const& viewportInfo);
    // NOLINTEND
};

} // namespace mce
