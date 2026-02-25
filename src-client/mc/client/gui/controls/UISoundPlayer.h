#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UISoundPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UISoundPlayer() = default;

    virtual void play(::std::string const&, float, float) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
