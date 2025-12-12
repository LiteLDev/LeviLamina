#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct FilterSet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk45546a;
    ::ll::UntypedStorage<1, 1>   mUnk299061;
    ::ll::UntypedStorage<1, 1>   mUnk7dc226;
    ::ll::UntypedStorage<4, 4>   mUnk1b05ba;
    ::ll::UntypedStorage<4, 4>   mUnk2e678f;
    ::ll::UntypedStorage<4, 4>   mUnka07fa5;
    ::ll::UntypedStorage<8, 8>   mUnk96fe07;
    ::ll::UntypedStorage<8, 8>   mUnkccc0d9;
    ::ll::UntypedStorage<8, 8>   mUnk8a4184;
    ::ll::UntypedStorage<8, 8>   mUnke35cc6;
    ::ll::UntypedStorage<4, 4>   mUnk41f36b;
    ::ll::UntypedStorage<1, 256> mUnkf93fbd;
    ::ll::UntypedStorage<8, 16>  mUnk7682bd;
    // NOLINTEND

public:
    // prevent constructor by default
    FilterSet& operator=(FilterSet const&);
    FilterSet(FilterSet const&);
    FilterSet();
};

} // namespace RakNet
