#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/FieldTrialsRegistry.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsRegistry; }
// clang-format on

namespace webrtc {

class FieldTrialBasedConfig : public ::webrtc::FieldTrialsRegistry {
public:
    // prevent constructor by default
    FieldTrialBasedConfig& operator=(FieldTrialBasedConfig const&);
    FieldTrialBasedConfig(FieldTrialBasedConfig const&);
    FieldTrialBasedConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FieldTrialBasedConfig@webrtc@@UEAA@XZ
    virtual ~FieldTrialBasedConfig();

    // vIndex: 1, symbol:
    // ?Lookup@FieldTrialsRegistry@webrtc@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    virtual std::string Lookup(std::string_view) const;

    // vIndex: 2, symbol:
    // ?GetValue@FieldTrialBasedConfig@webrtc@@EEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@@Z
    virtual std::string GetValue(std::string_view) const;

    // NOLINTEND
};

}; // namespace webrtc
