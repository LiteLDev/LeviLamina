#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStateStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WindowStateStorage() = default;

    // vIndex: 1
    virtual void writeRect(::tagRECT const&) = 0;

    // vIndex: 2
    virtual void writeShowCommand(int) = 0;

    // vIndex: 3
    virtual bool readRect(::tagRECT&) const = 0;

    // vIndex: 4
    virtual bool readShowCommand(int&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
