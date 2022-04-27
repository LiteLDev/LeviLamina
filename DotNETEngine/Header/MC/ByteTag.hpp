#pragma once
#include "Tag.hpp"
#include <MC/ByteTag.hpp>

namespace MC
{
public
ref class ByteTag : public Tag
{
public:
    __ctor_base(ByteTag, ::ByteTag, Tag);

    inline unsigned char Value();
    inline ByteTag ^ operator=(unsigned char val);
    inline static ByteTag ^ Create();
    inline bool Set(unsigned char val);
    inline unsigned char Get();

#ifdef INCLUDE_MCAPI

    ByteTag();


    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    static operator MC::ByteTag ^(unsigned char _0);

#endif // INCLUDE_MCAPI
};
} // namespace MC
