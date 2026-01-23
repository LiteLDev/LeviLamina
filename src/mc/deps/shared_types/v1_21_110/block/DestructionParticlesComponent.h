#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/TintMethod.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct DestructionParticlesComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                        mTexture;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_21_110::BlockDefinition::TintMethod> mTintMethod;
    ::ll::TypedStorage<4, 4, int>                                                   mParticleCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DestructionParticlesComponent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();

    MCAPI static ::std::string_view const& ParticleCountId();

    MCAPI static ::std::string_view const& TextureId();

    MCAPI static ::std::string_view const& TintMethodId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
