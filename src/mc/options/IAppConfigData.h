#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

class IAppConfigData {
public:
    // prevent constructor by default
    IAppConfigData& operator=(IAppConfigData const&);
    IAppConfigData(IAppConfigData const&);
    IAppConfigData();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IAppConfigData() = default;

    // vIndex: 1
    virtual ::Bedrock::typeid_t<::IAppConfigData> getType() const = 0;
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
