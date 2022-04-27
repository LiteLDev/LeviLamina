#pragma once
#include "Tag.hpp"
#include <MC/EndTag.hpp>

namespace MC
{
public
ref class EndTag : public Tag
{
public:
    __ctor_base(EndTag, ::EndTag, Tag);

    inline const nullptr_t Value();
    inline static EndTag ^ Create();
    inline bool Set();
    inline const nullptr_t Get();

#ifdef INCLUDE_MCAPI

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();
#endif // INCLUDE_MCAPI
};
} // namespace MC
