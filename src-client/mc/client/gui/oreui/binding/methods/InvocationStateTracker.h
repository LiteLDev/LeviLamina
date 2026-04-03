#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/IdType.h"
#include "mc/client/gui/oreui/binding/interface/IInvocationStateTracker.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"
#include "mc/deps/core/utility/pub_sub/Publisher.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::PubSub { class Subscription; }
namespace Bedrock::PubSub::ThreadModel { struct SingleThreaded; }
// clang-format on

namespace OreUI::Detail {

class InvocationStateTracker : public ::OreUI::Detail::IInvocationStateTracker {
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
        ::ll::TypedStorage<4, 12, ::OreUI::Detail::IInvocationStateTracker::InvocationInformation> mInformation;
        ::ll::TypedStorage<
            8,
            48,
            ::Bedrock::PubSub::Publisher<
                void(
                    ::OreUI::Detail::IdType const&,
                    ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
                ),
                ::Bedrock::PubSub::ThreadModel::SingleThreaded,
                0>>
            mOnChangePublisher;
        ::ll::TypedStorage<
            8,
            48,
            ::Bedrock::PubSub::
                Publisher<void(::OreUI::Detail::IdType const&), ::Bedrock::PubSub::ThreadModel::SingleThreaded, 0>>
            mOnRemovedPublisher;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<::OreUI::Detail::IdType, ::OreUI::Detail::InvocationStateTracker::InvocationData>>
        mStates;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InvocationStateTracker() /*override*/ = default;

    virtual ::Bedrock::PubSub::Subscription onChange(
        ::OreUI::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                             observer
    ) /*override*/;

    virtual ::Bedrock::PubSub::Subscription onRemove(
        ::OreUI::Detail::IdType const&                        id,
        ::std::function<void(::OreUI::Detail::IdType const&)> observer
    ) /*override*/;

    virtual void setState(
        ::OreUI::Detail::IdType const&                                         id,
        ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const& information
    ) /*override*/;

    virtual void setState(
        ::OreUI::Detail::IdType const& id,
        ::OreUI::InvocationState       state,
        ::OreUI::InvocationResult      result,
        uchar                          progress,
        ::std::optional<int>           error
    ) /*override*/;

    virtual void remove(::OreUI::Detail::IdType const& id) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Bedrock::PubSub::Subscription $onChange(
        ::OreUI::Detail::IdType const& id,
        ::std::function<void(
            ::OreUI::Detail::IdType const&,
            ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const&
        )>                             observer
    );

    MCAPI ::Bedrock::PubSub::Subscription
    $onRemove(::OreUI::Detail::IdType const& id, ::std::function<void(::OreUI::Detail::IdType const&)> observer);

    MCAPI void $setState(
        ::OreUI::Detail::IdType const&                                         id,
        ::OreUI::Detail::IInvocationStateTracker::InvocationInformation const& information
    );

    MCAPI void $setState(
        ::OreUI::Detail::IdType const& id,
        ::OreUI::InvocationState       state,
        ::OreUI::InvocationResult      result,
        uchar                          progress,
        ::std::optional<int>           error
    );

    MCAPI void $remove(::OreUI::Detail::IdType const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Detail
