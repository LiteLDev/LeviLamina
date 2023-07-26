#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/VectorBase.hpp"
#include "mc/world/level/ChunkLocalHeight.h"

class ChunkBlockPos : public VectorBase<ChunkBlockPos, char, short, char> {

public:
    char x;
    char z;

    ChunkLocalHeight y;
    ChunkBlockPos() : x(0), y(0), z(0){};

    ChunkBlockPos(char x, short y, char z) : x(x), y(y), z(z){};

    inline unsigned short toLegacyIndex() const { return (y.mVal & 0xF) + 16 * (z + 16 * x); }

    template <typename T>
    [[nodiscard]] constexpr T& get(size_t index) {
        switch (index) {
        case 1:
            return (T&)y.mVal;
        case 2:
            return (T&)z;
        default:
            return (T&)x;
        }
    }

    template <typename T>
    [[nodiscard]] constexpr T get(size_t index) const {
        switch (index) {
        case 1:
            return (T)y.mVal;
        case 2:
            return (T)z;
        default:
            return (T)x;
        }
    }

    /**
     * @symbol ??0ChunkBlockPos/@/@QEAA/@EVChunkLocalHeight/@/@E/@Z
     */
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char); // NOLINT
    /**
     * @symbol ??0ChunkBlockPos/@/@QEAA/@AEBVBlockPos/@/@F/@Z
     */
    MCAPI ChunkBlockPos(class BlockPos const&, short); // NOLINT
    /**
     * @symbol ?toPos/@ChunkBlockPos/@/@QEBA?AVPos/@/@XZ
     */
    MCAPI class Pos toPos() const; // NOLINT
    /**
     * @symbol ?from2D/@ChunkBlockPos/@/@SA?AV1/@EE/@Z
     */
    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char); // NOLINT
    /**
     * @symbol ?fromLegacyIndex/@ChunkBlockPos/@/@SA?AV1/@G/@Z
     */
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short); // NOLINT
};

namespace std {

template <>
struct hash<ChunkBlockPos> {
    std::size_t operator()(ChunkBlockPos const& pos) const noexcept { return pos.hash(); }
};

} // namespace std