#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct CollectionFilter : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkce4454;
    ::ll::UntypedStorage<8, 16> mUnk9c4000;
    // NOLINTEND

public:
    // prevent constructor by default
    CollectionFilter& operator=(CollectionFilter const&);
    CollectionFilter(CollectionFilter const&);
    CollectionFilter();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CollectionFilter() /*override*/ = default;

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
