#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct DefaultScreenCapabilities {
public:
    // prevent constructor by default
    DefaultScreenCapabilities& operator=(DefaultScreenCapabilities const&);
    DefaultScreenCapabilities(DefaultScreenCapabilities const&);
    DefaultScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DefaultScreenCapabilities() = default;

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool isOfType$(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
