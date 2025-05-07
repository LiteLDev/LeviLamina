#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/models/ManifestContentItem.h"
#include "mc/client/gui/screens/models/PackListType.h"
#include "mc/client/gui/screens/models/PackReportState.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/SubpackInfoCollection.h"

// auto generated forward declare list
// clang-format off
class PackSettings;
// clang-format on

struct PackContentItem : public ::ManifestContentItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::PackListType>                                       mListType;
    ::ll::TypedStorage<8, 256, ::PackReport>                                       mPackReport;
    ::ll::TypedStorage<8, 256, ::PackReport>                                       mLoadingReport;
    ::ll::TypedStorage<8, 32, ::std::string>                                       mDateAvailable;
    ::ll::TypedStorage<8, 8, uint64>                                               mPosition;
    ::ll::TypedStorage<4, 4, int>                                                  mSubpackIndex;
    ::ll::TypedStorage<1, 1, ::PackReportState>                                    mReportState;
    ::ll::TypedStorage<8, 24, ::SubpackInfoCollection>                             mSubpackInfo;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                                      mPackSettings;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem>>> mDependencies;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PackContentItem>>> mDependentContent;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PackContentItem() /*override*/ = default;
    // NOLINTEND
};
