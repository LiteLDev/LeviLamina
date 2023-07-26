/**
 * @file  SculkVeinMultifaceSpreader.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "MultifaceSpreader.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SculkVeinMultifaceSpreader.
 *
 */
class SculkVeinMultifaceSpreader {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCULKVEINMULTIFACESPREADER
public:
    class SculkVeinMultifaceSpreader& operator=(class SculkVeinMultifaceSpreader const &) = delete;
    SculkVeinMultifaceSpreader(class SculkVeinMultifaceSpreader const &) = delete;
    SculkVeinMultifaceSpreader() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SculkVeinMultifaceSpreader();
    /**
     * @vftbl  1
     * @symbol  ?_canSpreadFrom\@SculkVeinMultifaceSpreader\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool _canSpreadFrom(class Block const &, unsigned char) const;
    /**
     * @vftbl  2
     * @symbol  ?_canSpreadInto\@SculkVeinMultifaceSpreader\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool _canSpreadInto(class IBlockWorldGenAPI &, class Block const &, class BlockPos const &, unsigned char) const;
    /**
     * @vftbl  3
     * @symbol  ?_isOtherBlockValidAsSource\@SculkVeinMultifaceSpreader\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool _isOtherBlockValidAsSource(class Block const &) const;
    /**
     * @symbol  ??0SculkVeinMultifaceSpreader\@\@QEAA\@AEBV?$vector\@W4SpreadType\@MultifaceSpreader\@\@V?$allocator\@W4SpreadType\@MultifaceSpreader\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI SculkVeinMultifaceSpreader(std::vector<enum class MultifaceSpreader::SpreadType> const &);

};