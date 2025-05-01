#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActivationUri;
// clang-format on

class UriListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UriListener();

    // vIndex: 1
    virtual void onUri(::ActivationUri const&) = 0;

    // vIndex: 2
    virtual void tick() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
