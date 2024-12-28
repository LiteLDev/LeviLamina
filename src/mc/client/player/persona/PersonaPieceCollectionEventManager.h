#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace persona {

class PersonaPieceCollectionEventManager {
public:
    // PersonaPieceCollectionEventManager inner types declare
    // clang-format off
    struct LoadingStats;
    // clang-format on

    // PersonaPieceCollectionEventManager inner types define
    struct LoadingStats {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnka55990;
        ::ll::UntypedStorage<8, 8>  mUnk77529d;
        ::ll::UntypedStorage<8, 8>  mUnk1f36e9;
        ::ll::UntypedStorage<4, 4>  mUnk46306b;
        ::ll::UntypedStorage<8, 24> mUnk9e502b;
        ::ll::UntypedStorage<1, 1>  mUnk47e3e5;
        // NOLINTEND

    public:
        // prevent constructor by default
        LoadingStats& operator=(LoadingStats const&);
        LoadingStats(LoadingStats const&);
        LoadingStats();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkcd9932;
    ::ll::UntypedStorage<8, 8>  mUnkb5921f;
    ::ll::UntypedStorage<8, 24> mUnk4110eb;
    ::ll::UntypedStorage<8, 8>  mUnk29a9f8;
    // NOLINTEND

public:
    // prevent constructor by default
    PersonaPieceCollectionEventManager& operator=(PersonaPieceCollectionEventManager const&);
    PersonaPieceCollectionEventManager(PersonaPieceCollectionEventManager const&);
    PersonaPieceCollectionEventManager();
};

} // namespace persona
