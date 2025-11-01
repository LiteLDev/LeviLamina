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
        Text = 0,
        Photo = 1,
        Count = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredText;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mParsedFilteredText;
    ::ll::TypedStorage<8, 32, ::std::string> mParsedText;
    ::ll::TypedStorage<8, 32, ::std::string> mPhotoName;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mFilteredPhotoName;
    // NOLINTEND

public:
    // prevent constructor by default
    PageContent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PageContent(::PageContent const&);

    MCAPI PageContent(::PageContent&&);

    MCAPI PageContent(::std::string nText, ::std::optional<::std::string> nFilteredText);

    MCAPI ::PageContent& operator=(::PageContent&&);

    MCAPI ::PageContent& operator=(::PageContent const&);

    MCAPI ~PageContent();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::PageContent read(::CompoundTag const& tag);

    MCAPI static void write(::PageContent const& page, ::CompoundTag& tag);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::PageContent const& BLANK_PAGE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PageContent const&);

    MCAPI void* $ctor(::PageContent&&);

    MCAPI void* $ctor(::std::string nText, ::std::optional<::std::string> nFilteredText);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
