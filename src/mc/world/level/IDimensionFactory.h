#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/OwnerPtr.h"

// auto generated forward declare list
// clang-format off
class Dimension;
// clang-format on

class IDimensionFactory {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDimensionFactory() = default;

    // vIndex: 1
    virtual ::OwnerPtr<::Dimension> create(::std::string const&) const = 0;

    // vIndex: 2
    virtual void initializeDimension(::Dimension&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
