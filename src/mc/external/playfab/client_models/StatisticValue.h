#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct StatisticValue : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk55c162;
    ::ll::UntypedStorage<4, 4>  mUnka8823e;
    ::ll::UntypedStorage<4, 4>  mUnke616ee;
    // NOLINTEND

public:
    // prevent constructor by default
    StatisticValue& operator=(StatisticValue const&);
    StatisticValue(StatisticValue const&);
    StatisticValue();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StatisticValue() /*override*/ = default;

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
