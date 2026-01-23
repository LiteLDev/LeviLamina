#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/shared_types/util/FileReference.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleBasicRenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString>                   mMaterialNameHash;
    ::ll::TypedStorage<8, 32, ::SharedTypes::FileReference<21>> mTextureName;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleBasicRenderParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ParticleBasicRenderParameters(::SharedTypes::v1_20_80::ParticleBasicRenderParameters const&);

    MCAPI ::SharedTypes::v1_20_80::ParticleBasicRenderParameters&
    operator=(::SharedTypes::v1_20_80::ParticleBasicRenderParameters&&);

    MCAPI ::SharedTypes::v1_20_80::ParticleBasicRenderParameters&
    operator=(::SharedTypes::v1_20_80::ParticleBasicRenderParameters const&);

    MCAPI ~ParticleBasicRenderParameters();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SharedTypes::v1_20_80::ParticleBasicRenderParameters const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
