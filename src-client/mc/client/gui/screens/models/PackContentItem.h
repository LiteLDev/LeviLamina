#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/client/gui/screens/models/PackReportState.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class PackSettingsFactory;
struct ContentSource;
struct PackContentItemListPosition;
// clang-format on

struct PackContentItem : public ::ManifestContentItem {
public:
    // PackContentItem inner types declare
    // clang-format off
    struct PositionSort;
    // clang-format on

    // PackContentItem inner types define
    struct PositionSort {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 248, ::PackReport>                                                    mPackReport;
    ::ll::TypedStorage<8, 248, ::PackReport>                                                    mLoadingReport;
    ::ll::TypedStorage<8, 32, ::std::string>                                                    mDateAvailable;
    ::ll::TypedStorage<1, 1, ::PackReportState>                                                 mReportState;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>                                          mSubpackInfo;
    ::ll::TypedStorage<8, 8, ::PackSettingsFactory*>                                            mPackSettingsFactory;
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                                   mWorldId;
    ::ll::TypedStorage<8, 40, ::std::optional<::Core::PathBuffer<::std::string>>>               mWorldPath;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::PackContentItemListPosition>>> mListPosition;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::PackContentItem const>>>          mDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::weak_ptr<::PackContentItem const>>>          mDependentContent;
    // NOLINTEND

public:
    // prevent constructor by default
    PackContentItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~PackContentItem() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackContentItem(::ContentSource* src);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ContentSource* src);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
