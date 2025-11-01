#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Seed128Bit;
// clang-format on

class IRandomSeeded {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IRandomSeeded() = default;

    // vIndex: 2
    virtual void setSeed(int64) = 0;

    // vIndex: 1
    virtual void setSeed(::Seed128Bit) = 0;

    // vIndex: 3
    virtual int64 seed64() const = 0;

    // vIndex: 4
    virtual ::Seed128Bit seed128() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
