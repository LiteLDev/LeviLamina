#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultifaceSpreader {
public:
    // MultifaceSpreader inner types define
    enum class SpreadType {};

public:
    // prevent constructor by default
    MultifaceSpreader& operator=(MultifaceSpreader const&);
    MultifaceSpreader(MultifaceSpreader const&);
    MultifaceSpreader();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultifaceSpreader() = default;

    // vIndex: 1
    virtual bool _canSpreadFrom(class Block const& block, uchar facing) const;

    // vIndex: 2
    virtual bool _canSpreadInto(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class BlockPos const&    pos,
        uchar                    placementDirection
    ) const;

    // vIndex: 3
    virtual bool _isOtherBlockValidAsSource(class Block const&) const;

    MCAPI explicit MultifaceSpreader(std::vector<::MultifaceSpreader::SpreadType> const& spreadTypes);

    MCAPI std::optional<std::pair<class BlockPos const, uchar const>> getSpreadFromFaceTowardDirection(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar                    startingFace,
        uchar                    spreadDirection
    ) const;

    MCAPI int spreadFromAllFacesTowardAllDirections(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos
    ) const;

    MCAPI bool spreadFromFaceTowardDirection(
        class BlockSource&    region,
        class Block const&    self,
        class Block const&    block,
        class BlockPos const& pos,
        uchar                 startingFace,
        uchar                 spreadDirection
    ) const;

    MCAPI bool spreadFromFaceTowardDirectionWorldGen(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar                    startingFace,
        uchar                    spreadDirection
    ) const;

    MCAPI bool spreadFromFaceTowardRandomDirection(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar                    startingFace
    ) const;

    MCAPI bool spreadFromRandomFaceTowardRandomDirection(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos
    ) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool _canSpreadToFace(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class BlockPos const&    pos,
        uchar                    faceDirection
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool _canSpreadFrom$(class Block const& block, uchar facing) const;

    MCAPI bool _canSpreadInto$(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class BlockPos const&    pos,
        uchar                    placementDirection
    ) const;

    MCAPI bool _isOtherBlockValidAsSource$(class Block const&) const;

    MCAPI static std::vector<::MultifaceSpreader::SpreadType> const& ALL_SPREAD_TYPES();

    MCAPI static std::vector<::MultifaceSpreader::SpreadType> const& SAME_POSITION_ONLY();

    // NOLINTEND
};
