#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyObject.h"

namespace OreUI::Experimental {

class ChatMessageObject : public ::OreUI::Experimental::PropertyObject<::OreUI::Experimental::ChatMessageObject> {
public:
    // ChatMessageObject inner types define
    enum class ChatMessageType : uint {
        Status = 0,
        Party  = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mId;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mMessage;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mSenderXuid;
    ::ll::
        TypedStorage<8, 176, ::OreUI::Experimental::Property<::OreUI::Experimental::ChatMessageObject::ChatMessageType>>
            mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatMessageObject() /*override*/ = default;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI::Experimental
