#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/client/gui/oreui/binding/properties/RedactableStringProperty.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/social/ChatMessageType.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace Bedrock::Safety { class RedactableString; }
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

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

public:
    // prevent constructor by default
    ChatMessageObject& operator=(ChatMessageObject const&);
    ChatMessageObject(ChatMessageObject const&);
    ChatMessageObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatMessageObject(::OreUI::ChatMessageObject&&);

    MCAPI ChatMessageObject(
        ::OreUI::Detail::IPropertyObject*                 parent,
        ::std::string                                     id,
        uint                                              order,
        ::Bedrock::Safety::RedactableString               content,
        ::std::string                                     senderXuid,
        ::Social::ChatMessageType                         type,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> profanityContext
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ChatMessageObject&&);

    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject*                 parent,
        ::std::string                                     id,
        uint                                              order,
        ::Bedrock::Safety::RedactableString               content,
        ::std::string                                     senderXuid,
        ::Social::ChatMessageType                         type,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> profanityContext
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
