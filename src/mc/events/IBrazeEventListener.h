#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBrazeEventListener {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IBrazeEventListener() = default;

    virtual void updateId(::std::string const& strID) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
