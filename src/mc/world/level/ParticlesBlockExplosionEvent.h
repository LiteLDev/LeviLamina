#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ParticlesBlockExplosionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                  mRadius;
    ::ll::TypedStorage<4, 12, ::Vec3>                mOrigin;
    ::ll::TypedStorage<8, 24, ::std::vector<::Vec3>> mPositions;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void load(::CompoundTag const& data);

    MCNAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCNAPI ~ParticlesBlockExplosionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
