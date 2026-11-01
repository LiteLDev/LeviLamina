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
    virtual ~ContentSource() = default;

    virtual void load();

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    virtual void save();

    virtual void saveAllPacks();

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $load();

    MCNAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    MCNAPI void $save();

    MCNAPI void $saveAllPacks();

    MCNAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCNAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND
};
