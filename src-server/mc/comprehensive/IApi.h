#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/ApiId.h"

struct IApi {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual uint AddRef() = 0;

    // vIndex: 1
    virtual uint Release() = 0;

    // vIndex: 2
    virtual HRESULT QueryApi(::ApiId, void**) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
