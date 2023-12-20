#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialsView {
public:
    // prevent constructor by default
    FieldTrialsView& operator=(FieldTrialsView const&);
    FieldTrialsView(FieldTrialsView const&);
    FieldTrialsView();

public:
    // NOLINTBEGIN
    // symbol: ?IsDisabled@FieldTrialsView@webrtc@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool IsDisabled(std::string_view) const;

    // symbol: ?IsEnabled@FieldTrialsView@webrtc@@QEBA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI bool IsEnabled(std::string_view) const;

    // NOLINTEND
};

}; // namespace webrtc
