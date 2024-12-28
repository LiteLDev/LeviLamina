#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MFC {

struct VrConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnk5954b4;
    ::ll::UntypedStorage<4, 64>  mUnkfb051c;
    ::ll::UntypedStorage<4, 64>  mUnk7cc892;
    ::ll::UntypedStorage<2, 8>   mUnk2e32f1;
    ::ll::UntypedStorage<8, 160> mUnkcd8efc;
    ::ll::UntypedStorage<8, 168> mUnk5d103d;
    ::ll::UntypedStorage<8, 64>  mUnk33bc78;
    // NOLINTEND

public:
    // prevent constructor by default
    VrConfiguration& operator=(VrConfiguration const&);
    VrConfiguration(VrConfiguration const&);
    VrConfiguration();
};

} // namespace MFC
