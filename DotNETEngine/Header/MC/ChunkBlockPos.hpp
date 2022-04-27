#pragma once
#include "Types.hpp"
namespace MC
{
public
ref class ChunkBlockPos : ClassTemplate<ChunkBlockPos, ::ChunkBlockPos>
{
    __ctor_all(ChunkBlockPos, ::ChunkBlockPos);

    static ChunkBlockPos ^ Create();
    static ChunkBlockPos ^ Create(char x, short y, char z);
    static ChunkBlockPos ^ Create(BlockPos ^ bpos, short a2);
    static ChunkBlockPos ^ from2D(unsigned char a1, unsigned char a2);
    static ChunkBlockPos ^ fromLegacyIndex(unsigned short a1);

    property char X
    {
        inline char get();
        inline void set(char mx);
    }
    property char Z
    {
        inline char get();
        inline void set(char mz);
    }
    property short Y
    {
        inline short get();
        inline void set(short my);
    }

#ifdef INCLUDE_MCAPI

    ChunkBlockPos(MC::ChunkBlockPos ^ _0);

    static MC::ChunkBlockPos ^ From2D(unsigned char _0, unsigned char _1);

    static MC::ChunkBlockPos ^ FromLegacyIndex(unsigned short _0);
#endif // INCLUDE_MCAPI
};
} // namespace MC