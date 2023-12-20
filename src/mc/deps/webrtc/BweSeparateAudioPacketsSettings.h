#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

class BweSeparateAudioPacketsSettings {
public:
    // prevent constructor by default
    BweSeparateAudioPacketsSettings& operator=(BweSeparateAudioPacketsSettings const&);
    BweSeparateAudioPacketsSettings(BweSeparateAudioPacketsSettings const&);
    BweSeparateAudioPacketsSettings();

public:
    // NOLINTBEGIN
    // symbol: ??0BweSeparateAudioPacketsSettings@webrtc@@QEAA@PEBVFieldTrialsView@1@@Z
    MCAPI explicit BweSeparateAudioPacketsSettings(class webrtc::FieldTrialsView const*);

    // symbol:
    // ?Parser@BweSeparateAudioPacketsSettings@webrtc@@QEAA?AV?$unique_ptr@VStructParametersParser@webrtc@@U?$default_delete@VStructParametersParser@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::StructParametersParser> Parser();

    // symbol: ?kKey@BweSeparateAudioPacketsSettings@webrtc@@2QBDB
    MCAPI static char const kKey[];

    // NOLINTEND
};

}; // namespace webrtc
