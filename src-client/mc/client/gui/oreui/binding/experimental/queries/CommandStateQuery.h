#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/experimental/interface/InvocationState.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental::Detail { class IdType; }
namespace OreUI::Experimental::Detail { class InvocationStateTracker; }
// clang-format on

namespace OreUI::Experimental {

class CommandStateQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::CommandStateQuery> {
public:
    // CommandStateQuery inner types define
    using Base = ::OreUI::Experimental::QueryBase<::OreUI::Experimental::CommandStateQuery>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                           mChangeToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                                           mRemoveToken;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::OreUI::Experimental::InvocationState>>  mState;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::OreUI::Experimental::InvocationResult>> mResult;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<uchar>>                                   mProgress;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::std::optional<int>>>                    mError;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandStateQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CommandStateQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandStateQuery(
        ::OreUI::Experimental::Detail::InvocationStateTracker& tracker,
        ::OreUI::Experimental::Detail::IdType const&           id
    );

    MCAPI void _removed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Experimental::Detail::InvocationStateTracker& tracker,
        ::OreUI::Experimental::Detail::IdType const&           id
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
