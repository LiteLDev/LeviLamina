#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialListBase; }
// clang-format on

namespace webrtc {

class FieldTrialListWrapper {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FieldTrialListWrapper() = default;

    // vIndex: 1
    virtual void WriteElement(void*, int) = 0;

    // vIndex: 2
    virtual ::webrtc::FieldTrialListBase* GetList() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
