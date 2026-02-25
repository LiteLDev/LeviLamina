#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/experimental/properties/menus/ChatMessageObject.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class PartyChatMessagesFromRangeQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::PartyChatMessagesFromRangeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::ChatMessageObject,
            ::std::allocator<::OreUI::Experimental::ChatMessageObject>>>
        mMessages;
    // NOLINTEND

public:
    // prevent constructor by default
    PartyChatMessagesFromRangeQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PartyChatMessagesFromRangeQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PartyChatMessagesFromRangeQuery(::OreUI::Experimental::GameDependencies const& game, uint, uint);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::GameDependencies const& game, uint, uint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
