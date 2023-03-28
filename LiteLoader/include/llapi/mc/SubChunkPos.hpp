/**
 * @file  SubChunkPos.hpp
 *
 */
#pragma once

#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "VectorBase.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC class SubChunkPos.
 *
 */
class SubChunkPos : public VectorBase<SubChunkPos, int, int, int> {
#define AFTER_EXTRA
    // Add Member There
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

public:
    /**
     * @symbol ??0SubChunkPos\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI SubChunkPos(class BlockPos const&);
    /**
     * @symbol ??BSubChunkPos\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI operator class BlockPos() const;
    /**
     * @symbol ?MAX\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MAX;
    /**
     * @symbol ?MIN\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const MIN;
    /**
     * @symbol ?ONE\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ONE;
    /**
     * @symbol ?ZERO\@SubChunkPos\@\@2V1\@B
     */
    MCAPI static class SubChunkPos const ZERO;
};

namespace std {

template <>
struct hash<SubChunkPos> {
    std::size_t operator()(SubChunkPos const& pos) const noexcept {
        return pos.hash();
    }
};

} // namespace std
