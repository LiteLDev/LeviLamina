#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct SharedGroupDataRecord : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkda40e2;
    ::ll::UntypedStorage<8, 32> mUnkbee8bf;
    ::ll::UntypedStorage<4, 8>  mUnk8873f7;
    ::ll::UntypedStorage<8, 32> mUnk3e6634;
    // NOLINTEND

public:
    // prevent constructor by default
    SharedGroupDataRecord& operator=(SharedGroupDataRecord const&);
    SharedGroupDataRecord(SharedGroupDataRecord const&);
    SharedGroupDataRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SharedGroupDataRecord() /*override*/ = default;

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
