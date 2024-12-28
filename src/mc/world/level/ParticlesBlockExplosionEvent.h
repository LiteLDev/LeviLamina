#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
// clang-format on

class ParticlesBlockExplosionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk69bee3;
    ::ll::UntypedStorage<4, 12> mUnkc784c8;
    ::ll::UntypedStorage<8, 24> mUnke1a739;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticlesBlockExplosionEvent& operator=(ParticlesBlockExplosionEvent const&);
    ParticlesBlockExplosionEvent(ParticlesBlockExplosionEvent const&);
    ParticlesBlockExplosionEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addExplodePosition(::Vec3 const& position);

    MCAPI ::std::unique_ptr<::CompoundTag> save() const;

    MCAPI ~ParticlesBlockExplosionEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
