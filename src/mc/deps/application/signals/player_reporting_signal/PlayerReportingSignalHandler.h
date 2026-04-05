#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace PlayerReportingSignal { class GetReportJson; }
namespace PlayerReportingSignal { class ResetAll; }
namespace PlayerReportingSignal { class SendReport; }
namespace PlayerReportingSignal { class SetData; }
namespace PlayerReportingSignal { class SetJson; }
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
    MCNAPI ::Json::Value _getReportDataJson();

    MCNAPI void _getReportJsonHandler(::PlayerReportingSignal::GetReportJson const& signal);

    MCNAPI void _resetAll(::PlayerReportingSignal::ResetAll const& signal);

    MCNAPI void _sendReport(::PlayerReportingSignal::SendReport const& signal);

    MCNAPI void _setDataHandler(::PlayerReportingSignal::SetData const& signal);

    MCNAPI void _setJsonHandler(::PlayerReportingSignal::SetJson const& signal);
#endif
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace PlayerReportingSignal
