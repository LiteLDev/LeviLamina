#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct UserDataRecord : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk9840c8;
    ::ll::UntypedStorage<4, 8>  mUnk96e26a;
    ::ll::UntypedStorage<8, 32> mUnk77c13c;
    // NOLINTEND

public:
    // prevent constructor by default
    UserDataRecord& operator=(UserDataRecord const&);
    UserDataRecord(UserDataRecord const&);
    UserDataRecord();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UserDataRecord() /*override*/ = default;

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
