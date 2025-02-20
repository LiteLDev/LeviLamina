#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IBlockWorldGenAPI;
// clang-format on

class MultifaceSpreader {
public:
    // MultifaceSpreader inner types define
    enum class SpreadType : uchar {
        SamePosition = 0,
        SamePlane    = 1,
        WrapAround   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk693f7c;
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceSpreader& operator=(MultifaceSpreader const&);
    MultifaceSpreader(MultifaceSpreader const&);
    MultifaceSpreader();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultifaceSpreader() = default;

    // vIndex: 1
    virtual bool _canSpreadFrom(::Block const& block, uchar const facing) const;

    // vIndex: 2
    virtual bool _canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;

    // vIndex: 3
    virtual bool _isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::std::pair<::BlockPos const, uchar const>> _getSpreadWrappingAround(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar                startingFace,
        uchar                spreadDirection
    ) const;

    MCAPI ::std::optional<::std::pair<::BlockPos const, uchar const>> getSpreadFromFaceTowardDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace,
        uchar                spreadDirection
    ) const;

    MCAPI int spreadFromAllFacesTowardAllDirections(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos
    ) const;

    MCAPI bool spreadFromFaceTowardRandomDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::MultifaceSpreader::SpreadType> const& ALL_SPREAD_TYPES();

    MCAPI static ::std::vector<::MultifaceSpreader::SpreadType> const& SAME_POSITION_ONLY();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $_canSpreadFrom(::Block const& block, uchar const facing) const;

    MCAPI bool $_canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;

    MCFOLD bool $_isOtherBlockValidAsSource(::Block const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
