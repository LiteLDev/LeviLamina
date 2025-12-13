#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MolangVariableMap;
class Vec3;
// clang-format on

struct SpawnParticleEffectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk304a31;
    ::ll::UntypedStorage<8, 8>  mUnkbae22c;
    ::ll::UntypedStorage<4, 12> mUnk4da4a4;
    ::ll::UntypedStorage<8, 32> mUnk50164a;
    ::ll::UntypedStorage<8, 64> mUnkd277a2;
    // NOLINTEND

public:
    SpawnParticleEffectPacketPayload(SpawnParticleEffectPacketPayload const&) = default;
    SpawnParticleEffectPacketPayload()                                        = default;

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnParticleEffectPacketPayload(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );

    MCNAPI ::SpawnParticleEffectPacketPayload& operator=(::SpawnParticleEffectPacketPayload&&);

    MCNAPI ::SpawnParticleEffectPacketPayload& operator=(::SpawnParticleEffectPacketPayload const&);

    MCNAPI ~SpawnParticleEffectPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
