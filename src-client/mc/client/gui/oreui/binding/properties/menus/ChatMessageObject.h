#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/RedactableStringProperty.h"
#include "mc/social/ChatMessageType.h"

namespace OreUI {

class ChatMessageObject : public ::OreUI::PropertyObject<::OreUI::ChatMessageObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>             mId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint>>                      mOrder;
    ::ll::TypedStorage<8, 312, ::OreUI::RedactableStringProperty>            mMessage;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>             mSenderXuid;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Social::ChatMessageType>> mType;
    // NOLINTEND
};

} // namespace OreUI
