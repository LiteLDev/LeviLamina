#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabResultCommon.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct AddSharedGroupMembersResult : public ::PlayFab::PlayFabResultCommon {
public:
    // prevent constructor by default
    AddSharedGroupMembersResult& operator=(AddSharedGroupMembersResult const&);
    AddSharedGroupMembersResult(AddSharedGroupMembersResult const&);
    AddSharedGroupMembersResult();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddSharedGroupMembersResult() /*override*/ = default;

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
