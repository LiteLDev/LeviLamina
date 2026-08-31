#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

namespace OreUI {

class DataStoreQueryBool : public ::OreUI::QueryBase<::OreUI::DataStoreQueryBool> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mScreenAPISubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>> mValue;
    // NOLINTEND
};

} // namespace OreUI
