#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

struct DataTransferServiceSendNewDataOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf0cb99;
    // NOLINTEND

public:
    // prevent constructor by default
    DataTransferServiceSendNewDataOptions& operator=(DataTransferServiceSendNewDataOptions const&);
    DataTransferServiceSendNewDataOptions(DataTransferServiceSendNewDataOptions const&);
    DataTransferServiceSendNewDataOptions();
};

} // namespace Editor::Network
