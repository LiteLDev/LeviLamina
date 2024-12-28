#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelSeed64 {
public:
    // LevelSeed64 inner types define
    using ValueType = uint64;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSeed64& operator=(LevelSeed64 const&);
    LevelSeed64(LevelSeed64 const&);
    LevelSeed64();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint to32BitRandomSeed() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::LevelSeed64 fromUnsigned32(uint value);
    // NOLINTEND
};
