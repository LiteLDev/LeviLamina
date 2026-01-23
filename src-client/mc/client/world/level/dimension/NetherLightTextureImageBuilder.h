#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/ptexture/BaseLightTextureImageBuilder.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
struct BaseLightData;
// clang-format on

class NetherLightTextureImageBuilder : public ::BaseLightTextureImageBuilder {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unique_ptr<::BaseLightData>
    createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData) /*override*/;

    virtual ~NetherLightTextureImageBuilder() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::BaseLightData>
    $createBaseLightTextureData(::IClientInstance* client, ::BaseLightData const& currentData);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
