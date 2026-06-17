#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class BannerConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    BANNER_COLORS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    BANNER_UV_OFFSETS_AND_SCALES;
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*> constantBuffer;
    ::ll::TypedStorage<4, 64, ::std::array<::glm::vec4, 4>>   mBasePBRTextureData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BannerConstants();

    MCAPI void init();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};

} // namespace mce
