#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct DataTransferServiceRequestDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnka0f6ff;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceRequestDataOptions& operator=(DataTransferServiceRequestDataOptions const&);
    DataTransferServiceRequestDataOptions(DataTransferServiceRequestDataOptions const&);
    DataTransferServiceRequestDataOptions();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~DataTransferServiceRequestDataOptions();
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

} // namespace Editor::Network
