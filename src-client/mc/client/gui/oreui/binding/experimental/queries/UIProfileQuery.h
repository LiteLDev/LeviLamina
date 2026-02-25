#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/options/UIProfile.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class UIProfileQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::UIProfileQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>               mSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::UIProfile>> mUIProfile;
    // NOLINTEND

public:
    // prevent constructor by default
    UIProfileQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIProfileQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit UIProfileQuery(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
