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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientHitDetectListener() = default;

    // vIndex: 1
    virtual ::EventResult onChangedHitResult(::HitResult& hitResult);

    // vIndex: 2
    virtual ::EventResult onContinuousHitResult(::HitResult& hitResult);

    // vIndex: 3
    virtual ::EventResult onChangedPickHitResult(::HitResult& hitResult);

    // vIndex: 4
    virtual ::EventResult onContinuousPickHitResult(::HitResult& hitResult);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onChangedHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onContinuousHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onChangedPickHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onContinuousPickHitResult(::HitResult& hitResult);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
