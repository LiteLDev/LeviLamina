#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Experimental::Detail { class Binder; }
namespace OreUI::Experimental::Detail { class IdType; }
// clang-format on

namespace OreUI::Experimental::Detail {

class IQuery {
public:
    // IQuery inner types define
    using NameType = char const*;

    using ListenerSignature = ::std::function<void()>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IQuery() = default;

    virtual void update(double timestampMs) = 0;

    virtual bool isValid() const = 0;

    virtual char const* name() const = 0;

    virtual void triggerCreated(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::Detail::Binder const&
    ) const = 0;

    virtual void triggerUpdated(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::Detail::Binder const&
    ) const = 0;

    virtual void destroy(::OreUI::Experimental::Detail::Binder const&) = 0;

    virtual ::Bedrock::PubSub::Subscription setObserver(::std::function<void()> const&) = 0;
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

} // namespace OreUI::Experimental::Detail
