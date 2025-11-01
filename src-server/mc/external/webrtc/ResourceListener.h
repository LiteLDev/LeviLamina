#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ResourceUsageState.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Resource; }
// clang-format on

namespace webrtc {

class ResourceListener {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourceListener() = default;

    // vIndex: 1
    virtual void OnResourceUsageStateMeasured(::webrtc::scoped_refptr<::webrtc::Resource>, ::webrtc::ResourceUsageState) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
