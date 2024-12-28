#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class StatsObserver : public ::webrtc::RefCountInterface {
public:
    // prevent constructor by default
    StatsObserver& operator=(StatsObserver const&);
    StatsObserver(StatsObserver const&);
    StatsObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual void OnComplete(::std::vector<::webrtc::StatsReport const*> const&) = 0;

    // vIndex: 2
    virtual ~StatsObserver() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
