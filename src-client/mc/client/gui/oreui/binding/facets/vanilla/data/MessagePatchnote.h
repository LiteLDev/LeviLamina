#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ImageData;
struct MessagePatchnoteData;
namespace OreUI { class IResourceAllowList; }
// clang-format on

namespace OreUI {

struct MessagePatchnote {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          mTitle;
    ::ll::TypedStorage<8, 32, ::std::string>          mBody;
    ::ll::TypedStorage<8, 272, ::OreUI::MessageImage> mImage;
    // NOLINTEND

public:
    // prevent constructor by default
    MessagePatchnote();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessagePatchnote(
        ::MessagePatchnoteData const&                              item,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ~MessagePatchnote();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::MessagePatchnoteData const&                              item,
        ::std::function<::ImageData(::std::string)>                imageLookup,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
