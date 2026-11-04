#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

struct PageContent {
public:
    // PageContent inner types define
    enum class PageType : uchar {
        Text  = 0,
        Photo = 1,
        Count = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mParsedFilteredText;
    ::ll::TypedStorage<8, 32, ::std::string>                  mParsedText;
    ::ll::TypedStorage<8, 32, ::std::string>                  mPhotoName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredPhotoName;
    // NOLINTEND

public:
    // prevent constructor by default
    PageContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PageContent(::PageContent const&);

    MCAPI PageContent(::std::string nText, ::std::optional<::std::string> nFilteredText);

    MCNAPI ::std::unique_ptr<::CompoundTag> createTag() const;

#ifdef LL_PLAT_C
    MCNAPI ::PageContent& operator=(::PageContent&&);
#endif

    MCNAPI ::PageContent& operator=(::PageContent const&);

    MCAPI ~PageContent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::PageContent read(::CompoundTag const& tag);

    MCNAPI static void write(::PageContent const& page, ::CompoundTag& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::PageContent const& BLANK_PAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PageContent const&);

    MCAPI void* $ctor(::std::string nText, ::std::optional<::std::string> nFilteredText);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
