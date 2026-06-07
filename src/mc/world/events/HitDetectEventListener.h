#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientHitDetectListener.h"
#include "mc/world/events/EventResult.h"
#include "mc/world/phys/HitResult.h"

class HitDetectEventListener : public ::ClientHitDetectListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 136, ::HitResult> mHitResult;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ::EventResult onContinuousHitResult(::HitResult&) /*override*/;
#else // LL_PLAT_C
    virtual ::EventResult onContinuousHitResult(::HitResult& hitResult) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI HitDetectEventListener();

    MCFOLD ::HitResult const& getLatestHitResult() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::EventResult $onContinuousHitResult(::HitResult& hitResult);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
