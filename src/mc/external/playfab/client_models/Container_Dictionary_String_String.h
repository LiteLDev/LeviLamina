#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct Container_Dictionary_String_String : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk3a1d43;
    // NOLINTEND

public:
    // prevent constructor by default
    Container_Dictionary_String_String& operator=(Container_Dictionary_String_String const&);
    Container_Dictionary_String_String(Container_Dictionary_String_String const&);
    Container_Dictionary_String_String();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Container_Dictionary_String_String() /*override*/ = default;

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
