#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_20_80 {

struct ParticleEffectComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 24>  mUnk29bb24;
    ::ll::UntypedStorage<8, 112> mUnk94b1ee;
    ::ll::UntypedStorage<8, 112> mUnk6d7cd1;
    ::ll::UntypedStorage<8, 64>  mUnk16529e;
    ::ll::UntypedStorage<8, 112> mUnk85a66f;
    ::ll::UntypedStorage<8, 120> mUnk3997c9;
    ::ll::UntypedStorage<8, 64>  mUnk4af276;
    ::ll::UntypedStorage<8, 112> mUnke68b2b;
    ::ll::UntypedStorage<8, 64>  mUnkb75a81;
    ::ll::UntypedStorage<8, 312> mUnk14c39b;
    ::ll::UntypedStorage<8, 480> mUnk5a2a95;
    ::ll::UntypedStorage<8, 384> mUnkeed6ee;
    ::ll::UntypedStorage<8, 304> mUnk5c0a2a;
    ::ll::UntypedStorage<8, 192> mUnk20e99b;
    ::ll::UntypedStorage<8, 536> mUnk83ef43;
    ::ll::UntypedStorage<8, 728> mUnkd131f7;
    ::ll::UntypedStorage<8, 336> mUnkd90e1d;
    ::ll::UntypedStorage<1, 16>  mUnkdf6c4c;
    ::ll::UntypedStorage<8, 112> mUnk9cb096;
    ::ll::UntypedStorage<8, 168> mUnk1b0c66;
    ::ll::UntypedStorage<8, 112> mUnk7a411e;
    ::ll::UntypedStorage<8, 120> mUnk25845a;
    ::ll::UntypedStorage<8, 40>  mUnkb84328;
    ::ll::UntypedStorage<8, 40>  mUnk526b92;
    ::ll::UntypedStorage<4, 32>  mUnkc60260;
    ::ll::UntypedStorage<8, 136> mUnk681a9e;
    ::ll::UntypedStorage<8, 304> mUnk2f82e7;
    ::ll::UntypedStorage<8, 376> mUnkbf1941;
    ::ll::UntypedStorage<8, 112> mUnkdd0b27;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticleEffectComponents();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ParticleEffectComponents(::SharedTypes::v1_20_80::ParticleEffectComponents const&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectComponents&
    operator=(::SharedTypes::v1_20_80::ParticleEffectComponents&&);

    MCNAPI ::SharedTypes::v1_20_80::ParticleEffectComponents&
    operator=(::SharedTypes::v1_20_80::ParticleEffectComponents const&);

    MCNAPI ~ParticleEffectComponents();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::v1_20_80::ParticleEffectComponents const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_20_80
