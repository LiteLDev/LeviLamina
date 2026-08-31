#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/SenderParameters.h"

namespace webrtc {

struct AudioSenderParameter : public ::webrtc::SenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkf91598;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AudioSenderParameter() /*override*/;

    virtual ::std::map<::std::string, ::std::string> ToStringMap() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioSenderParameter();

    MCNAPI AudioSenderParameter(::webrtc::AudioSenderParameter const&);

    MCNAPI ::webrtc::AudioSenderParameter& operator=(::webrtc::AudioSenderParameter const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::AudioSenderParameter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::map<::std::string, ::std::string> $ToStringMap() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
