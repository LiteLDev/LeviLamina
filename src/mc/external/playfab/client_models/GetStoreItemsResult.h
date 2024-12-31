#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GetStoreItemsResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb431fd;
    ::ll::UntypedStorage<8, 96> mUnk83b753;
    ::ll::UntypedStorage<4, 8>  mUnk859d61;
    ::ll::UntypedStorage<8, 16> mUnkef2dd8;
    ::ll::UntypedStorage<8, 32> mUnk8df01d;
    // NOLINTEND

public:
    // prevent constructor by default
    GetStoreItemsResult& operator=(GetStoreItemsResult const&);
    GetStoreItemsResult(GetStoreItemsResult const&);
    GetStoreItemsResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetStoreItemsResult() /*override*/ = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace PlayFab::ClientModels
