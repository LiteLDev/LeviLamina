#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct ImageData;
struct MessageItemData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct MessageItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>           mId;
    ::ll::TypedStorage<8, 272, ::OreUI::MessageImage>  mImage;
    ::ll::TypedStorage<8, 136, ::OreUI::MessageButton> mButton;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageItem(
        ::MessageItemData const&                                   item,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>           client
    );

    MCAPI ~MessageItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MessageItemData const&                                   item,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>           client
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
