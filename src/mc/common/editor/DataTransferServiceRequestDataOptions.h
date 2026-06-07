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
    MCNAPI ~DataTransferServiceRequestDataOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Network
