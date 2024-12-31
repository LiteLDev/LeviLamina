#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"

class ClimateAttributes : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkcedd3c;
    ::ll::UntypedStorage<4, 4> mUnk3d569a;
    ::ll::UntypedStorage<4, 4> mUnk7a257a;
    ::ll::UntypedStorage<4, 4> mUnk64d052;
    ::ll::UntypedStorage<4, 4> mUnkddb4ef;
    ::ll::UntypedStorage<4, 4> mUnk9564ff;
    ::ll::UntypedStorage<4, 4> mUnk6466c1;
    ::ll::UntypedStorage<4, 4> mUnkde9401;
    // NOLINTEND

public:
    // prevent constructor by default
    ClimateAttributes& operator=(ClimateAttributes const&);
    ClimateAttributes(ClimateAttributes const&);
    ClimateAttributes();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClimateAttributes() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
