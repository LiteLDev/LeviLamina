#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    MCAPI bool isOfType$(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
