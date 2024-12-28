#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FilterContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk990630;
    ::ll::UntypedStorage<8, 8>  mUnk6781de;
    ::ll::UntypedStorage<8, 8>  mUnkdf1412;
    ::ll::UntypedStorage<8, 8>  mUnk78f21a;
    ::ll::UntypedStorage<8, 8>  mUnkcdc418;
    ::ll::UntypedStorage<8, 8>  mUnkc189d1;
    ::ll::UntypedStorage<8, 8>  mUnka83bfd;
    ::ll::UntypedStorage<4, 12> mUnk7d28f6;
    ::ll::UntypedStorage<8, 8>  mUnka3d03c;
    ::ll::UntypedStorage<8, 8>  mUnk3c67bc;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterContext& operator=(FilterContext const&);
    FilterContext(FilterContext const&);
    FilterContext();
};
