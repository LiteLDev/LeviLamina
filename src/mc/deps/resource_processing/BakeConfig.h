#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources {

struct BakeConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf5ab44;
    ::ll::UntypedStorage<8, 32> mUnk4fbb72;
    ::ll::UntypedStorage<8, 32> mUnk1f1f39;
    ::ll::UntypedStorage<1, 1>  mUnkd25c0d;
    ::ll::UntypedStorage<1, 1>  mUnk5cdb09;
    ::ll::UntypedStorage<1, 1>  mUnke77cce;
    ::ll::UntypedStorage<1, 1>  mUnk29733e;
    ::ll::UntypedStorage<1, 1>  mUnkf4a897;
    ::ll::UntypedStorage<1, 1>  mUnkd17af5;
    ::ll::UntypedStorage<8, 64> mUnk291dd0;
    // NOLINTEND

public:
    // prevent constructor by default
    BakeConfig& operator=(BakeConfig const&);
    BakeConfig(BakeConfig const&);
    BakeConfig();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI ~BakeConfig();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Resources
