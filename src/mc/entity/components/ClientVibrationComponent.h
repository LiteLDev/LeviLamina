#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ILevel;
struct Tick;
// clang-format on

class ClientVibrationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc72d53;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientVibrationComponent& operator=(ClientVibrationComponent const&);
    ClientVibrationComponent(ClientVibrationComponent const&);
    ClientVibrationComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<uint64> getTicksSinceLastVibration(::ILevel const& level) const;

    MCAPI void setLastVibrationTick(::Tick lastVibrationTick);
    // NOLINTEND
};
