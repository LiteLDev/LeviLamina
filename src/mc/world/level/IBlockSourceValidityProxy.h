#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBlockSourceValidityProxy {
public:
    // prevent constructor by default
    IBlockSourceValidityProxy& operator=(IBlockSourceValidityProxy const&);
    IBlockSourceValidityProxy(IBlockSourceValidityProxy const&);
    IBlockSourceValidityProxy();
};
