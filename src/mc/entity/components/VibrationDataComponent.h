#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ILevel;
struct Tick;
// clang-format on

class VibrationDataComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 16> mUnk5c94ff;
    ::ll::UntypedStorage<8, 8>  mUnk19090b;
    // NOLINTEND

public:
    // prevent constructor by default
    VibrationDataComponent& operator=(VibrationDataComponent const&);
    VibrationDataComponent(VibrationDataComponent const&);
    VibrationDataComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearLastVibrationPos();

    MCAPI ::std::optional<::BlockPos> const& getLastVibrationPos() const;

    MCAPI ::std::optional<uint64> getTicksSinceLastVibration(::ILevel const& level) const;

    MCAPI void setLastVibrationPos(::BlockPos pos, ::Tick tick);
    // NOLINTEND
};
