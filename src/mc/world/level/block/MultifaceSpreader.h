#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
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

    using SpreadTypes = ::std::vector<::MultifaceSpreader::SpreadType>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::MultifaceSpreader::SpreadType>> mSpreadTypes;
    // NOLINTEND

public:
    // prevent constructor by default
    MultifaceSpreader();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MultifaceSpreader() = default;

    virtual bool _canSpreadFrom(::Block const& block, uchar const facing) const;

    virtual bool _canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;

    virtual bool _isOtherBlockValidAsSource(::Block const& block) const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit MultifaceSpreader(::std::vector<::MultifaceSpreader::SpreadType> const& spreadTypes);

    MCAPI ::std::optional<::std::pair<::BlockPos const, uchar const>> getSpreadFromFaceTowardDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace,
        uchar                spreadDirection
    ) const;

    MCNAPI int spreadFromFaceTowardAllDirections(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace
    ) const;

    MCNAPI bool spreadFromFaceTowardDirection(
        ::BlockSource&    region,
        ::Block const&    self,
        ::Block const&    block,
        ::BlockPos const& pos,
        uchar             startingFace,
        uchar             spreadDirection
    ) const;

    MCNAPI bool spreadFromFaceTowardRandomDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos,
        uchar                startingFace
    ) const;

    MCNAPI bool spreadFromRandomFaceTowardRandomDirection(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::Block const&       block,
        ::BlockPos const&    pos
    ) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::MultifaceSpreader::SpreadType> const& ALL_SPREAD_TYPES();

    MCNAPI static ::std::vector<::MultifaceSpreader::SpreadType> const& SAME_POSITION_ONLY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::MultifaceSpreader::SpreadType> const& spreadTypes);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $_canSpreadFrom(::Block const& block, uchar const facing) const;

    MCNAPI bool $_canSpreadInto(
        ::IBlockWorldGenAPI& target,
        ::Block const&       self,
        ::BlockPos const&    pos,
        uchar const          placementDirection
    ) const;

    MCNAPI bool $_isOtherBlockValidAsSource(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
