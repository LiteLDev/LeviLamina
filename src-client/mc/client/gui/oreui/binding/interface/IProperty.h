#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IPropertyObject; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {

class IProperty {
public:
    // IProperty inner types define
    using NameType = char const* const;

    using ListenerSignature = ::std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IProperty() = default;

    virtual char const* const name() const = 0;

    virtual void bind(::cohtml::Binder* binder, void* object) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(::std::function<void()> const& observer) = 0;

    virtual void updateParent(::OreUI::Detail::IPropertyObject* parent) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Detail
