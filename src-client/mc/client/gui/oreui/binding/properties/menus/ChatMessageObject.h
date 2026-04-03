#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyObject.h"
#include "mc/social/ChatMessageType.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Detail { class IPropertyObject; }
// clang-format on

namespace OreUI {

class ChatMessageObject : public ::OreUI::PropertyObject<::OreUI::ChatMessageObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>             mId;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<uint>>                      mOrder;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>             mMessage;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>             mSenderXuid;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::Social::ChatMessageType>> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    ChatMessageObject();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ChatMessageObject() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChatMessageObject(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string                     id,
        uint                              order,
        ::std::string                     content,
        ::std::string                     senderXuid,
        ::Social::ChatMessageType         type
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::OreUI::Detail::IPropertyObject* parent,
        ::std::string                     id,
        uint                              order,
        ::std::string                     content,
        ::std::string                     senderXuid,
        ::Social::ChatMessageType         type
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
