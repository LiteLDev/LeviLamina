#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcEvent; }
namespace webrtc { class RtcEventLogOutput; }
// clang-format on

namespace webrtc {

class RtcEventLog {
public:
    // RtcEventLog inner types define
    enum class EncodingType : int {
        Legacy    = 0,
        NewFormat = 1,
        ProtoFree = 2,
    };

    enum : int64 {
        KImmediateOutput = 0,
    };

    enum : uint64 {
        KUnlimitedOutput = 0,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventLog() = default;

    // vIndex: 1
    virtual bool StartLogging(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64) = 0;

    // vIndex: 3
    virtual void StopLogging() = 0;

    // vIndex: 2
    virtual void StopLogging(::std::function<void()>);

    // vIndex: 4
    virtual void Log(::std::unique_ptr<::webrtc::RtcEvent>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
