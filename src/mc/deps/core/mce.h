#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/checked_resource_service/ClientResourcePointer.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/image/ImageFormat.h"
#include "mc/deps/core_graphics/enums/BlendTarget.h"
#include "mc/deps/core_graphics/enums/ComparisonFunc.h"
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/core_graphics/enums/RenderState.h"
#include "mc/deps/core_graphics/enums/StencilOp.h"
#include "mc/deps/core_graphics/enums/TextureFiltering.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/core_graphics/helpers/InheritanceType.h"
#include "mc/deps/minecraft_renderer/renderer/DynamicTexture.h"
#include "mc/deps/renderer/VertexField.h"
#include "mc/deps/renderer/hal/enums/MSAASupport.h"
#include "mc/deps/renderer/hal/enums/ShaderStagesBits.h"
#include "mc/external/render_dragon/resources/ServerResourcePointer.h"
#include "mc/external/render_dragon/texture_decoder/texd/CompressionScheme.h"
#include "mc/external/render_dragon/texture_streaming/texture_cache/TextureCache.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class Vec3;
namespace Json { class Value; }
namespace cg { class ImageBuffer; }
namespace dragon::texturestreaming { struct DragonTextureCacheContext; }
namespace mce { struct Degree; }
namespace mce { struct Radian; }
namespace dragon { class ResolvedTextureResource; }
namespace dragon { struct ResolvedIndexBufferResource; }
namespace dragon { struct ResolvedVertexBufferResource; }
namespace mce { class Buffer; }
namespace mce { class Camera; }
namespace mce { class RenderDevice; }
namespace mce { struct BufferResourceService; }
namespace mce { struct GraphicsDeviceInformation; }
namespace mce { struct ServerTexture; }
namespace mce { struct TextureWrappingDescription; }
// clang-format on

namespace mce {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::string MakeBuiltInPropertyAlias(::std::string const& alias);

MCNAPI void allocateTextureHandles(uint count);

MCNAPI void
checkForInheritanceSupport(::Json::Value const& root, ::std::string_view name, bool supportsInheritanceType);

MCNAPI ::std::string_view dynamicTextureToString(::mce::DynamicTexture dynamicTexture);

MCNAPI void gatherSkyAmbientLighting(
    ::mce::Camera const& camera,
    ::Vec3               cameraPos,
    ::BlockSource const& blockViewRegion,
    ::cg::ImageBuffer&   imageBuffer,
    ::glm::ivec3         samples
);

MCNAPI uint64 getCompressedImageSize(::mce::TextureFormat format, uint width, uint height, uint mipLevelCount);

MCNAPI ::std::string getGraphicsCapabilitiesJsonString();

MCNAPI ::mce::GraphicsDeviceInformation getGraphicsDeviceInformation();

MCNAPI ::std::string getKeyBasedOnInheritance(::std::string_view key, ::mce::InheritanceType inheritanceType);

MCNAPI ::dragon::texturestreaming::TextureCache<
    ::dragon::texturestreaming::DragonTextureCacheContext>::TextureCacheDiskStats
getTextureCacheDiskStats();

MCNAPI bool getTextureCacheEnabled();

MCNAPI bool getTextureStreamingEnabled();

MCNAPI void initiateTDR();

MCNAPI bool isCompressedSrgbFormat(::mce::TextureFormat format);

MCNAPI ::mce::ClientResourcePointer<::std::variant<
    ::std::monostate,
    ::mce::Buffer,
    ::mce::ClientResourcePointer<::dragon::ResolvedVertexBufferResource>,
    ::mce::ClientResourcePointer<::dragon::ResolvedIndexBufferResource>>>
makeClientBuffer(
    ::mce::RenderDevice&          bufferResourceService,
    ::mce::BufferResourceService& mIndexSize,
    uchar                         mCapacity,
    uint
);

MCNAPI void
modifyState(::Json::Value const& val, ::mce::InheritanceType inheritanceType, ::std::set<::std::string>& set);

MCNAPI void
modifyState(::Json::Value const& val, ::mce::InheritanceType inheritanceType, ::mce::RenderState& stateMask);

MCNAPI ::mce::Radian operator*(float lhs, ::mce::Radian rhs);
#endif

MCNAPI ::mce::Radian operator*(::mce::Radian lhs, float rhs);

MCNAPI ::mce::Degree operator-(::mce::Degree lhs, float rhs);

#ifdef LL_PLAT_C
MCNAPI bool parse(::Json::Value const& root, ::std::string_view name, uint& out, bool supportsInheritanceType);

MCNAPI bool parse(::Json::Value const& root, ::std::string_view name, float& out, bool supportsInheritanceType);

MCNAPI bool parse(
    ::Json::Value const&               root,
    ::std::string_view                 name,
    ::Core::PathBuffer<::std::string>& out,
    bool                               supportsInheritanceType
);

MCNAPI bool parse(::Json::Value const& root, ::std::string_view name, ::std::string& out, bool supportsInheritanceType);

MCNAPI bool parse(::Json::Value const& root, ::std::string_view name, bool& out, bool supportsInheritanceType);

MCNAPI ::mce::RenderState parseStateName(::std::string const& name);

MCNAPI ::mce::TextureFormat translateCompressedFormat(::texd::CompressionScheme scheme);

MCNAPI ::mce::ImageFormat translateTextureFormat(::mce::TextureFormat textureFormat);

MCNAPI ::mce::ServerResourcePointer<::dragon::ResolvedTextureResource>
unwrapServerTexture(::mce::ServerTexture const& serverTexture);
#endif
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCNAPI ::std::unordered_map<::std::string, ::mce::BlendTarget> const&& blendTargetMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::ComparisonFunc> const&& comparisonFunctMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::MSAASupport> const&& msaaSupportMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::PrimitiveMode> const&& primitiveModeMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::ShaderStagesBits> const&& shaderStageMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::StencilOp> const&& stencilOpMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::TextureFiltering> const&& textureFilterMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::TextureFormat> const&& textureFormatMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::TextureWrappingDescription> const&& textureWrappingMap();

MCNAPI ::std::unordered_map<::std::string, ::mce::VertexField> const&& vertexFieldMap();
#endif
// NOLINTEND

} // namespace mce
