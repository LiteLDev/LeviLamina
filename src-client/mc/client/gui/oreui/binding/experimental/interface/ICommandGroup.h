#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Experimental::Detail { class ICallable; }
namespace OreUI::Experimental::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Experimental::Detail {

class ICommandGroup {
public:
    // ICommandGroup inner types define
    using NameType = char const* const;

    using OnChange = void(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
    );

    using OnRemoved = void(::OreUI::Experimental::Detail::IdType const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICommandGroup() = default;

    virtual char const* const name() const = 0;

    virtual void addCallable(::OreUI::Experimental::Detail::ICallable*) = 0;

    virtual void removeCallable(::OreUI::Experimental::Detail::ICallable*) = 0;

    virtual void setState(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::InvocationState const,
        ::OreUI::Experimental::InvocationResult const,
        uchar const,
        ::std::optional<int> const
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::std::function<void(
            ::OreUI::Experimental::Detail::IdType const&,
            ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
        )> const&
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
    onRemove(::std::function<void(::OreUI::Experimental::Detail::IdType const&)> const&) = 0;

    virtual void expose(::cohtml::Binder*, void*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
