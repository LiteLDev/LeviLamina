#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentItemCollectionVersion.h"
#include "mc/client/gui/screens/models/IVersionedContentItemCollection.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
struct ContentItem;
// clang-format on

class ReadOnlyContentItemCollection : public ::IVersionedContentItemCollection {
public:
    // ReadOnlyContentItemCollection inner types define
    using ForEach = ::brstd::move_only_function<bool(::gsl::not_null<::std::shared_ptr<::ContentItem const>> const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ContentItemCollectionVersion>                                          mVersion;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>> mItems;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void appendLatest(
        ::ContentItemCollectionVersion&,
        ::std::vector<::gsl::not_null<::std::shared_ptr<::ContentItem const>>>&
    ) const /*override*/;

    virtual ::ContentItemCollectionVersion getVersion() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
