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
    // vIndex: 0, symbol: __gen_??1MultifaceSpreader@@UEAA@XZ
    virtual ~MultifaceSpreader() = default;

    // vIndex: 1, symbol: ?_canSpreadFrom@MultifaceSpreader@@MEBA_NAEBVBlock@@E@Z
    virtual bool _canSpreadFrom(class Block const& block, uchar facing) const;

    // vIndex: 2, symbol: ?_canSpreadInto@MultifaceSpreader@@MEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
    virtual bool
    _canSpreadInto(class IBlockWorldGenAPI& target, class Block const& self, class BlockPos const& pos, uchar) const;

    // vIndex: 3, symbol: ?_isOtherBlockValidAsSource@MultifaceSpreader@@MEBA_NAEBVBlock@@@Z
    virtual bool _isOtherBlockValidAsSource(class Block const&) const;

    // symbol:
    // ??0MultifaceSpreader@@QEAA@AEBV?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@@Z
    MCAPI explicit MultifaceSpreader(std::vector<::MultifaceSpreader::SpreadType> const&);

    // symbol:
    // ?getSpreadFromFaceTowardDirection@MultifaceSpreader@@QEBA?AV?$optional@U?$pair@$$CBVBlockPos@@$$CBE@std@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@EE@Z
    MCAPI std::optional<std::pair<class BlockPos const, uchar const>> getSpreadFromFaceTowardDirection(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar,
        uchar
    ) const;

    // symbol:
    // ?spreadFromAllFacesTowardAllDirections@MultifaceSpreader@@QEBAHAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@@Z
    MCAPI int spreadFromAllFacesTowardAllDirections(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos
    ) const;

    // symbol: ?spreadFromFaceTowardDirection@MultifaceSpreader@@QEBA_NAEAVBlockSource@@AEBVBlock@@1AEBVBlockPos@@EE@Z
    MCAPI bool spreadFromFaceTowardDirection(
        class BlockSource&    region,
        class Block const&    self,
        class Block const&    block,
        class BlockPos const& pos,
        uchar,
        uchar
    ) const;

    // symbol:
    // ?spreadFromFaceTowardDirectionWorldGen@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@EE@Z
    MCAPI bool spreadFromFaceTowardDirectionWorldGen(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar,
        uchar
    ) const;

    // symbol:
    // ?spreadFromFaceTowardRandomDirection@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@E@Z
    MCAPI bool spreadFromFaceTowardRandomDirection(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar
    ) const;

    // symbol:
    // ?spreadFromRandomFaceTowardRandomDirection@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@@Z
    MCAPI bool spreadFromRandomFaceTowardRandomDirection(
        class IBlockWorldGenAPI& target,
        class Block const&       self,
        class Block const&       block,
        class BlockPos const&    pos
    ) const;

    // symbol:
    // ?ALL_SPREAD_TYPES@MultifaceSpreader@@2V?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@B
    MCAPI static std::vector<::MultifaceSpreader::SpreadType> const ALL_SPREAD_TYPES;

    // symbol:
    // ?SAME_POSITION_ONLY@MultifaceSpreader@@2V?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@B
    MCAPI static std::vector<::MultifaceSpreader::SpreadType> const SAME_POSITION_ONLY;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_canSpreadToFace@MultifaceSpreader@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
    MCAPI bool
    _canSpreadToFace(class IBlockWorldGenAPI& target, class Block const& self, class BlockPos const& pos, uchar) const;

    // NOLINTEND
};
