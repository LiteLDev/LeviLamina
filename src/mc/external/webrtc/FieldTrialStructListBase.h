#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/FieldTrialParameterInterface.h"

namespace webrtc {

class FieldTrialStructListBase : public ::webrtc::FieldTrialParameterInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk655c78;
    // NOLINTEND

public:
    // prevent constructor by default
    FieldTrialStructListBase& operator=(FieldTrialStructListBase const&);
    FieldTrialStructListBase(FieldTrialStructListBase const&);
    FieldTrialStructListBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool Parse(::std::optional<::std::string>) /*override*/;

    // vIndex: 0
    virtual ~FieldTrialStructListBase() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
