#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Profile::Whisker { struct ScopeData; }
// clang-format on

namespace Bedrock::Profile::Whisker {

class SlotResolveQueryHelper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk3e127f;
    ::ll::UntypedStorage<8, 24> mUnkd81b9f;
    ::ll::UntypedStorage<8, 24> mUnk2ed60c;
    ::ll::UntypedStorage<8, 24> mUnk55cb42;
    ::ll::UntypedStorage<8, 24> mUnk96621f;
    ::ll::UntypedStorage<8, 24> mUnk78071b;
    ::ll::UntypedStorage<8, 24> mUnk5f3da9;
    ::ll::UntypedStorage<8, 24> mUnkbcbfcd;
    // NOLINTEND

public:
    // prevent constructor by default
    SlotResolveQueryHelper& operator=(SlotResolveQueryHelper const&);
    SlotResolveQueryHelper(SlotResolveQueryHelper const&);
    SlotResolveQueryHelper();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~SlotResolveQueryHelper();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace Bedrock::Profile::Whisker
