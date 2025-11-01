#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class StructParametersParser; }
// clang-format on

namespace webrtc {

struct BweSeparateAudioPacketsSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd593a9;
    ::ll::UntypedStorage<4, 4> mUnka07dcc;
    ::ll::UntypedStorage<8, 8> mUnk30830f;
    // NOLINTEND

public:
    // prevent constructor by default
    BweSeparateAudioPacketsSettings& operator=(BweSeparateAudioPacketsSettings const&);
    BweSeparateAudioPacketsSettings(BweSeparateAudioPacketsSettings const&);
    BweSeparateAudioPacketsSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BweSeparateAudioPacketsSettings(::webrtc::FieldTrialsView const* key_value_config);

    MCNAPI ::std::unique_ptr<::webrtc::StructParametersParser> Parser();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kKey();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* key_value_config);
    // NOLINTEND

};

}
