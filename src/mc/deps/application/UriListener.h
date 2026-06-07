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
    virtual ~UriListener() = default;

    virtual void onUri(::ActivationUri const& uri) = 0;

    virtual void tick() = 0;

    virtual void executeStartupUris() = 0;
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
