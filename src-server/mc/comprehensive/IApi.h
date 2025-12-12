#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"

struct IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint AddRef() = 0;

    virtual uint Release() = 0;

    virtual HRESULT QueryApi(::ApiId, void**) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
