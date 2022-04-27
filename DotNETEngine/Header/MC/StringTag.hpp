#pragma once
#include "Tag.hpp"
#include <MC/StringTag.hpp>
namespace MC
{
public
ref class StringTag : public Tag
{
public:
    __ctor_base(StringTag, ::StringTag, Tag);

    inline System::String ^ Value();
    inline StringTag ^ operator=(std::string val);
    inline static StringTag ^ Create();
    inline bool Set(System::String ^ val);
    inline System::String ^ Get();

#ifdef INCLUDE_MCAPI
    StringTag(::System::String ^ _0);

    StringTag();

    virtual void DeleteChildren() override;

    virtual ::System::String ^ ToString() override;

    virtual MC::Tag::Type GetId();

    virtual bool Equals(MC::Tag ^ _0) override;

    virtual unsigned long long hash();
#endif // INCLUDE_MCAPI
};
} // namespace MC
