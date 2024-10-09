#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct LibraryScreenCapabilities {
public:
    // prevent constructor by default
    LibraryScreenCapabilities& operator=(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LibraryScreenCapabilities();

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
