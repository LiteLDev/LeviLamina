#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IProperty; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {

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

    virtual char const* propertyName() const = 0;

    virtual void addChild(::OreUI::Detail::IPropertyObject* child) = 0;

    virtual void addProperty(::OreUI::Detail::IProperty* property) = 0;

    virtual void removeChild(::OreUI::Detail::IPropertyObject* child) = 0;

    virtual void removeProperty(::OreUI::Detail::IProperty* property) = 0;

    virtual bool hasParent() const = 0;

    virtual void bind(::cohtml::Binder* binder, void* object) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(::std::function<void()> const& observer) = 0;

    virtual void updateParent(::OreUI::Detail::IPropertyObject* parent) = 0;

    virtual void onChange() = 0;

    virtual ::std::vector<::OreUI::Detail::IPropertyObject*> children() = 0;

    virtual ::std::vector<::OreUI::Detail::IProperty*> properties() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Detail
