#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/ClientHitDetectListener.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class HitResult;
// clang-format on

class HitDetectEventListener : public ::ClientHitDetectListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnkcf1f4c;
    // NOLINTEND

public:
    // prevent constructor by default
    HitDetectEventListener& operator=(HitDetectEventListener const&);
    HitDetectEventListener(HitDetectEventListener const&);
    HitDetectEventListener();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::EventResult onContinuousHitResult(::HitResult&) /*override*/;

    // vIndex: 0
    virtual ~HitDetectEventListener() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
