#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StatisticNameVersion : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4bd265;
    ::ll::UntypedStorage<4, 4>  mUnkaa8863;
    // NOLINTEND

public:
    // prevent constructor by default
    StatisticNameVersion& operator=(StatisticNameVersion const&);
    StatisticNameVersion(StatisticNameVersion const&);
    StatisticNameVersion();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StatisticNameVersion() /*override*/ = default;

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
