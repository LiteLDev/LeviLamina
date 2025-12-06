#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/Singleton.h"
#include "mc/deps/renderer/hal/ResourceBase.h"

// auto generated forward declare list
// clang-format off
namespace mce { class RenderDeviceNull; }
// clang-format on

namespace mce {

class RenderDevice : public ::mce::ResourceBase<::mce::RenderDeviceNull>, public ::mce::Singleton<::mce::RenderDevice> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk20dcc2;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderDevice& operator=(RenderDevice const&);
    RenderDevice(RenderDevice const&);
    RenderDevice();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RenderDevice();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace mce
