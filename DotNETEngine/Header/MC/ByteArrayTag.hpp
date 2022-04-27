#pragma once
#include "Tag.hpp"
#include <MC/ByteArrayTag.hpp>

namespace MC
{
ref struct TagMemoryChunk;
}

namespace MC
{
public
ref class ByteArrayTag : public Tag
{
public:
    __ctor_base(ByteArrayTag, ::ByteArrayTag, Tag);

    inline static ByteArrayTag ^ Create();
    inline static ByteArrayTag ^ Create(TagMemoryChunk ^ val);
    inline static ByteArrayTag ^ Create(array<char> ^ data /*, size_t size*/);

    inline TagMemoryChunk ^ Value();
    inline bool Set(TagMemoryChunk ^ val);
    inline TagMemoryChunk ^ Get();
    inline ByteArrayTag ^ operator=(TagMemoryChunk ^ val);

    #ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    static operator MC::ByteArrayTag ^(MC::TagMemoryChunk ^ _0);

#endif // INCLUDE_MCAPI
};
} // namespace MC
