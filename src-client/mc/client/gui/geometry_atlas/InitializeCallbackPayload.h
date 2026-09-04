#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeStatus.h"
#include "mc/platform/brstd/move_only_function.h"

namespace GeometryAtlas {

class InitializeCallbackPayload {
public:
    // InitializeCallbackPayload inner types define
    using Callback = ::brstd::move_only_function<void(::GeometryAtlas::InitializeStatus)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void(::GeometryAtlas::InitializeStatus)>> mCallback;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~InitializeCallbackPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace GeometryAtlas
