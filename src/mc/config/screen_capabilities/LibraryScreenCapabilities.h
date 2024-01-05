#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct LibraryScreenCapabilities {
public:
    // prevent constructor by default
    LibraryScreenCapabilities& operator=(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities(LibraryScreenCapabilities const&);
    LibraryScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LibraryScreenCapabilities@@UEAA@XZ
    virtual ~LibraryScreenCapabilities();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@ULibraryScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
