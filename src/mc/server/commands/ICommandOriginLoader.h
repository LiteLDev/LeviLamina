#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CommandOrigin;
class CompoundTag;
// clang-format on

class ICommandOriginLoader {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ICommandOriginLoader() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::CommandOrigin> load(::CompoundTag const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
