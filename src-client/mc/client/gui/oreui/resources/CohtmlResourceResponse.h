#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/IResourceResponse.h"
#include "mc/deps/cohtml/IAsyncResourceResponse.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IAsyncResourceResponse; }
// clang-format on

namespace OreUI {

class CohtmlResourceResponse : public ::OreUI::IResourceResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::IAsyncResourceResponse*> mResponse;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CohtmlResourceResponse() /*override*/ = default;

    virtual void receiveUserImage(::cohtml::IAsyncResourceResponse::UserImageData const& userImageData) /*override*/;

    virtual void* getSpace(uint64 size) /*override*/;

    virtual void setHeader(char const* name, char const* value) /*override*/;

    virtual void setStatus(ushort status) /*override*/;

    virtual ::cohtml::IAsyncResourceResponse* getCohtmlIAsyncResourceResponse() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $receiveUserImage(::cohtml::IAsyncResourceResponse::UserImageData const& userImageData);

    MCFOLD void* $getSpace(uint64 size);

    MCAPI void $setHeader(char const* name, char const* value);

    MCFOLD void $setStatus(ushort status);

    MCFOLD ::cohtml::IAsyncResourceResponse* $getCohtmlIAsyncResourceResponse() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
