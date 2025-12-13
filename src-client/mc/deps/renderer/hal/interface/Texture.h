#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/ResourceBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class TextureNull; }
// clang-format on

namespace mce {

class Texture : public ::mce::ResourceBase<::mce::TextureNull> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkccf3f0;
    ::ll::UntypedStorage<8, 16> mUnk9ecf64;
    // NOLINTEND

public:
    // prevent constructor by default
    Texture& operator=(Texture const&);
    Texture(Texture const&);
    Texture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::mce::Texture& operator=(::mce::Texture&& texture);
    // NOLINTEND
};

} // namespace mce
