#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Network {

class GuidePlaneCommonBasePayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkbc5a8b;
    // NOLINTEND

public:
    // prevent constructor by default
    GuidePlaneCommonBasePayload& operator=(GuidePlaneCommonBasePayload const&);
    GuidePlaneCommonBasePayload(GuidePlaneCommonBasePayload const&);
    GuidePlaneCommonBasePayload();
};

} // namespace Editor::Network
