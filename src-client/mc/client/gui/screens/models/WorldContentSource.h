#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentSource.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class ILevelListCache;
struct ContentItem;
struct LevelSummary;
// clang-format on

struct WorldContentSource : public ::ContentSource {
public:
    // WorldContentSource inner types define
    using CanAccessWorldCallback = ::brstd::move_only_function<bool(::LevelSummary const&) const>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ILevelListCache*>             mLevelListCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelSummary>> mLevelSummaryList;
    ::ll::UntypedStorage<8, 64>
        mCanAccessWorld; // ::gsl::not_null<::brstd::move_only_function<bool(::LevelSummary const&) const>> const
    // NOLINTEND

public:
    // prevent constructor by default
    WorldContentSource();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldContentSource() /*override*/ = default;

    virtual void load() /*override*/;

    virtual void generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content) /*override*/;

    virtual void deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;

    virtual void postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WorldContentSource(
        ::ILevelListCache&                                               levelListCache,
        ::brstd::move_only_function<bool(::LevelSummary const&) const>&& canAccess
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::ILevelListCache&                                               levelListCache,
        ::brstd::move_only_function<bool(::LevelSummary const&) const>&& canAccess
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $load();

    MCAPI void $generateItems(::std::vector<::std::shared_ptr<::ContentItem>>& content);

    MCAPI void $deleteContentFiles(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);

    MCAPI void $postDeleteContent(::std::vector<::std::shared_ptr<::ContentItem const>> const& items);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
