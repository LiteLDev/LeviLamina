#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab {

struct PlayFabBaseModel {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PlayFabBaseModel() = default;

    // vIndex: 1
    virtual void FromJson(::Json::Value&) = 0;

    // vIndex: 2
    virtual ::Json::Value ToJson() const = 0;
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

} // namespace PlayFab
