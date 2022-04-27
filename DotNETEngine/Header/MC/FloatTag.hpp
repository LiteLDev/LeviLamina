#pragma once
#include "Tag.hpp"
#include <MC/FloatTag.hpp>

namespace MC
{
public
ref class FloatTag : public Tag
{
public:
    __ctor_base(FloatTag, ::FloatTag, Tag);

    inline float ^ Value();
    inline FloatTag ^ operator=(float val);
    inline static FloatTag ^ Create();
    inline static FloatTag ^ Create(float val);
    inline bool Set(float val);
    inline float Get();

    #ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();

    static operator MC::FloatTag ^(float _0);

#endif // INCLUDE_MCAPI
};
} // namespace MC
