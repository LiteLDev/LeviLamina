#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSourceType.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
// clang-format on

struct ContentSource {
public:
    // ContentSource inner types define
    using ConstContentItemPtr = ::std::shared_ptr<::ContentItem const>;

    using ContentItemPtr = ::std::shared_ptr<::ContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ContentItem>>> mLoadedItems;
    ::ll::TypedStorage<4, 4, ::ContentSourceType>                              mType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ContentSource();

    virtual void load();

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>&);

    virtual void save();

    virtual void saveAllPacks();

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $load();

    MCFOLD void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>&);

    MCFOLD void $save();

    MCFOLD void $saveAllPacks();

    MCFOLD void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCFOLD void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
