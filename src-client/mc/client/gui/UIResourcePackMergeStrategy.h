#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/ResourcePackMergeStrategy.h"

// auto generated forward declare list
// clang-format off
class LoadedResourceData;
class PackReport;
namespace Json { class Value; }
// clang-format on

class UIResourcePackMergeStrategy : public ::ResourcePackMergeStrategy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string const>         mFileName;
    ::ll::TypedStorage<8, 8, ::Json::Value&>               mRoot;
    ::ll::TypedStorage<8, 8, ::std::vector<::PackReport>&> mPackReports;
    // NOLINTEND

public:
    // prevent constructor by default
    UIResourcePackMergeStrategy& operator=(UIResourcePackMergeStrategy const&);
    UIResourcePackMergeStrategy(UIResourcePackMergeStrategy const&);
    UIResourcePackMergeStrategy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void mergeFiles(::std::vector<::LoadedResourceData> const& fileStack) /*override*/;

    virtual ~UIResourcePackMergeStrategy() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $mergeFiles(::std::vector<::LoadedResourceData> const& fileStack);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
