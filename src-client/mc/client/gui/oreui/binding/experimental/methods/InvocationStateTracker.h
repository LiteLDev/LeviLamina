#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
namespace OreUI::Experimental::Detail { class IdType; }
// clang-format on

namespace OreUI::Experimental::Detail {

class InvocationStateTracker : public ::OreUI::Experimental::Detail::IInvocationStateTracker {
public:
    // InvocationStateTracker inner types declare
    // clang-format off
    struct InvocationData;
    // clang-format on

    // InvocationStateTracker inner types define
    struct InvocationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 12, ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation>
            mInformation;
        ::ll::TypedStorage<
            8,
            48,
            ::Bedrock::PubSub::Publisher<
                void(
                    ::OreUI::Experimental::Detail::IdType const&,
                    ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
                ),
                ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                0>>
            mOnChangePublisher;
        ::ll::TypedStorage<
            8,
            48,
            ::Bedrock::PubSub::Publisher<
                void(::OreUI::Experimental::Detail::IdType const&),
                ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                0>>
            mOnRemovedPublisher;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::OreUI::Experimental::Detail::IdType,
            ::OreUI::Experimental::Detail::InvocationStateTracker::InvocationData>>
        mStates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvocationStateTracker() /*override*/ = default;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::OreUI::Experimental::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Experimental::Detail::IdType const&,
            ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                                           observer
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription onRemove(
        ::OreUI::Experimental::Detail::IdType const&                        id,
        ::std::function<void(::OreUI::Experimental::Detail::IdType const&)> observer
    ) /*override*/;

    virtual void setState(
        ::OreUI::Experimental::Detail::IdType const&                                         id,
        ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const& information
    ) /*override*/;

    virtual void setState(
        ::OreUI::Experimental::Detail::IdType const& id,
        ::OreUI::Experimental::InvocationState       state,
        ::OreUI::Experimental::InvocationResult      result,
        uchar                                        progress,
        ::std::optional<int>                         error
    ) /*override*/;

    virtual void remove(::OreUI::Experimental::Detail::IdType const& id) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription $onChange(
        ::OreUI::Experimental::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Experimental::Detail::IdType const&,
            ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                                           observer
    );

    MCAPI ::Bedrock::PubSub::Subscription $onRemove(
        ::OreUI::Experimental::Detail::IdType const&                        id,
        ::std::function<void(::OreUI::Experimental::Detail::IdType const&)> observer
    );

    MCAPI void $setState(
        ::OreUI::Experimental::Detail::IdType const&                                         id,
        ::OreUI::Experimental::Detail::IInvocationStateTracker::InvocationInformation const& information
    );

    MCAPI void $setState(
        ::OreUI::Experimental::Detail::IdType const& id,
        ::OreUI::Experimental::InvocationState       state,
        ::OreUI::Experimental::InvocationResult      result,
        uchar                                        progress,
        ::std::optional<int>                         error
    );

    MCAPI void $remove(::OreUI::Experimental::Detail::IdType const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Detail
