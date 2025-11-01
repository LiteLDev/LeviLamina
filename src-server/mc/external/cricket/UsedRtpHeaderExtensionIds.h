#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/UsedIds.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpExtension; }
// clang-format on

namespace cricket {

class UsedRtpHeaderExtensionIds : public ::cricket::UsedIds<::webrtc::RtpExtension> {
public:
    // UsedRtpHeaderExtensionIds inner types define
    enum class IdDomain : int {
        KOneByteOnly = 0,
        KTwoByteAllowed = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7f553d;
    ::ll::UntypedStorage<4, 4> mUnk8dbb63;
    // NOLINTEND

public:
    // prevent constructor by default
    UsedRtpHeaderExtensionIds& operator=(UsedRtpHeaderExtensionIds const&);
    UsedRtpHeaderExtensionIds(UsedRtpHeaderExtensionIds const&);
    UsedRtpHeaderExtensionIds();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int FindUnusedId() /*override*/;

    // vIndex: 0
    virtual ~UsedRtpHeaderExtensionIds() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $FindUnusedId();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
