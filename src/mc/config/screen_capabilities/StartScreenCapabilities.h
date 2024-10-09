#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct StartScreenCapabilities {
public:
    // prevent constructor by default
    StartScreenCapabilities& operator=(StartScreenCapabilities const&);
    StartScreenCapabilities(StartScreenCapabilities const&);
    StartScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StartScreenCapabilities() = default;

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
