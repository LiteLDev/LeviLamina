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
    ::ll::UntypedStorage<8, 32> mUnk652030;
    ::ll::UntypedStorage<8, 40> mUnkd36fc2;
    ::ll::UntypedStorage<8, 40> mUnk48af3a;
    ::ll::UntypedStorage<8, 32> mUnk621f2a;
    ::ll::UntypedStorage<8, 32> mUnk656ee8;
    ::ll::UntypedStorage<8, 40> mUnk38d2eb;
    // NOLINTEND

public:
    // prevent constructor by default
    PageContent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PageContent(::PageContent&&);

    MCNAPI PageContent(::PageContent const&);

    MCNAPI PageContent(::std::string nText, ::std::optional<::std::string> nFilteredText);

    MCNAPI ::PageContent& operator=(::PageContent&&);

    MCNAPI ::PageContent& operator=(::PageContent const&);

    MCNAPI ~PageContent();
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
    MCNAPI void* $ctor(::PageContent&&);

    MCNAPI void* $ctor(::PageContent const&);

    MCNAPI void* $ctor(::std::string nText, ::std::optional<::std::string> nFilteredText);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
