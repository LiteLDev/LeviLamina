#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
// clang-format on

class IPositionalRandomFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPositionalRandomFactory() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const&) const = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
