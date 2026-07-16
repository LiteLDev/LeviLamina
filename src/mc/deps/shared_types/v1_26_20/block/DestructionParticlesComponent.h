#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_20/block/TintMethod.h"

namespace SharedTypes::v1_26_20::BlockDefinition {

struct DestructionParticlesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mTexture;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_20::TintMethod> mTintMethod;
    ::ll::TypedStorage<1, 1, uchar>                               mParticleCount;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_20::BlockDefinition
