#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Clubs {

struct FeedItem {
public:
    // FeedItem inner types define
    enum class Type : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnkdbf4e2;
    ::ll::UntypedStorage<8, 32>  mUnkfd56e9;
    ::ll::UntypedStorage<8, 32>  mUnk11c89b;
    ::ll::UntypedStorage<8, 32>  mUnk16f0e4;
    ::ll::UntypedStorage<8, 32>  mUnk10299f;
    ::ll::UntypedStorage<8, 32>  mUnkbf1773;
    ::ll::UntypedStorage<8, 32>  mUnk169ec9;
    ::ll::UntypedStorage<4, 4>   mUnka685c3;
    ::ll::UntypedStorage<4, 4>   mUnkdf14ef;
    ::ll::UntypedStorage<1, 1>   mUnkb3c1b2;
    ::ll::UntypedStorage<1, 1>   mUnk4fe09b;
    ::ll::UntypedStorage<1, 1>   mUnk110744;
    ::ll::UntypedStorage<1, 1>   mUnkcc56f7;
    ::ll::UntypedStorage<8, 8>   mUnk91339a;
    ::ll::UntypedStorage<8, 32>  mUnkbd3f2c;
    ::ll::UntypedStorage<8, 168> mUnkf0db01;
    // NOLINTEND

public:
    // prevent constructor by default
    FeedItem();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeedItem(::Clubs::FeedItem const&);

    MCNAPI FeedItem(::Clubs::FeedItem&&);

    MCNAPI ::std::string getFeedEntityPath() const;

    MCNAPI ::Clubs::FeedItem& operator=(::Clubs::FeedItem const&);

    MCNAPI ::Clubs::FeedItem& operator=(::Clubs::FeedItem&&);

    MCNAPI ~FeedItem();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Clubs::FeedItem const&);

    MCNAPI void* $ctor(::Clubs::FeedItem&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Clubs
