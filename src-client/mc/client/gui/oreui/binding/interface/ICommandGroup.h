#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class ICallable; }
namespace OreUI::Detail { class IdType; }
namespace cohtml { class Binder; }
// clang-format on

namespace OreUI::Detail {

class ICommandGroup {
public:
    // ICommandGroup inner types define
    using NameType = char const* const;

    using OnChange =
        void(::OreUI::Detail::IdType const&, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&);

    using OnRemoved = void(::OreUI::Detail::IdType const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ICommandGroup() = default;

    virtual char const* const name() const = 0;

    virtual void addCallable(::OreUI::Detail::ICallable* callable) = 0;

    virtual void removeCallable(::OreUI::Detail::ICallable* callable) = 0;

    virtual void setState(
        ::OreUI::Detail::IdType const&  id,
        ::OreUI::InvocationState const  state,
        ::OreUI::InvocationResult const result,
        uchar const                     progress,
        ::std::optional<int> const      error
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )> const& observer
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
    onRemove(::std::function<void(::OreUI::Detail::IdType const&)> const& observer) = 0;

    virtual void expose(::cohtml::Binder* binder, void* object) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Detail
