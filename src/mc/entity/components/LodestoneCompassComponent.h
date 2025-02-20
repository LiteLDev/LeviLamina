#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompassSpriteCalculator;
class Dimension;
class LodestoneCompassComponentCalculator;
struct ActorUniqueID;
// clang-format on

class LodestoneCompassComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkd7217f;
    ::ll::UntypedStorage<8, 64> mUnkb85952;
    // NOLINTEND

public:
    // prevent constructor by default
    LodestoneCompassComponent& operator=(LodestoneCompassComponent const&);
    LodestoneCompassComponent(LodestoneCompassComponent const&);
    LodestoneCompassComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LodestoneCompassComponent(::LodestoneCompassComponent&&);

    MCAPI ::LodestoneCompassComponentCalculator* _findCalculator(
        ::std::variant<::ActorUniqueID, ::std::pair<::BlockPos, ::DimensionType>> const& compassId,
        bool                                                                             createIfNotFound
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CompassSpriteCalculator& mSpinningLodestone();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::LodestoneCompassComponent&&);
    // NOLINTEND
};
