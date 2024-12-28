#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

class ClientHitDetectListener {
public:
    // prevent constructor by default
    ClientHitDetectListener& operator=(ClientHitDetectListener const&);
    ClientHitDetectListener(ClientHitDetectListener const&);
    ClientHitDetectListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientHitDetectListener();

    // vIndex: 1
    virtual ::EventResult onChangedHitResult(::HitResult&);

    // vIndex: 2
    virtual ::EventResult onContinuousHitResult(::HitResult&);

    // vIndex: 3
    virtual ::EventResult onChangedPickHitResult(::HitResult&);

    // vIndex: 4
    virtual ::EventResult onContinuousPickHitResult(::HitResult&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::EventResult $onChangedHitResult(::HitResult&);

    MCAPI ::EventResult $onContinuousHitResult(::HitResult&);

    MCAPI ::EventResult $onChangedPickHitResult(::HitResult&);

    MCAPI ::EventResult $onContinuousPickHitResult(::HitResult&);
    // NOLINTEND
};
