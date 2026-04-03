#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/interface/InvocationResult.h"
#include "mc/client/gui/oreui/binding/interface/InvocationState.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IdType; }
namespace OreUI::Detail { class InvocationStateTracker; }
// clang-format on

namespace OreUI {

class CommandStateQuery : public ::OreUI::QueryBase<::OreUI::CommandStateQuery> {
public:
    // CommandStateQuery inner types define
    using Base = ::OreUI::QueryBase<::OreUI::CommandStateQuery>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::InvocationState>>  mState;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::InvocationResult>> mResult;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uchar>>                     mProgress;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<int>>>      mError;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mChangeToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mRemoveToken;
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
    MCAPI CommandStateQuery(::OreUI::Detail::InvocationStateTracker& tracker, ::OreUI::Detail::IdType const& id);

    MCAPI void _removed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Detail::InvocationStateTracker& tracker, ::OreUI::Detail::IdType const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
