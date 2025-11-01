#pragma once

#include "ll/api/utils/HashUtils.h"
#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

// auto generated inclusion list
#include "mc/world/level/ChunkLocalHeight.h"

class ChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
    uchar                           x;
    uchar                           z;
    ::ChunkLocalHeight y;
    // NOLINTEND

    constexpr ChunkBlockPos(::BlockPos const& pos, short minDimensionHeight)
    : x((uchar)(pos.x & 0xF)),
      z((uchar)(pos.z & 0xF)),
      y(::ChunkLocalHeight{(short)(pos.y - minDimensionHeight)}) {}

    constexpr ChunkBlockPos(uchar x, ::ChunkLocalHeight y, uchar z) : x(x), z(z), y(y) {}

    constexpr static ::ChunkBlockPos from2D(uchar x, uchar z) { return ::ChunkBlockPos{x, ::ChunkLocalHeight{0}, z}; }

    constexpr static ::ChunkBlockPos fromLegacyIndex(ushort idx) {
        return ::ChunkBlockPos{(uint8)((idx >> 12) & 0xF), ChunkLocalHeight{(uint8)idx}, (uint8)((idx >> 8) & 0xF)};
    }
    constexpr bool operator==(::ChunkBlockPos const& other) const {
        return x == other.x && z == other.z && y.mVal == other.y.mVal;
    }
    constexpr ushort toLegacyIndex() const { return (ushort)((x & 0xF) << 12 | (z & 0xF) << 8 | (uint8)y.mVal); }
};


namespace std {
template <>
class hash<ChunkBlockPos> {
public:
    size_t operator()(ChunkBlockPos const& t) const {
        ll::utils::hash_utils::HashCombiner hc;
        hc.add(std::hash<short>()(t.x));
        hc.add(std::hash<short>()(t.y.mVal));
        hc.add(std::hash<short>()(t.z));
        return hc.hash();
    }
};
} // namespace std
