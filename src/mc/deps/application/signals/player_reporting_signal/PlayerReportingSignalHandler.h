#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerReportingSignal {

class PlayerReportingSignalHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9595d8;
    ::ll::UntypedStorage<8, 16> mUnkeea946;
    ::ll::UntypedStorage<1, 1>  mUnkf9318b;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerReportingSignalHandler& operator=(PlayerReportingSignalHandler const&);
    PlayerReportingSignalHandler(PlayerReportingSignalHandler const&);
    PlayerReportingSignalHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayerReportingSignalHandler();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace PlayerReportingSignal
