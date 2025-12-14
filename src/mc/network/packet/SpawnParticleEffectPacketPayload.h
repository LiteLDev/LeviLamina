#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/util/MolangVariableMap.h"

struct SpawnParticleEffectPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>                                 mVanillaDimensionId;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                       mActorId;
    ::ll::TypedStorage<4, 12, ::Vec3>                               mPos;
    ::ll::TypedStorage<8, 32, ::std::string>                        mEffectName;
    ::ll::TypedStorage<8, 64, ::std::optional<::MolangVariableMap>> mMolangVariables;
    // NOLINTEND

public:
    SpawnParticleEffectPacketPayload(SpawnParticleEffectPacketPayload const&) = default;
    SpawnParticleEffectPacketPayload()                                        = default;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnParticleEffectPacketPayload(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );

    MCAPI ::SpawnParticleEffectPacketPayload& operator=(::SpawnParticleEffectPacketPayload&&);

    MCAPI ::SpawnParticleEffectPacketPayload& operator=(::SpawnParticleEffectPacketPayload const&);

    MCAPI ~SpawnParticleEffectPacketPayload();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Vec3 const&                        pos,
        ::std::string const&                 name,
        uchar                                vanillaDimensionId,
        ::std::optional<::MolangVariableMap> molangVariables
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
