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
    ::ll::TypedStorage<1, 1, bool> mWithinFrame;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setViewportWithFullScissor(::mce::ViewportInfo const& viewportInfo);
    // NOLINTEND
};

} // namespace mce
