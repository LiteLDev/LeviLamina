#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/renderer/hal/ResourceBase.h"
#include "mc/deps/renderer/hal/null/RenderDeviceNull.h"

namespace mce {

class RenderDevice : public ::mce::ResourceBase<::mce::RenderDeviceNull>, public ::mce::Singleton<::mce::RenderDevice> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc3e12c;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDevice& operator=(RenderDevice const&);
    RenderDevice(RenderDevice const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderDevice();

    MCNAPI ~RenderDevice();
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

} // namespace mce
