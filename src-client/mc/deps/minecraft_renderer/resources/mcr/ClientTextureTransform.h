#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Texture; }
namespace mce { struct ServerTexture; }
// clang-format on

namespace mcr {

class ClientTextureTransform {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::mce::Texture* getTransformedTexture(::mce::ServerTexture const& serverTexture);
    // NOLINTEND
};

} // namespace mcr
