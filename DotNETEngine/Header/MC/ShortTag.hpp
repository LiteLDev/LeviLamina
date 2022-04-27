#pragma once
#include "Tag.hpp"
#include <MC/ShortTag.hpp>

namespace MC
{
public
ref class ShortTag : public Tag
{
public:
    __ctor_base(ShortTag, ::ShortTag, Tag);
    inline short ^ Value();
    inline ShortTag ^ operator=(short val);
    inline static ShortTag ^ Create(short val);
    inline static ShortTag ^ Create();
    inline bool Set(short val);
    inline short Get();

#ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    static operator MC::ShortTag ^(short _0);

#endif // INCLUDE_MCAPI
};
} // namespace MC
