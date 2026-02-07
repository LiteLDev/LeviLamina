#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

class DynamicContentBindingInformation : public ::std::enable_shared_from_this<::DynamicContentBindingInformation> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Json::Value>                                        mData;
    ::ll::TypedStorage<8, 64, ::std::function<void(::Json::Value&)>>                mOnContentItemChangedCallback;
    ::ll::TypedStorage<8, 64, ::std::function<::std::string(::std::string const&)>> mEmoticonifyTextCallback;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DynamicContentBindingInformation() = default;

    virtual void createBindingData(::Json::Value const& contentData);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $createBindingData(::Json::Value const& contentData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
