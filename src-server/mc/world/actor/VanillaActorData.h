#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VanillaActorData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6a6056;
    ::ll::UntypedStorage<1, 1> mUnk325334;
    ::ll::UntypedStorage<8, 8> mUnk9e1ce1;
    ::ll::UntypedStorage<4, 8> mUnk96212c;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaActorData& operator=(VanillaActorData const&);
    VanillaActorData(VanillaActorData const&);
    VanillaActorData();

};
