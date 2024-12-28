#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct MembershipModel : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkb8f078;
    ::ll::UntypedStorage<8, 8>  mUnk8bde0c;
    ::ll::UntypedStorage<8, 32> mUnk9c2fd3;
    ::ll::UntypedStorage<8, 16> mUnk8e1ece;
    ::ll::UntypedStorage<8, 16> mUnk5013aa;
    // NOLINTEND

public:
    // prevent constructor by default
    MembershipModel& operator=(MembershipModel const&);
    MembershipModel(MembershipModel const&);
    MembershipModel();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MembershipModel() /*override*/;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::Json::Value ToJson() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $FromJson(::Json::Value&);

    MCAPI ::Json::Value $ToJson() const;
    // NOLINTEND
};

} // namespace PlayFab::ClientModels
