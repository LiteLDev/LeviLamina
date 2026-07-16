#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class SignalReceiver; }
// clang-format on

namespace PlayerReportingSignal {

class PlayerReportingSignalHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka9415e;
    ::ll::UntypedStorage<8, 16> mUnkfd49d2;
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
    virtual ~PlayerReportingSignalHandler() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI PlayerReportingSignalHandler(::Bedrock::SignalReceiver* listener, bool isTestHandler);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Bedrock::SignalReceiver* listener, bool isTestHandler);
#endif
    // NOLINTEND
};

} // namespace PlayerReportingSignal
