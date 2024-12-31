#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct GrantCharacterToUserResult : public ::PlayFab::PlayFabResultCommon {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf1a38c;
    ::ll::UntypedStorage<8, 32> mUnk86b6a7;
    ::ll::UntypedStorage<1, 1>  mUnkbf35a1;
    // NOLINTEND

public:
    // prevent constructor by default
    GrantCharacterToUserResult& operator=(GrantCharacterToUserResult const&);
    GrantCharacterToUserResult(GrantCharacterToUserResult const&);
    GrantCharacterToUserResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GrantCharacterToUserResult() /*override*/ = default;

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
