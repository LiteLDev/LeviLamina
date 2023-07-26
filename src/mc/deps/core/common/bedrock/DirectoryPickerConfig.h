#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class DirectoryPickerConfig {

public:
    // prevent constructor by default
    DirectoryPickerConfig& operator=(DirectoryPickerConfig const&) = delete;
    DirectoryPickerConfig(DirectoryPickerConfig const&)            = delete;
    DirectoryPickerConfig()                                        = delete;
};

}; // namespace Bedrock
