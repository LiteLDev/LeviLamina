#pragma once
#include "Tag.hpp"
#include <MC/IntTag.hpp>

namespace MC
{
ref class Tag;
}

namespace MC
{
public
ref class IntTag : public Tag
{
public:
    __ctor_base(IntTag, ::IntTag, Tag);

    inline int ^ Value();
    inline IntTag ^ operator=(int val);
    inline static IntTag ^ Create();
    inline static IntTag ^ Create(int val);
    inline bool Set(int val);
    inline short Get();
#ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    static operator MC::IntTag ^(int _0);
#endif // INCLUDE_MCAPI
};
} // namespace MC
