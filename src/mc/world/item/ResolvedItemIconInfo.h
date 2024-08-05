#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&);
    ResolvedItemIconInfo(ResolvedItemIconInfo const&);

public:
    // NOLINTBEGIN
    MCAPI ResolvedItemIconInfo();

    MCAPI ResolvedItemIconInfo(uint, int frame);

    MCAPI ResolvedItemIconInfo(std::string const& name, int frame, ::ItemIconInfoType type);

    MCAPI ResolvedItemIconInfo(std::string const& name, float u0, float u1, float v0, float v1, ushort, ushort);

    MCAPI ~ResolvedItemIconInfo();

    // NOLINTEND
};
