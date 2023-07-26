#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MultifaceSpreader {
public:
    // MultifaceSpreader inner types declare
    // clang-format off

    // clang-format on

    // MultifaceSpreader inner types define
    enum class SpreadType {};

public:
    // prevent constructor by default
    MultifaceSpreader& operator=(MultifaceSpreader const&) = delete;
    MultifaceSpreader(MultifaceSpreader const&)            = delete;
    MultifaceSpreader()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?_canSpreadFrom\@MultifaceSpreader\@\@MEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool _canSpreadFrom(class Block const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?_canSpreadInto\@MultifaceSpreader\@\@MEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool
    _canSpreadInto(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, unsigned char) const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?_isOtherBlockValidAsSource\@MultifaceSpreader\@\@MEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool _isOtherBlockValidAsSource(class Block const&) const; // NOLINT
    /**
     * @symbol
     * ??0MultifaceSpreader\@\@QEAA\@AEBV?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI MultifaceSpreader(std::vector<enum class MultifaceSpreader::SpreadType> const&); // NOLINT
    /**
     * @symbol
     * ?getSpreadFromFaceTowardDirection\@MultifaceSpreader\@\@QEBA?AV?$optional\@U?$pair\@$$CBVBlockPos\@\@$$CBE\@std\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@EE\@Z
     */
    MCAPI class std::optional<struct std::pair<class BlockPos const, unsigned char const>>
    getSpreadFromFaceTowardDirection(
        class IBlockWorldGenAPI&,
        class Block const&,
        class Block const&,
        class BlockPos const&,
        unsigned char,
        unsigned char
    ) const; // NOLINT
    /**
     * @symbol
     * ?spreadFromAllFacesTowardAllDirections\@MultifaceSpreader\@\@QEBAHAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@\@Z
     */
    MCAPI int
    spreadFromAllFacesTowardAllDirections(class IBlockWorldGenAPI&, class Block const&, class Block const&, class BlockPos const&)
        const; // NOLINT
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
    ) const; // NOLINT
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
    ) const; // NOLINT
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
    ) const; // NOLINT
    /**
     * @symbol
     * ?spreadFromRandomFaceTowardRandomDirection\@MultifaceSpreader\@\@QEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@1AEBVBlockPos\@\@\@Z
     */
    MCAPI bool
    spreadFromRandomFaceTowardRandomDirection(class IBlockWorldGenAPI&, class Block const&, class Block const&, class BlockPos const&)
        const; // NOLINT
    /**
     * @symbol
     * ?ALL_SPREAD_TYPES\@MultifaceSpreader\@\@2V?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class MultifaceSpreader::SpreadType> const ALL_SPREAD_TYPES; // NOLINT
    /**
     * @symbol
     * ?SAME_POSITION_ONLY\@MultifaceSpreader\@\@2V?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@B
     */
    MCAPI static std::vector<enum class MultifaceSpreader::SpreadType> const SAME_POSITION_ONLY; // NOLINT

    // protected:
    /**
     * @symbol ?_canSpreadToFace\@MultifaceSpreader\@\@IEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    MCAPI bool _canSpreadToFace(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, unsigned char)
        const; // NOLINT

protected:
};
