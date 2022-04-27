#include "../../Header/MC/ChunkBlockPos.hpp"
#include "../../Header/MC/BlockPos.hpp"
namespace MC
{

inline char ChunkBlockPos::X::get()
{
    return NativePtr->x;
}
inline void ChunkBlockPos::X::set(char mx)
{
    NativePtr->x = mx;
}
inline char ChunkBlockPos::Z::get()
{
    return NativePtr->z;
}
inline void ChunkBlockPos::Z::set(char mz)
{
    NativePtr->z = mz;
}
inline short ChunkBlockPos::Y::get()
{
    return NativePtr->y;
}
inline void ChunkBlockPos::Y::set(short my)
{
    NativePtr->y = my;
}

ChunkBlockPos ^ ChunkBlockPos::Create()
{
    return gcnew ChunkBlockPos(::ChunkBlockPos());
}

ChunkBlockPos ^ ChunkBlockPos::Create(char x, short y, char z)
{
    return gcnew ChunkBlockPos(::ChunkBlockPos(x, y, z));
}

ChunkBlockPos ^ ChunkBlockPos::Create(BlockPos ^ bpos, short a2)
{
    return gcnew ChunkBlockPos(::ChunkBlockPos(bpos, a2));
}

ChunkBlockPos ^ ChunkBlockPos::from2D(unsigned char a1, unsigned char a2)
{
    return gcnew ChunkBlockPos(::ChunkBlockPos::from2D(a1, a2));
}
ChunkBlockPos ^ ChunkBlockPos::fromLegacyIndex(unsigned short a1)
{
    return gcnew ChunkBlockPos(::ChunkBlockPos::fromLegacyIndex(a1));
}
} // namespace MC


#ifdef INCLUDE_MCAPI

MC::ChunkBlockPos ^ MC::ChunkBlockPos::From2D(unsigned char _0, unsigned char _1)
{
    auto __ret = ::ChunkBlockPos::from2D(_0, _1);
    auto ____ret = new class ::ChunkBlockPos(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ChunkBlockPos((class ::ChunkBlockPos*)____ret, true);
}

MC::ChunkBlockPos ^ MC::ChunkBlockPos::FromLegacyIndex(unsigned short _0)
{
    auto __ret = ::ChunkBlockPos::fromLegacyIndex(_0);
    auto ____ret = new class ::ChunkBlockPos(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ChunkBlockPos((class ::ChunkBlockPos*)____ret, true);
}

MC::ChunkBlockPos::ChunkBlockPos(MC::ChunkBlockPos ^ _0)
{
    OwnsNativeInstance = true;
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::ChunkBlockPos*)_0->NativePtr;
    NativePtr = new class ::ChunkBlockPos(__arg0);
}
#endif // INCLUDE_MCAPI
