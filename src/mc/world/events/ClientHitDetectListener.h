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
    virtual ~ClientHitDetectListener() = default;

    virtual ::EventResult onChangedHitResult(::HitResult& hitResult);

    virtual ::EventResult onContinuousHitResult(::HitResult& hitResult);

    virtual ::EventResult onChangedPickHitResult(::HitResult& hitResult);

    virtual ::EventResult onContinuousPickHitResult(::HitResult& hitResult);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::EventResult $onChangedHitResult(::HitResult& hitResult);

    MCNAPI ::EventResult $onContinuousHitResult(::HitResult& hitResult);

    MCNAPI ::EventResult $onChangedPickHitResult(::HitResult& hitResult);

    MCNAPI ::EventResult $onContinuousPickHitResult(::HitResult& hitResult);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
