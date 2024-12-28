#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IRandom;
// clang-format on

class IPositionalRandomFactory {
public:
    // prevent constructor by default
    IPositionalRandomFactory& operator=(IPositionalRandomFactory const&);
    IPositionalRandomFactory(IPositionalRandomFactory const&);
    IPositionalRandomFactory();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPositionalRandomFactory();

    // vIndex: 1
    virtual ::std::unique_ptr<::IRandom> forBlockPos(::BlockPos const&) const = 0;

    // vIndex: 2
    virtual ::std::unique_ptr<::IRandom> forString(::std::string const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
