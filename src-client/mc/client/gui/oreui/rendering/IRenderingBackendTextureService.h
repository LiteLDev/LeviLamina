#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"

// auto generated forward declare list
// clang-format off
namespace Gameface::RenderUtils { struct TextureData; }
namespace cg { class ImageBuffer; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct TextureDescription; }
// clang-format on

namespace Gameface {

class IRenderingBackendTextureService {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IRenderingBackendTextureService() = default;

    virtual void createClearTexture(
        ::dragon::TextureDescription const&                              desc,
        ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>& result
    ) = 0;

    virtual void createTexture(
        ::dragon::TextureDescription const&                              desc,
        ::Gameface::RenderUtils::TextureData const&                      data,
        ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>& result
    ) = 0;

    virtual void createUninitializedTexture(
        ::dragon::TextureDescription const&                              desc,
        ::mce::ClientResourcePointer<::dragon::ResolvedTextureResource>& result
    ) = 0;

    virtual void update(
        ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource> texture,
        uint                                                            x,
        uint                                                            y,
        ::cg::ImageBuffer&&                                             buffer
    ) = 0;

    virtual ::std::string createIdentifier(::std::string identifier) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Gameface
