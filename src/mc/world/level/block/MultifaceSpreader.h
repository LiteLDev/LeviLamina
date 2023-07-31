#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultifaceSpreader {
public:
    // MultifaceSpreader inner types define
    enum class SpreadType {};

public:
    // prevent constructor by default
    MultifaceSpreader& operator=(MultifaceSpreader const&) = delete;
    MultifaceSpreader(MultifaceSpreader const&)            = delete;
    MultifaceSpreader()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_canSpreadFrom\@MultifaceSpreader\@\@MEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool _canSpreadFrom(class Block const&, unsigned char) const;
    /**
     * @vftbl 2
     * @symbol ?_canSpreadInto\@MultifaceSpreader\@\@MEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool
    _canSpreadInto(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 3
     * @symbol ?_isOtherBlockValidAsSource\@MultifaceSpreader\@\@MEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool _isOtherBlockValidAsSource(class Block const&) const;
    /**
     * @symbol
     * ??0MultifaceSpreader\@\@QEAA\@AEBV?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MultifaceSpreader(std::vector<enum class MultifaceSpreader::SpreadType> const&);
    /**
     * @symbol
     * ?getSpreadFromFaceTowardDirection\@MultifaceSpreader\@\@QEBA?AV?$optional\@U?$pair\@$$CBVBlockPos\@\@$$CBE\@std\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@EE\@Z
     */
    MCAPI std::optional<std::pair<class BlockPos const, unsigned char const>> getSpreadFromFaceTowardDirection(
        class IBlockWorldGenAPI&,
        class Block const&,
        class Block const&,
        class BlockPos const&,
        unsigned char,
        unsigned char
    ) const;
    /**
     * @symbol
     * ?spreadFromAllFacesTowardAllDirections\@MultifaceSpreader\@\@QEBAHAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@\@Z
     */
    MCAPI int
    spreadFromAllFacesTowardAllDirections(class IBlockWorldGenAPI&, class Block const&, class Block const&, class BlockPos const&)
        const;
    /**
     * @symbol
     * ?spreadFromFaceTowardDirection\@MultifaceSpreader\@\@QEBA_NAEAVBlockSource\@\@AEBVBlock\@\@1AEBVBlockPos\@\@EE\@Z
     */
    MCAPI bool spreadFromFaceTowardDirection(
        class BlockSource&,
        class Block const&,
        class Block const&,
        class BlockPos const&,
        unsigned char,
        unsigned char
    ) const;
    /**
     * @symbol
     * ?spreadFromFaceTowardDirectionWorldGen\@MultifaceSpreader\@\@QEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@EE\@Z
     */
    MCAPI bool spreadFromFaceTowardDirectionWorldGen(
        class IBlockWorldGenAPI&,
        class Block const&,
        class Block const&,
        class BlockPos const&,
        unsigned char,
        unsigned char
    ) const;
    /**
     * @symbol
     * ?spreadFromFaceTowardRandomDirection\@MultifaceSpreader\@\@QEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool spreadFromFaceTowardRandomDirection(
        class IBlockWorldGenAPI&,
        class Block const&,
        class Block const&,
        class BlockPos const&,
        unsigned char
    ) const;
    /**
     * @symbol
     * ?spreadFromRandomFaceTowardRandomDirection\@MultifaceSpreader\@\@QEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@\@Z
     */
    MCAPI bool
    spreadFromRandomFaceTowardRandomDirection(class IBlockWorldGenAPI&, class Block const&, class Block const&, class BlockPos const&)
        const;
    /**
     * @symbol
     * ?ALL_SPREAD_TYPES\@MultifaceSpreader\@\@2V?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class MultifaceSpreader::SpreadType> const ALL_SPREAD_TYPES;
    /**
     * @symbol
     * ?SAME_POSITION_ONLY\@MultifaceSpreader\@\@2V?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class MultifaceSpreader::SpreadType> const SAME_POSITION_ONLY;
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol ?_canSpreadToFace\@MultifaceSpreader\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool
    _canSpreadToFace(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, unsigned char) const;
    // NOLINTEND
};
