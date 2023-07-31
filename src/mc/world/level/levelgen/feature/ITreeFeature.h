#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ITreeFeature {

public:
    // prevent constructor by default
    ITreeFeature& operator=(ITreeFeature const&) = delete;
    ITreeFeature(ITreeFeature const&)            = delete;
    ITreeFeature()                               = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITREEFEATURE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ITreeFeature();
#endif
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_place\@ITreeFeature\@\@IEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@AEAVRenderParams\@\@\@Z
     */
    MCAPI std::optional<class BlockPos>
          _place(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, class RenderParams&) const;
    // NOLINTEND
};
