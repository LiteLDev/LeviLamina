#pragma once
#include "Tag.hpp"
#include "TagMemoryChunk.hpp"
#include <MC/IntArrayTag.hpp>

namespace MC
{
public
ref class IntArrayTag : public Tag
{
public:
    __ctor_base(IntArrayTag, ::IntArrayTag, Tag);

    inline TagMemoryChunk ^ Value();
    inline IntArrayTag ^ operator=(TagMemoryChunk ^ val);
    inline static IntArrayTag ^ Create();
    inline static IntArrayTag ^ Create(TagMemoryChunk ^ val);
    inline static IntArrayTag ^ Create(array<int> ^ data /*, size_t size*/);
    inline bool Set(TagMemoryChunk ^ val);
    inline TagMemoryChunk ^ Get();

#ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();
#endif // INCLUDE_MCAPI
};
} // namespace MC