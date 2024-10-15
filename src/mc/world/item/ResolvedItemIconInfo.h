#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/ItemIconInfoType.h"

struct ResolvedItemIconInfo {
public:
    // prevent constructor by default
    ResolvedItemIconInfo& operator=(ResolvedItemIconInfo const&);
    ResolvedItemIconInfo(ResolvedItemIconInfo const&);

public:
    // NOLINTBEGIN
    MCAPI ResolvedItemIconInfo();

    MCAPI ResolvedItemIconInfo(uint legacyID, int frame);

    MCAPI ResolvedItemIconInfo(std::string const& name, int frame, ::ItemIconInfoType type);

    MCAPI ResolvedItemIconInfo(
        std::string const& name,
        float              u0,
        float              u1,
        float              v0,
        float              v1,
        ushort             texSizeW,
        ushort             texSizeH
    );

    MCAPI ~ResolvedItemIconInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& name, int frame, ::ItemIconInfoType type);

    MCAPI void* ctor$(uint legacyID, int frame);

    MCAPI void*
    ctor$(std::string const& name, float u0, float u1, float v0, float v1, ushort texSizeW, ushort texSizeH);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
