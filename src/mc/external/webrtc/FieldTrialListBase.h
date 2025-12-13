#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialParameterInterface.h"

namespace webrtc {

class FieldTrialListBase : public ::webrtc::FieldTrialParameterInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk8cc55a;
    ::ll::UntypedStorage<1, 1> mUnk4669dc;
    // NOLINTEND

public:
    // prevent constructor by default
    FieldTrialListBase& operator=(FieldTrialListBase const&);
    FieldTrialListBase(FieldTrialListBase const&);
    FieldTrialListBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual int Size() = 0;

    // vIndex: 0
    virtual ~FieldTrialListBase() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit FieldTrialListBase(::std::string_view key);
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

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
