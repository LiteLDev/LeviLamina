#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/SenderParameters.h"

namespace cricket {

struct AudioSenderParameter : public ::cricket::SenderParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkef0b3b;
    // NOLINTEND

public:
    // prevent constructor by default
    AudioSenderParameter& operator=(AudioSenderParameter const&);
    AudioSenderParameter(AudioSenderParameter const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AudioSenderParameter() /*override*/;

    // vIndex: 1
    virtual ::std::map<::std::string, ::std::string> ToStringMap() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AudioSenderParameter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
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

}
