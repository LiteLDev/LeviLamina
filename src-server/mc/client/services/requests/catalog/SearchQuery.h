#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SearchQuery {
public:
    // SearchQuery inner types define
    enum class TagType : schar {
        And = 0,
        Or = 1,
        Not = 2,
        Sale = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf3342d;
    ::ll::UntypedStorage<8, 24> mUnkef8060;
    ::ll::UntypedStorage<8, 32> mUnk856fe1;
    ::ll::UntypedStorage<8, 32> mUnkc9d495;
    ::ll::UntypedStorage<8, 32> mUnk875fb4;
    ::ll::UntypedStorage<8, 32> mUnka81e35;
    ::ll::UntypedStorage<8, 32> mUnk346f11;
    ::ll::UntypedStorage<8, 24> mUnk2c9f8e;
    ::ll::UntypedStorage<8, 24> mUnk762ca6;
    ::ll::UntypedStorage<8, 24> mUnk35d297;
    ::ll::UntypedStorage<8, 24> mUnk39661e;
    ::ll::UntypedStorage<8, 24> mUnk9ec8c4;
    ::ll::UntypedStorage<8, 24> mUnk6b1095;
    ::ll::UntypedStorage<8, 24> mUnk80876c;
    ::ll::UntypedStorage<8, 24> mUnk64bd6f;
    ::ll::UntypedStorage<8, 24> mUnk4705db;
    ::ll::UntypedStorage<8, 24> mUnkaca05e;
    ::ll::UntypedStorage<8, 24> mUnkf777c3;
    ::ll::UntypedStorage<8, 24> mUnk62afa1;
    ::ll::UntypedStorage<8, 24> mUnkc14acd;
    ::ll::UntypedStorage<8, 24> mUnkb9f971;
    ::ll::UntypedStorage<4, 8> mUnkbd2672;
    ::ll::UntypedStorage<4, 8> mUnkfcf2e3;
    ::ll::UntypedStorage<4, 4> mUnk61d9d8;
    ::ll::UntypedStorage<4, 4> mUnk609839;
    ::ll::UntypedStorage<1, 1> mUnkc1236e;
    ::ll::UntypedStorage<8, 32> mUnked7b0d;
    ::ll::UntypedStorage<1, 1> mUnk11365b;
    ::ll::UntypedStorage<1, 1> mUnk1ea95a;
    ::ll::UntypedStorage<1, 1> mUnk452638;
    ::ll::UntypedStorage<1, 1> mUnk43c6db;
    ::ll::UntypedStorage<1, 1> mUnk8a03d7;
    // NOLINTEND

public:
    // prevent constructor by default
    SearchQuery& operator=(SearchQuery const&);
    SearchQuery(SearchQuery const&);
    SearchQuery();

};
