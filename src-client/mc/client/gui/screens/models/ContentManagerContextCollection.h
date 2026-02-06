#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IContentManager;
class IContentManagerContext;
struct ContentItem;
// clang-format on

class ContentManagerContextCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::IContentManagerContext*>> mContexts;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::IContentManagerContext> createContext(
        ::std::weak_ptr<::IContentManager>                                   manager,
        ::std::function<bool(::std::shared_ptr<::ContentItem const> const&)> contextPredicate
    );

    MCAPI ~ContentManagerContextCollection();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
