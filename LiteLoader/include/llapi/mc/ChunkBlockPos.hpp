/**
 * @file  ChunkBlockPos.hpp
 *
 */
#pragma once

#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "VectorBase.hpp"

class ChunkLocalHeight {
public:
    short mVal;
    ChunkLocalHeight(short v) : mVal(v){};
    ChunkLocalHeight() : mVal(0){};
};

#undef BEFORE_EXTRA

/**
 * @brief MC class ChunkBlockPos.
 *
 */
class ChunkBlockPos : public VectorBase<ChunkBlockPos, char, short, char> {
#define AFTER_EXTRA
// Add Member There
#define DISABLE_CONSTRUCTOR_PREVENTION_CHUNKBLOCKPOS
public:
    char x;
    char z;
    ChunkLocalHeight y;
    ChunkBlockPos() : x(0), y(0), z(0){};

    ChunkBlockPos(char x, short y, char z) : x(x), y(y), z(z){};

    inline unsigned short toLegacyIndex() {
        return (y.mVal & 0xF) + 16 * (z + 16 * x);
    }

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

public:
    /**
     * @symbol ??0ChunkBlockPos\@\@QEAA\@EVChunkLocalHeight\@\@E\@Z
     */
    MCAPI ChunkBlockPos(unsigned char, class ChunkLocalHeight, unsigned char);
    /**
     * @symbol ??0ChunkBlockPos\@\@QEAA\@AEBVBlockPos\@\@F\@Z
     */
    MCAPI ChunkBlockPos(class BlockPos const&, short);
    /**
     * @symbol ?toPos\@ChunkBlockPos\@\@QEBA?AVPos\@\@XZ
     */
    // MCAPI class Pos toPos() const;
    /**
     * @symbol ?from2D\@ChunkBlockPos\@\@SA?AV1\@EE\@Z
     */
    MCAPI static class ChunkBlockPos from2D(unsigned char, unsigned char);
    /**
     * @symbol ?fromLegacyIndex\@ChunkBlockPos\@\@SA?AV1\@G\@Z
     */
    MCAPI static class ChunkBlockPos fromLegacyIndex(unsigned short);
};

namespace std {

template <>
struct hash<ChunkBlockPos> {
    std::size_t operator()(ChunkBlockPos const& pos) const noexcept {
        return pos.hash();
    }
};

} // namespace std
