#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FieldTrialsView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class FieldTrialsRegistry : public ::webrtc::FieldTrialsView {
public:
    // prevent constructor by default
    FieldTrialsRegistry& operator=(FieldTrialsRegistry const&);
    FieldTrialsRegistry(FieldTrialsRegistry const&);
    FieldTrialsRegistry();

public:
    // NOLINTBEGIN
    // symbol:
    // ?Lookup@FieldTrialsRegistry@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    MCVAPI std::string Lookup(std::string_view) const;

    // NOLINTEND
};

}; // namespace webrtc
