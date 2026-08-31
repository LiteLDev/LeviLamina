#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/renderer/hal/base/RenderDeviceBase.h"

namespace mce {

class RenderDeviceNull : public ::mce::RenderDeviceBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 20> mUnk8f4888;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDeviceNull& operator=(RenderDeviceNull const&);
    RenderDeviceNull(RenderDeviceNull const&);
    RenderDeviceNull();
};

} // namespace mce
