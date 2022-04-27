#pragma once
#include "Tag.hpp"
#include <MC/DoubleTag.hpp>

namespace MC
{
public
ref class DoubleTag : public Tag
{
public:
    __ctor_base(DoubleTag, ::DoubleTag, Tag);

    inline double ^ Value();
    inline DoubleTag ^ operator=(double val);
    inline static DoubleTag ^ Create();
    inline static DoubleTag ^ Create(double val);
    inline bool Set(double val);
    inline double Get();

#ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

#endif // INCLUDE_MCAPI
};
} // namespace MC