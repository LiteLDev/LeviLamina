#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class IScreenCapabilities {
public:
    // prevent constructor by default
    IScreenCapabilities& operator=(IScreenCapabilities const&);
    IScreenCapabilities(IScreenCapabilities const&);
    IScreenCapabilities();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScreenCapabilities() = default;

    // vIndex: 1
    virtual bool isOfType(::Bedrock::typeid_t<::IScreenCapabilities>) const = 0;
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
