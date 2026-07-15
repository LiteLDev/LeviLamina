#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/facets/vanilla/data/MessageImage.h"

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
    MessagePatchnote& operator=(MessagePatchnote const&);
    MessagePatchnote();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MessagePatchnote(::OreUI::MessagePatchnote const&);

    MCAPI ~MessagePatchnote();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::MessagePatchnote const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
