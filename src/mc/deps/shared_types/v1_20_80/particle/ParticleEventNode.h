#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEventNode {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk31bd55;
    ::ll::UntypedStorage<8, 32>  mUnk6465a8;
    ::ll::UntypedStorage<8, 48>  mUnkba62cf;
    ::ll::UntypedStorage<8, 104> mUnkbba4b0;
    ::ll::UntypedStorage<8, 40>  mUnka4b01b;
    ::ll::UntypedStorage<8, 32>  mUnkf13dab;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEventNode();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCNAPI ParticleEventNode(::SharedTypes::v1_20_80::ParticleEventNode&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEventNode& operator=(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEventNode& operator=(::SharedTypes::v1_20_80::ParticleEventNode&&);

    MCNAPI ~ParticleEventNode();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode const&);

    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEventNode&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
