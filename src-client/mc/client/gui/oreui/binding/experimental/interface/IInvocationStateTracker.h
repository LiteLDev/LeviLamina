#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationState.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace OreUI::Experimental::Detail { class IdType; }
// clang-format on

namespace OreUI::Experimental::Detail {

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
        ::ll::TypedStorage<1, 1, ::OreUI::Experimental::InvocationState>  mState;
        ::ll::TypedStorage<1, 1, ::OreUI::Experimental::InvocationResult> mResult;
        ::ll::TypedStorage<1, 1, uchar>                                   mProgress;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                    mError;
        // NOLINTEND
    };

    using OnChange = void(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
    );

    using OnRemoved = void(::OreUI::Experimental::Detail::IdType const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IInvocationStateTracker() = default;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::OreUI::Experimental::Detail::IdType const&,
        ::std::function<void(
            ::OreUI::Experimental::Detail::IdType const&,
            ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
        )>
    ) = 0;

    virtual ::Bedrock::PubSub::Subscription onRemove(
        ::OreUI::Experimental::Detail::IdType const&,
        ::std::function<void(::OreUI::Experimental::Detail::IdType const&)>
    ) = 0;

    virtual void setState(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
    ) = 0;

    virtual void setState(
        ::OreUI::Experimental::Detail::IdType const&,
        ::OreUI::Experimental::InvocationState,
        ::OreUI::Experimental::InvocationResult,
        uchar,
        ::std::optional<int>
    ) = 0;

    virtual void remove(::OreUI::Experimental::Detail::IdType const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
