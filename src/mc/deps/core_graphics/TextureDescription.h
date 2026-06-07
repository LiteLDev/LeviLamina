#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/ImageDescription.h"

namespace cg {

struct TextureDescription : public ::cg::ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mMipCount;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    TextureDescription();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit TextureDescription(::cg::ImageDescription const& imageDescription);

    MCAPI bool operator!=(::cg::TextureDescription const& rhs) const;

    MCAPI bool operator==(::cg::TextureDescription const& rhs) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::cg::ImageDescription const& imageDescription);
#endif
    // NOLINTEND
};

} // namespace cg
