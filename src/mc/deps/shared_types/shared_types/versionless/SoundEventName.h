#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Versionless {

struct SoundEventName {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mName;
    // NOLINTEND
};

} // namespace SharedTypes::Versionless
