#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class LegacyStructureSettings;
class LegacyStructureTemplate;
class Random;
// clang-format on

class CoralCrustFeature : public ::Feature {
public:
    // prevent constructor by default
    CoralCrustFeature& operator=(CoralCrustFeature const&);
    CoralCrustFeature(CoralCrustFeature const&);
    CoralCrustFeature();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual bool place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 0
    virtual ~CoralCrustFeature() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPos _getCropOffsetFromRot(int rot, int type) const;

    MCAPI ::BlockPos _getOffsetFromRot(int rot, int type) const;

    MCAPI void _placeCoral(
        ::BlockSource&                                 region,
        ::BlockPos const&                              pos,
        ::Random&                                      random,
        ::std::vector<::BlockPos>&                     topDec,
        ::std::vector<::std::pair<::BlockPos, uchar>>& sideDec,
        int                                            color
    ) const;

    MCAPI void _placeCoralBase(
        ::BlockSource&             region,
        ::BlockPos const&          pos,
        ::Random&                  random,
        ::LegacyStructureTemplate& structure,
        ::LegacyStructureSettings& settings
    ) const;

    MCAPI void _placeSideDecorations(::BlockSource& region, ::BlockPos const& pos, ::Random& random, uchar dir) const;

    MCAPI ::gsl::not_null<::Block const*> _setCoralHangData(int face, int color, int type) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $place(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
