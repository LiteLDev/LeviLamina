#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialParameterInterface.h"

namespace webrtc {

class AbstractFieldTrialEnum : public ::webrtc::FieldTrialParameterInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7884cb;
    ::ll::UntypedStorage<8, 16> mUnkfd8710;
    ::ll::UntypedStorage<8, 16> mUnka16f82;
    // NOLINTEND

public:
    // prevent constructor by default
    AbstractFieldTrialEnum& operator=(AbstractFieldTrialEnum const&);
    AbstractFieldTrialEnum(AbstractFieldTrialEnum const&);
    AbstractFieldTrialEnum();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AbstractFieldTrialEnum() /*override*/ = default;

    virtual bool Parse(::std::optional<::std::string>) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
