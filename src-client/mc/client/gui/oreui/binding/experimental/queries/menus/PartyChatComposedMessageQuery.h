#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"

namespace OreUI::Experimental {

class PartyChatComposedMessageQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::PartyChatComposedMessageQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mComposedMessage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatComposedMessageQuery() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
