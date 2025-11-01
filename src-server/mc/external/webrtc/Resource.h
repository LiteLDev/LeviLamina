#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ResourceListener; }
// clang-format on

namespace webrtc {

class Resource : public ::webrtc::RefCountInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~Resource() /*override*/ = default;

    // vIndex: 3
    virtual ::std::string Name() const = 0;

    // vIndex: 4
    virtual void SetResourceListener(::webrtc::ResourceListener*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
