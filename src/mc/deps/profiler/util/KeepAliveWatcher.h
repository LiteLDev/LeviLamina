#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::RefCount::details { struct KeepAlive; }
namespace Bedrock::RefCount::details { struct KeepAliveRecord; }
// clang-format on

namespace Bedrock::RefCount {

class KeepAliveWatcher {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5f2995;
    ::ll::UntypedStorage<8, 64> mUnke7b80f;
    ::ll::UntypedStorage<8, 80> mUnk323263;
    // NOLINTEND

public:
    // prevent constructor by default
    KeepAliveWatcher& operator=(KeepAliveWatcher const&);
    KeepAliveWatcher(KeepAliveWatcher const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI KeepAliveWatcher();

#ifdef LL_PLAT_C
    MCNAPI ::std::shared_ptr<::Bedrock::RefCount::details::KeepAlive const>
    addKeepAlive(::std::string_view consumerName);
#endif

    MCNAPI ~KeepAliveWatcher();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::RefCount
