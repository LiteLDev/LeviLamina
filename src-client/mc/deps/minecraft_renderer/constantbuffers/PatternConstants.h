#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class ConstantBufferContainer; }
namespace mce { class ShaderConstantFloat1; }
namespace mce { class ShaderConstantFloat4; }
// clang-format on

namespace mce {

class PatternConstants {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    PATTERN_COLORS;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat4*>    PATTERN_UV_OFFSETS_AND_SCALES;
    ::ll::TypedStorage<8, 8, ::mce::ShaderConstantFloat1*>    PATTERN_COUNT;
    ::ll::TypedStorage<8, 8, ::mce::ConstantBufferContainer*> constantBuffer;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void init();
    // NOLINTEND
};

} // namespace mce
