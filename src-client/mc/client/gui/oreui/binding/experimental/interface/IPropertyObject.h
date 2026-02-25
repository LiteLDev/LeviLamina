#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Experimental::Detail { class IProperty; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Experimental::Detail {

class IPropertyObject {
public:
    // IPropertyObject inner types define
    using NameType = char const*;

    using ListenerSignature = ::std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPropertyObject() = default;

    virtual char const* objectName() const = 0;

    virtual void addChild(::OreUI::Experimental::Detail::IPropertyObject*) = 0;

    virtual void addProperty(::OreUI::Experimental::Detail::IProperty*) = 0;

    virtual void removeChild(::OreUI::Experimental::Detail::IPropertyObject*) = 0;

    virtual void removeProperty(::OreUI::Experimental::Detail::IProperty*) = 0;

    virtual void bind(::cohtml::Binder*, void*) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(::std::function<void()> const&) = 0;

    virtual void updateParent(::OreUI::Experimental::Detail::IPropertyObject*) = 0;

    virtual void onChange() = 0;

    virtual ::std::vector<::OreUI::Experimental::Detail::IPropertyObject*> children() = 0;

    virtual ::std::vector<::OreUI::Experimental::Detail::IProperty*> properties() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
