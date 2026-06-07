#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Gameface { class UserImageData; }
namespace cohtml { class IAsyncResourceResponse; }
// clang-format on

namespace Gameface {

class ResourceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceResponse*> mResponse;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ResourceResponse();

    MCAPI void fail();

    MCAPI void* getSpace(uint64 size);

    MCAPI void receiveUserImage(::Gameface::UserImageData const& userImageData);

    MCAPI void setHeader(char const* name, char const* value);

    MCAPI void setStatus(ushort status);

    MCAPI void succeed();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};

} // namespace Gameface
