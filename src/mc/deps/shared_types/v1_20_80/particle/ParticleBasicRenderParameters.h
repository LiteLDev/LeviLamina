#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/util/FileReference.h"

namespace SharedTypes::v1_20_80 {

struct ParticleBasicRenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                   mMaterialNameHash;
    ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<21>> mTextureName;
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
