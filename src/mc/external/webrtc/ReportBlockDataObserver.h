#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ReportBlockData; }
// clang-format on

namespace webrtc {

class ReportBlockDataObserver {
public:
    // prevent constructor by default
    ReportBlockDataObserver& operator=(ReportBlockDataObserver const&);
    ReportBlockDataObserver(ReportBlockDataObserver const&);
    ReportBlockDataObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReportBlockDataObserver();

    // vIndex: 1
    virtual void OnReportBlockDataUpdated(::webrtc::ReportBlockData) = 0;
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
