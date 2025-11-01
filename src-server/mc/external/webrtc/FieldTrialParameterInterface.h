#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FieldTrialParameterInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2a665f;
    ::ll::UntypedStorage<8, 32> mUnk82b305;
    ::ll::UntypedStorage<1, 1> mUnk2ebeb5;
    // NOLINTEND

public:
    // prevent constructor by default
    FieldTrialParameterInterface& operator=(FieldTrialParameterInterface const&);
    FieldTrialParameterInterface(FieldTrialParameterInterface const&);
    FieldTrialParameterInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FieldTrialParameterInterface();

    // vIndex: 1
    virtual bool Parse(::std::optional<::std::string>) = 0;

    // vIndex: 2
    virtual void ParseDone();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FieldTrialParameterInterface(::std::string_view key);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view key);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $ParseDone();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
