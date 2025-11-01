#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/RefCountedNonVirtual.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketInfo; }
// clang-format on

namespace webrtc {

class RtpPacketInfos {
public:
    // RtpPacketInfos inner types declare
    // clang-format off
    class Data;
    // clang-format on
    
    // RtpPacketInfos inner types define
    class Data : public ::rtc::RefCountedNonVirtual<::webrtc::RtpPacketInfos::Data> {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnkc17317;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);
        Data();
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf144cd;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpPacketInfos& operator=(RtpPacketInfos const&);
    RtpPacketInfos(RtpPacketInfos const&);
    RtpPacketInfos();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~RtpPacketInfos();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
