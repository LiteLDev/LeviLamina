#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sidebar {

struct NavigationOptionDocument : public ::std::enable_shared_from_this<::sidebar::NavigationOptionDocument> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnkaf24ac;
    ::ll::UntypedStorage<8, 32>  mUnkf5b29d;
    ::ll::UntypedStorage<8, 32>  mUnka65a44;
    ::ll::UntypedStorage<8, 32>  mUnk3df38f;
    ::ll::UntypedStorage<8, 368> mUnk943a11;
    ::ll::UntypedStorage<4, 4>   mUnkc971e9;
    ::ll::UntypedStorage<4, 4>   mUnkfc05fa;
    ::ll::UntypedStorage<8, 24>  mUnk8fdac5;
    ::ll::UntypedStorage<8, 16>  mUnk51b770;
    ::ll::UntypedStorage<1, 1>   mUnk61e584;
    ::ll::UntypedStorage<1, 1>   mUnk92d926;
    ::ll::UntypedStorage<8, 56>  mUnk3d0a02;
    ::ll::UntypedStorage<8, 16>  mUnk2d8d18;
    // NOLINTEND

public:
    // prevent constructor by default
    NavigationOptionDocument& operator=(NavigationOptionDocument const&);
    NavigationOptionDocument(NavigationOptionDocument const&);
    NavigationOptionDocument();
};

} // namespace sidebar
