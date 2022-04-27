#pragma once
#include "Tag.hpp"
#include <MC/Int64Tag.hpp>

namespace MC
{
public
ref class Int64Tag : public Tag
{
public:
    __ctor_base(Int64Tag, ::Int64Tag, Tag);

    inline int64_t ^ Value();
    inline Int64Tag ^ operator=(int64_t val);
    inline static Int64Tag ^ Create();
    inline static Int64Tag ^ Create(int64_t val);
    inline bool Set(int64_t val);
    inline int64_t Get();

#ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    static operator MC::Int64Tag ^(long long _0);
#endif // INCLUDE_MCAPI
};
} // namespace MC
