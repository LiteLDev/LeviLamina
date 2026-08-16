#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UISoundPlayer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UISoundPlayer();

    virtual void play(::std::string const& name, float volume, float pitch) const;
    // NOLINTEND
};
