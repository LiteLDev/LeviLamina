#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Detail { class IdType; }
// clang-format on

namespace OreUI::Detail {

class IInvocationStateTracker {
public:
    // IInvocationStateTracker inner types declare
    // clang-format off
    struct InvocationInformation;
    // clang-format on

    // IInvocationStateTracker inner types define
    struct InvocationInformation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::OreUI::InvocationState>  mState;
        ::ll::TypedStorage<1, 1, ::OreUI::InvocationResult> mResult;
        ::ll::TypedStorage<1, 1, uchar>                     mProgress;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      mError;
        // NOLINTEND
    };

    using OnChange =
        void(::OreUI::Detail::IdType const&, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&);

    using OnRemoved = void(::OreUI::Detail::IdType const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInvocationStateTracker() = default;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::OreUI::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                             observer
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription
    onRemove(::OreUI::Detail::IdType const& id, ::std::function<void(::OreUI::Detail::IdType const&)> observer) = 0;

    virtual void setState(
        ::OreUI::Detail::IdType const&                                         id,
        ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const& information
    ) = 0;

    virtual void setState(
        ::OreUI::Detail::IdType const& id,
        ::OreUI::InvocationState       state,
        ::OreUI::InvocationResult      result,
        uchar                          progress,
        ::std::optional<int>           error
    ) = 0;

    virtual void remove(::OreUI::Detail::IdType const& id) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Detail
