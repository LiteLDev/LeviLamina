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
    virtual ::EventResult onContinuousHitResult(::HitResult& hitResult) /*override*/;

    virtual ~HitDetectEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::EventResult $onContinuousHitResult(::HitResult& hitResult);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
