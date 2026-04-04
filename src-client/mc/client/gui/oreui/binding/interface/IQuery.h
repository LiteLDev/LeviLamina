#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class Binder; }
namespace OreUI::Detail { class IdType; }
// clang-format on

namespace OreUI::Detail {

class IQuery {
public:
    // IQuery inner types define
    using NameType = char const*;

    using ListenerSignature = ::std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IQuery() = default;

    virtual void update(double time) = 0;

    virtual bool isValid() const = 0;

    virtual char const* name() const = 0;

    virtual void triggerCreated(::OreUI::Detail::IdType const& id, ::OreUI::Detail::Binder const& binder) const = 0;

    virtual void triggerUpdated(::OreUI::Detail::IdType const& id, ::OreUI::Detail::Binder const& binder) const = 0;

    virtual void destroy(::OreUI::Detail::Binder const& binder) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(::std::function<void()> const& observer) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Detail
