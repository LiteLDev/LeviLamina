#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct ActiveDirectoryScreenCapabilities {
public:
    // prevent constructor by default
    ActiveDirectoryScreenCapabilities& operator=(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActiveDirectoryScreenCapabilities();

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
