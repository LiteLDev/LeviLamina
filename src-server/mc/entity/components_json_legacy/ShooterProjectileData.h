#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ShooterProjectileData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 176> mUnka8e7bd;
    ::ll::UntypedStorage<4, 4> mUnk4edbad;
    ::ll::UntypedStorage<8, 64> mUnk6ee50d;
    ::ll::UntypedStorage<4, 4> mUnkf0c6ad;
    ::ll::UntypedStorage<1, 1> mUnka50aac;
    // NOLINTEND

public:
    // prevent constructor by default
    ShooterProjectileData& operator=(ShooterProjectileData const&);
    ShooterProjectileData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShooterProjectileData(::ShooterProjectileData const&);

    MCNAPI void setActorDefByName(::std::string const& name);

    MCNAPI ~ShooterProjectileData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ShooterProjectileData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
