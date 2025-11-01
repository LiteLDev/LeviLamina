#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/platform/brstd/flat_set.h"

struct EmitParticleRequestComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        40,
        ::brstd::flat_set<::ParticleType, ::std::less<::ParticleType>, ::std::vector<::ParticleType>>>
        mParticles;
    // NOLINTEND
};
