#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class LegacyStructureSettings;
class LegacyStructureTemplate;
class Random;
// clang-format on

class CoralCrustFeature : public ::Feature {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~CoralCrustFeature() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canOverwrite(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI ::BlockPos _getCropOffsetFromRot(int rot, int type) const;

    MCAPI ::BlockPos _getOffsetFromRot(int rot, int type) const;

    MCAPI void _placeCoral(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::std::vector<::BlockPos>& topDec, ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec, int color) const;

    MCAPI void _placeCoralBase(::BlockSource& region, ::BlockPos const& pos, ::Random& random, ::LegacyStructureTemplate& structure, ::LegacyStructureSettings& settings) const;

    MCFOLD void _placeSideDecorations(::BlockSource& region, ::BlockPos const& pos, ::Random& random, uchar dir) const;

    MCFOLD void _placeTopDecorations(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
