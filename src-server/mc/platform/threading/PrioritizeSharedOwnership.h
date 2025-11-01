#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class PrioritizeSharedOwnership {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::shared_mutex> mMutex;
    ::ll::TypedStorage<8, 88, ::std::condition_variable_any> mZeroReaders;
    ::ll::TypedStorage<8, 8, ::std::atomic<uint64>> mReaderCount;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void lock();
    // NOLINTEND

};

}
