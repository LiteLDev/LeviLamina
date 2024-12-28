#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/playfab/PlayFabBaseModel.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace PlayFab::ClientModels {

struct TitleNewsItem : public ::PlayFab::PlayFabBaseModel {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk78bb44;
    ::ll::UntypedStorage<8, 32> mUnkf2f8b0;
    ::ll::UntypedStorage<8, 8>  mUnk7d555c;
    ::ll::UntypedStorage<8, 32> mUnk27a42e;
    // NOLINTEND

public:
    // prevent constructor by default
    TitleNewsItem& operator=(TitleNewsItem const&);
    TitleNewsItem(TitleNewsItem const&);
    TitleNewsItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TitleNewsItem() /*override*/;

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
