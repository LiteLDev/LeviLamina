#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UISoundPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UISoundPlayer() = default;

    virtual void play(::std::string const& name, float volume, float pitch) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
