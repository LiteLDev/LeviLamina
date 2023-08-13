#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/MultifaceSpreader.h"

class SculkVeinMultifaceSpreader : public ::MultifaceSpreader {

public:
    // prevent constructor by default
    SculkVeinMultifaceSpreader& operator=(SculkVeinMultifaceSpreader const&) = delete;
    SculkVeinMultifaceSpreader(SculkVeinMultifaceSpreader const&)            = delete;
    SculkVeinMultifaceSpreader()                                             = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?_canSpreadFrom\@SculkVeinMultifaceSpreader\@\@UEBA_NAEBVBlock\@\@E\@Z
     */
    virtual bool _canSpreadFrom(class Block const&, unsigned char) const;
    /**
     * @vftbl 2
     * @symbol
     * ?_canSpreadInto\@SculkVeinMultifaceSpreader\@\@UEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlock\@\@AEBVBlockPos\@\@E\@Z
     */
    virtual bool
    _canSpreadInto(class IBlockWorldGenAPI&, class Block const&, class BlockPos const&, unsigned char) const;
    /**
     * @vftbl 3
     * @symbol ?_isOtherBlockValidAsSource\@SculkVeinMultifaceSpreader\@\@UEBA_NAEBVBlock\@\@\@Z
     */
    virtual bool _isOtherBlockValidAsSource(class Block const&) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCULKVEINMULTIFACESPREADER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SculkVeinMultifaceSpreader();
#endif
    // NOLINTEND
};
