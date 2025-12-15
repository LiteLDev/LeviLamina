#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontRepository;
// clang-format on

class FontHandle : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3fcb3f;
    ::ll::UntypedStorage<8, 16> mUnkf66de2;
    ::ll::UntypedStorage<8, 8>  mUnkecb455;
    ::ll::UntypedStorage<1, 1>  mUnkdb62a3;
    // NOLINTEND

public:
    // prevent constructor by default
    FontHandle();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontHandle() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FontHandle(::FontHandle const&);

    MCNAPI FontHandle(::FontHandle defaultFont, ::std::string const& newFontAlias);

    MCNAPI FontHandle(
        ::std::shared_ptr<::Font>                       defaultFont,
        uint64                                          fontId,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository> fontRepository
    );

    MCNAPI ::FontHandle& operator=(::FontHandle const&);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::FontHandle& INVALID_FONT_HANDLE();

    MCNAPI static ::FontHandle& TEST_FONT_HANDLE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::FontHandle const&);

    MCNAPI void* $ctor(::FontHandle defaultFont, ::std::string const& newFontAlias);

    MCNAPI void* $ctor(
        ::std::shared_ptr<::Font>                       defaultFont,
        uint64                                          fontId,
        ::Bedrock::NotNullNonOwnerPtr<::FontRepository> fontRepository
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
