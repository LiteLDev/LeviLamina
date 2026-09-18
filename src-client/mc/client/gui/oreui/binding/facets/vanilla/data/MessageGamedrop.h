#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageButton.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ButtonData;
struct ImageData;
struct MessageGamedropData;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct MessagePatchnote; }
// clang-format on

namespace OreUI {

struct MessageGamedrop {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::MessagePatchnote>> mPatchnotes;
    ::ll::TypedStorage<8, 136, ::OreUI::MessageButton>                  mFooterButton;
    ::ll::TypedStorage<8, 32, ::std::string>                            mFooterTitle;
    ::ll::TypedStorage<8, 32, ::std::string>                            mFooterBody;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageGamedrop();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessageGamedrop(
        ::MessageGamedropData const&                               item,
        ::std::function<::ButtonData(::std::string)>               buttonLookup,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MessageGamedropData const&                               item,
        ::std::function<::ButtonData(::std::string)>               buttonLookup,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND
};

} // namespace OreUI
