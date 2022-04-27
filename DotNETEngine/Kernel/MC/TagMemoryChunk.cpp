#include "../../Header/MC/TagMemoryChunk.hpp"
namespace MC
{
size_t TagMemoryChunk::Capacity::get()
{
    return NativePtr->capacity;
}
void TagMemoryChunk::Capacity::set(size_t val)
{
    NativePtr->capacity = val;
}
size_t TagMemoryChunk::Size::get()
{
    return NativePtr->size;
}
void TagMemoryChunk::Size::set(size_t val)
{
    NativePtr->size = val;
}

inline size_t TagMemoryChunk::Data::Size()
{
    return size;
}
inline std::unique_ptr<char[]>* TagMemoryChunk::Data::get()
{
    return u_ptr;
}
inline TagMemoryChunk::Data::Data(std::unique_ptr<char[]>& p, size_t len)
    : size(len)
{
    u_ptr = new std::unique_ptr<char[]>(std::move(p));
}
inline TagMemoryChunk::Data::~Data()
{
    delete u_ptr;
}
inline char ^ TagMemoryChunk::Data::operator[](int index)
{
    if (index < size)
        return (*u_ptr)[index];
    else
        throw gcnew System::IndexOutOfRangeException;
}


TagMemoryChunk::Data ^ TagMemoryChunk::data::get()
{
    return gcnew Data(NativePtr->data, NativePtr->size);
}
void TagMemoryChunk::data::set(Data ^ d)
{
    NativePtr->data = std::move(*d->get());
    Size = d->Size();
}

TagMemoryChunk ^ TagMemoryChunk::Create(array<char> ^ data)
{
    pin_ptr<char> p_ptr = &data[0];
    return gcnew TagMemoryChunk(::TagMemoryChunk(p_ptr, data->Length));
}

TagMemoryChunk ^ TagMemoryChunk::Create(TagMemoryChunk ^ a1)
{
    return gcnew TagMemoryChunk(::TagMemoryChunk(a1));
}

inline void TagMemoryChunk::operator=(TagMemoryChunk ^ a1)
{
    *NativePtr = *a1->NativePtr;
}
} // namespace MC

bool MC::TagMemoryChunk::operator!=(MC::TagMemoryChunk ^ __op, MC::TagMemoryChunk ^ _0)
{
    bool __opNull = ReferenceEquals(__op, nullptr);
    bool _0Null = ReferenceEquals(_0, nullptr);
    if (__opNull || _0Null)
        return !(__opNull && _0Null);
    auto& __arg0 = *(struct ::TagMemoryChunk*)__op->NativePtr;
    auto& __arg1 = *(struct ::TagMemoryChunk*)_0->NativePtr;
    auto __ret = __arg0 != __arg1;
    return __ret;
}

MC::TagMemoryChunk ^ MC::TagMemoryChunk::Copy::get()
{
    auto __ret = ((struct ::TagMemoryChunk*)NativePtr)->copy();
    auto ____ret = new struct ::TagMemoryChunk(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::TagMemoryChunk((struct ::TagMemoryChunk*)____ret, true);
}