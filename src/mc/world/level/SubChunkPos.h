#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/VectorBase.hpp"

class SubChunkPos : public VectorBase<SubChunkPos, int, int, int> {

public:
    int x;
    int y;
    int z;

    SubChunkPos() = default;

    inline SubChunkPos(int ix, int iy, int iz) : x(ix), y(iy), z(iz) {}

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) {
        switch (index) {
        case 1:
            return y;
        case 2:
            return z;
        default:
            return x;
        }
    }

    template <typename T>
    [[nodiscard]] constexpr T get(size_t index) const {
        switch (index) {
        case 1:
            return y;
        case 2:
            return z;
        default:
            return x;
        }
    }

    /**
     * @symbol ??0SubChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SubChunkPos(class BlockPos const&); // NOLINT
    /**
     * @symbol ??BSubChunkPos\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI operator class BlockPos() const; // NOLINT
    /**
     * @symbol ?MAX\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MAX; // NOLINT
    /**
     * @symbol ?MIN\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MIN; // NOLINT
    /**
     * @symbol ?ONE\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ONE; // NOLINT
    /**
     * @symbol ?ZERO\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ZERO; // NOLINT
};
