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
    virtual ~ICommandOriginLoader() = default;

    virtual ::std::unique_ptr<::CommandOrigin> load(::CompoundTag const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
