#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace TreeHelper { struct TreeParams; }
// clang-format on

class MangroveTreeRoots {

public:
    // prevent constructor by default
    MangroveTreeRoots& operator=(MangroveTreeRoots const&) = delete;
    MangroveTreeRoots(MangroveTreeRoots const&)            = delete;
    MangroveTreeRoots()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?placeRoots\@MangroveTreeRoots\@\@UEBA?AV?$optional\@VBlockPos\@\@\@std\@\@AEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@AEBUTreeParams\@TreeHelper\@\@\@Z
     */
    virtual class std::optional<class BlockPos>
    placeRoots(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, struct TreeHelper::TreeParams const&)
        const; // NOLINT

    // private:
    /**
     * @symbol ?_canPlaceRoot\@MangroveTreeRoots\@\@AEBA_NAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI bool _canPlaceRoot(class IBlockWorldGenAPI&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol ?_placeRoot\@MangroveTreeRoots\@\@AEBAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@\@Z
     */
    MCAPI void _placeRoot(class IBlockWorldGenAPI&, class BlockPos const&, class Random&) const; // NOLINT
    /**
     * @symbol
     * ?_potentialRootPositions\@MangroveTreeRoots\@\@AEBA?AV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@EAEAVRandom\@\@0\@Z
     */
    MCAPI std::vector<class BlockPos>
    _potentialRootPositions(class BlockPos const&, unsigned char, class Random&, class BlockPos const&) const; // NOLINT
    /**
     * @symbol
     * ?_simulateRoots\@MangroveTreeRoots\@\@AEBA_NAEAVIBlockWorldGenAPI\@\@AEAVRandom\@\@AEBVBlockPos\@\@2EPEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@HAEBUTreeParams\@TreeHelper\@\@\@Z
     */
    MCAPI bool
    _simulateRoots(class IBlockWorldGenAPI&, class Random&, class BlockPos const&, class BlockPos const&, unsigned char, std::vector<class BlockPos>*, int, struct TreeHelper::TreeParams const&)
        const; // NOLINT

private:
    /**
     * @symbol ?RANDOM_SKEW_CHANCE\@MangroveTreeRoots\@\@0MB
     */
    MCAPI static float const RANDOM_SKEW_CHANCE; // NOLINT
};
