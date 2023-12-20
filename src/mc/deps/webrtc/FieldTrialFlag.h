#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FieldTrialParameterInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialParameterInterface; }
// clang-format on

namespace webrtc {

class FieldTrialFlag : public ::webrtc::FieldTrialParameterInterface {
public:
    // prevent constructor by default
    FieldTrialFlag& operator=(FieldTrialFlag const&);
    FieldTrialFlag(FieldTrialFlag const&);
    FieldTrialFlag();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FieldTrialFlag@webrtc@@UEAA@XZ
    virtual ~FieldTrialFlag();

    // vIndex: 1, symbol:
    // ?Parse@FieldTrialFlag@webrtc@@MEAA_NV?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    virtual bool Parse(std::optional<std::string>);

    // symbol: ??0FieldTrialFlag@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI explicit FieldTrialFlag(std::string_view);

    // symbol: ??0FieldTrialFlag@webrtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@_N@Z
    MCAPI FieldTrialFlag(std::string_view, bool);

    // symbol: ?Get@FieldTrialFlag@webrtc@@QEBA_NXZ
    MCAPI bool Get() const;

    // symbol: ??BFieldTrialFlag@webrtc@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // NOLINTEND
};

}; // namespace webrtc
