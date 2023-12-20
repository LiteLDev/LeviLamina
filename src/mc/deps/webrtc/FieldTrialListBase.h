#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FieldTrialParameterInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialParameterInterface; }
// clang-format on

namespace webrtc {

class FieldTrialListBase : public ::webrtc::FieldTrialParameterInterface {
public:
    // prevent constructor by default
    FieldTrialListBase& operator=(FieldTrialListBase const&);
    FieldTrialListBase(FieldTrialListBase const&);
    FieldTrialListBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FieldTrialListBase@webrtc@@UEAA@XZ
    virtual ~FieldTrialListBase();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0FieldTrialListBase@webrtc@@IEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI explicit FieldTrialListBase(std::string_view);

    // NOLINTEND
};

}; // namespace webrtc
