#pragma once
#include "Types.hpp"
#include <MC/TagMemoryChunk.hpp>
#include <memory>
namespace MC
{
public
ref struct TagMemoryChunk : ClassTemplate<TagMemoryChunk, ::TagMemoryChunk>
{
public:
    __ctor_all(TagMemoryChunk, ::TagMemoryChunk);

    property size_t Capacity
    {
        size_t get();
        void set(size_t val);
    }
    property size_t Size
    {
        size_t get();
        void set(size_t val);
    }
    ref class Data
    {
        Data()
        {
        }
        std::unique_ptr<char[]>* u_ptr;
        size_t size;

    public:
        inline size_t Size();
        inline std::unique_ptr<char[]>* get();
        inline Data(std::unique_ptr<char[]>& p, size_t len);
        inline ~Data();
        inline char ^ operator[](int index);
    };
    property Data ^ data {Data^ get();void set(Data^ d); };
    static TagMemoryChunk ^ Create(array<char> ^ data /*, size_t size*/);
    static TagMemoryChunk ^ Create(TagMemoryChunk ^ a1);
    inline void operator=(TagMemoryChunk ^ a1);

    property MC::TagMemoryChunk ^ Copy {
        MC::TagMemoryChunk ^ get();
    };

    static bool operator!=(MC::TagMemoryChunk ^ __op, MC::TagMemoryChunk ^ _0);
};
} // namespace MC
