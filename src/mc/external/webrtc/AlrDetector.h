#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class Environment; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class AlrDetector {
public:
    // AlrDetector inner types declare
    // clang-format off
    struct AlrDetectorConfig;
    // clang-format on

    // AlrDetector inner types define
    struct AlrDetectorConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnkb87fa2;
        ::ll::UntypedStorage<8, 8> mUnkd37bfa;
        ::ll::UntypedStorage<8, 8> mUnk72e4fc;
        // NOLINTEND

    public:
        // prevent constructor by default
        AlrDetectorConfig& operator=(AlrDetectorConfig const&);
        AlrDetectorConfig(AlrDetectorConfig const&);
        AlrDetectorConfig();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit AlrDetectorConfig(::webrtc::FieldTrialsView const& key_value_config);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::FieldTrialsView const& key_value_config);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk549fb8;
    ::ll::UntypedStorage<8, 24> mUnk783c87;
    ::ll::UntypedStorage<8, 16> mUnk64aa48;
    ::ll::UntypedStorage<8, 32> mUnka7d0ff;
    ::ll::UntypedStorage<8, 16> mUnk8d31aa;
    // NOLINTEND

public:
    // prevent constructor by default
    AlrDetector& operator=(AlrDetector const&);
    AlrDetector(AlrDetector const&);
    AlrDetector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit AlrDetector(::webrtc::Environment const& env);

    MCNAPI ::std::optional<::webrtc::Timestamp> GetApplicationLimitedRegionStartTime() const;

    MCNAPI void OnBytesSent(::webrtc::DataSize bytes_sent, ::webrtc::Timestamp send_time);

    MCNAPI void SetEstimatedBitrate(::webrtc::DataRate bitrate);

    MCNAPI ~AlrDetector();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const& env);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
