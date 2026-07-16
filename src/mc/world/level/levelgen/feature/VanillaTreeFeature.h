#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/IFeature.h"
#include "mc/world/level/levelgen/feature/ITreeFeature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class VanillaTreeFeature : public ::ITreeFeature {
    // size:ok
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaTreeFeature() /*override*/ = default;

    virtual ::std::optional<::BlockPos> place(::IFeature::PlacementContext const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
