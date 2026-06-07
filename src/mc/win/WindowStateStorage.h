#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStateStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WindowStateStorage() = default;

    virtual void writeRect(::tagRECT const& rect) = 0;

    virtual void writeShowCommand(int showCommand) = 0;

    virtual bool readRect(::tagRECT& rect) const = 0;

    virtual bool readShowCommand(int& showCommand) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
