/**
 * @file  MultifaceSpreader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MultifaceSpreader.
 *
 */
class MultifaceSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MULTIFACESPREADER
public:
    class MultifaceSpreader& operator=(class MultifaceSpreader const &) = delete;
    MultifaceSpreader(class MultifaceSpreader const &) = delete;
    MultifaceSpreader() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~MultifaceSpreader();
    /**
     * @hash   -136461590
     * @vftbl  1
     * @symbol ?_canSpreadFrom@MultifaceSpreader@@MEBA_NAEBVBlock@@E@Z
     */
    virtual bool _canSpreadFrom(class Block const &, unsigned char) const;
    /**
     * @hash   -328557366
     * @vftbl  2
     * @symbol ?_canSpreadInto@MultifaceSpreader@@MEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
     */
    virtual bool _canSpreadInto(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   -495593028
     * @vftbl  3
     * @symbol ?_isOtherBlockValidAsSource@MultifaceSpreader@@MEBA_NAEBVBlock@@@Z
     */
    virtual bool _isOtherBlockValidAsSource(class Block const &) const;
    /**
     * @hash   652383911
     * @symbol ??0MultifaceSpreader@@QEAA@AEBV?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@@Z
     */
    MCAPI MultifaceSpreader(std::vector<enum MultifaceSpreader::SpreadType> const &);
    /**
     * @hash   1962286482
     * @symbol ?getSpreadFromFaceTowardDirection@MultifaceSpreader@@QEBA?AV?$optional@U?$pair@$$CBVBlockPos@@$$CBE@std@@@std@@AEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@EE@Z
     */
    MCAPI class std::optional<struct std::pair<class BlockPos const, unsigned char const>> getSpreadFromFaceTowardDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    /**
     * @hash   35021424
     * @symbol ?spreadFromAllFacesTowardAllDirections@MultifaceSpreader@@QEBAHAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@@Z
     */
    MCAPI int spreadFromAllFacesTowardAllDirections(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &) const;
    /**
     * @hash   1271440860
     * @symbol ?spreadFromFaceTowardDirection@MultifaceSpreader@@QEBA_NAEAVBlockSource@@AEBVBlock@@1AEBVBlockPos@@EE@Z
     */
    MCAPI bool spreadFromFaceTowardDirection(class BlockSource &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    /**
     * @hash   -1285833384
     * @symbol ?spreadFromFaceTowardDirectionWorldGen@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@EE@Z
     */
    MCAPI bool spreadFromFaceTowardDirectionWorldGen(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char, unsigned char) const;
    /**
     * @hash   -768322148
     * @symbol ?spreadFromFaceTowardRandomDirection@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@E@Z
     */
    MCAPI bool spreadFromFaceTowardRandomDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @hash   1584472464
     * @symbol ?spreadFromRandomFaceTowardRandomDirection@MultifaceSpreader@@QEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@1AEBVBlockPos@@@Z
     */
    MCAPI bool spreadFromRandomFaceTowardRandomDirection(class IBlockWorldGenAPI &, class Block const &, class Block const &, class BlockPos const &) const;
    /**
     * @hash   -2146446941
     * @symbol ?ALL_SPREAD_TYPES@MultifaceSpreader@@2V?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@B
     */
    MCAPI static std::vector<enum MultifaceSpreader::SpreadType> const ALL_SPREAD_TYPES;
    /**
     * @hash   -577421257
     * @symbol ?SAME_POSITION_ONLY@MultifaceSpreader@@2V?$vector@W4SpreadType@MultifaceSpreader@@V?$allocator@W4SpreadType@MultifaceSpreader@@@std@@@std@@B
     */
    MCAPI static std::vector<enum MultifaceSpreader::SpreadType> const SAME_POSITION_ONLY;

//protected:
    /**
     * @hash   -1327547291
     * @symbol ?_canSpreadToFace@MultifaceSpreader@@IEBA_NAEAVIBlockWorldGenAPI@@AEBVBlock@@AEBVBlockPos@@E@Z
     */
    MCAPI bool _canSpreadToFace(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;

protected:

};