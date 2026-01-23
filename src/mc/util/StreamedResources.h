#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ResourceLocation;
// clang-format on

namespace mce {

class StreamedResources {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool shouldStream(::ResourceLocation const& resourceLocation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::unordered_set<uint64>& streamedDirectories();
    // NOLINTEND
};

} // namespace mce
