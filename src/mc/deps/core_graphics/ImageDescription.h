#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/enums/TextureFormat.h"

// auto generated forward declare list
// clang-format off
namespace mce { struct Image; }
// clang-format on

namespace cg {

struct ImageDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcf7118;
    ::ll::UntypedStorage<4, 4> mUnkd51c0d;
    ::ll::UntypedStorage<4, 4> mUnk5fec4a;
    ::ll::UntypedStorage<1, 1> mUnke5be67;
    ::ll::UntypedStorage<1, 1> mUnk667a5a;
    ::ll::UntypedStorage<4, 4> mUnkfb11c6;
    // NOLINTEND

public:
    // prevent constructor by default
    ImageDescription& operator=(ImageDescription const&);
    ImageDescription(ImageDescription const&);
    ImageDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ImageDescription(::mce::Image const& image);

    MCNAPI_C uint getStorageSize() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static uint getStrideFromFormat(::mce::TextureFormat textureFormat);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::mce::Image const& image);
    // NOLINTEND
};

} // namespace cg
