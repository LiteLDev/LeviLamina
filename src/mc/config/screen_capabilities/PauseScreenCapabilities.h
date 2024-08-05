#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct PauseScreenCapabilities {
public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&);
    PauseScreenCapabilities(PauseScreenCapabilities const&);
    PauseScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PauseScreenCapabilities();

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
