#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ContentType.h"
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
class CompositePackSource;
struct PackContentItem;
struct PackIdVersion;
struct PackInstanceId;
// clang-format on

struct PackManagerContentSourceData {
public:
    // PackManagerContentSourceData inner types define
    using PackContentItemPtr = ::std::shared_ptr<::PackContentItem>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                   mPath;
    ::ll::TypedStorage<8, 8, ::ContentType>                                        mContentType;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CompositePackSource>>             mPackSource;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem>>> mPackContent;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackIdVersion>>                      mSelectedPacksCache;
    ::ll::TypedStorage<8, 24, ::std::vector<::PackInstanceId>>                     mCachedInstanceIds;
    ::ll::TypedStorage<1, 1, bool>                                                 mLoadedInstanceIds;
    // NOLINTEND

public:
    // prevent constructor by default
    PackManagerContentSourceData& operator=(PackManagerContentSourceData const&);
    PackManagerContentSourceData(PackManagerContentSourceData const&);
    PackManagerContentSourceData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackManagerContentSourceData(::PackManagerContentSourceData&&);

    MCAPI ~PackManagerContentSourceData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackManagerContentSourceData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
