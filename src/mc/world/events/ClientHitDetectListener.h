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

#ifdef LL_PLAT_S
    virtual ::EventResult onChangedHitResult(::HitResult&);
#else // LL_PLAT_C
    virtual ::EventResult onChangedHitResult(::HitResult& hitResult);
#endif

    virtual ::EventResult onContinuousHitResult(::HitResult& hitResult);

#ifdef LL_PLAT_S
    virtual ::EventResult onChangedPickHitResult(::HitResult&);
#else // LL_PLAT_C
    virtual ::EventResult onChangedPickHitResult(::HitResult& hitResult);
#endif

#ifdef LL_PLAT_S
    virtual ::EventResult onContinuousPickHitResult(::HitResult&);
#else // LL_PLAT_C
    virtual ::EventResult onContinuousPickHitResult(::HitResult& hitResult);
#endif

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD ::EventResult $onChangedHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onChangedPickHitResult(::HitResult& hitResult);

    MCFOLD ::EventResult $onContinuousPickHitResult(::HitResult& hitResult);
#endif


    // NOLINTEND
};
