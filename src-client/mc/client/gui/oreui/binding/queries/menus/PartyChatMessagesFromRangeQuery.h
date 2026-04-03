#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ChatMessageObject; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class PartyChatMessagesFromRangeQuery : public ::OreUI::QueryBase<::OreUI::PartyChatMessagesFromRangeQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::ChatMessageObject, ::std::allocator<::OreUI::ChatMessageObject>>>
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
    MCAPI PartyChatMessagesFromRangeQuery(::OreUI::GameDependencies const& game, uint start, uint end);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, uint start, uint end);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
