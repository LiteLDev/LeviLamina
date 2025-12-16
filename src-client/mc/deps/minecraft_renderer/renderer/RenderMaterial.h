#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/RenderMaterialBase.h"
#include "mc/deps/core_graphics/enums/PrimitiveMode.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/core_graphics/interface/BlendStateDescription.h"
#include "mc/deps/minecraft_renderer/framebuilder/bgfxbridge/DefineFlags.h"
#include "mc/deps/minecraft_renderer/renderer/ActorMaterialVariation.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialRenderType.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialType.h"
#include "mc/deps/renderer/VertexField.h"
#include "mc/deps/renderer/VertexFormat.h"
#include "mc/deps/renderer/hal/enums/MSAASupport.h"
#include "mc/deps/renderer/hal/interface/DepthStencilStateDescription.h"
#include "mc/deps/renderer/hal/interface/RasterizerStateDescription.h"
#include "mc/deps/renderer/hal/interface/SamplerStateDescription.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

namespace mce {

class RenderMaterial : public ::cg::RenderMaterialBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 34, ::mce::VertexFormat>                                mVertexFormat;
    ::ll::TypedStorage<4, 4, ::mce::MSAASupport>                                  mMsaaSupport;
    ::ll::TypedStorage<4, 4, float>                                               mDepthBias;
    ::ll::TypedStorage<4, 4, float>                                               mSlopeScaledDepthBias;
    ::ll::TypedStorage<1, 7, ::mce::BlendStateDescription>                        blendStateDescription;
    ::ll::TypedStorage<4, 24, ::mce::DepthStencilStateDescription>                depthStencilStateDescription;
    ::ll::TypedStorage<4, 12, ::mce::RasterizerStateDescription>                  rasterizerStateDescription;
    ::ll::TypedStorage<4, 96, ::std::array<::mce::SamplerStateDescription, 8>>    samplerStateDescriptions;
    ::ll::TypedStorage<8, 16, ::std::set<::mce::VertexField>>                     mVertexFields;
    ::ll::TypedStorage<1, 1, ::mce::PrimitiveMode>                                mPrimitiveMode;
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::TextureFormat>>                mDefaultRenderTargetFormats;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::vector<::mce::TextureFormat>>> mRenderTargetFormats;
    ::ll::TypedStorage<4, 8, ::std::optional<::mce::framebuilder::bgfxbridge::DefineFlags>> mDefineFlags;
    ::ll::TypedStorage<1, 2, ::std::optional<::mce::MaterialType>>                          mMaterialType;
    ::ll::TypedStorage<8, 264, ::std::optional<::mce::ActorMaterialVariation>>              mActorVariation;
    ::ll::TypedStorage<1, 1, ::mce::MaterialRenderType>                                     mRenderType;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMaterial& operator=(RenderMaterial const&);
    RenderMaterial();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string buildHeader(::std::set<::std::string> const& defines) /*override*/;

    virtual void parseRuntimeStates(::Json::Value const& root) /*override*/;

    virtual void parseShader(::Json::Value const& root) /*override*/;

    virtual void appendShaderPathForGfxAPI() /*override*/;

    virtual ~RenderMaterial() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderMaterial(::mce::RenderMaterial const&);

    MCAPI explicit RenderMaterial(::std::vector<::mce::TextureFormat> const& defaultRenderTargetFormats);

    MCAPI ::mce::ActorMaterialVariation getActorVariation(::mce::MaterialRenderType renderType);

    MCAPI ::mce::framebuilder::bgfxbridge::DefineFlags const getDefinesFlags();

    MCAPI ::std::optional<::mce::MaterialType> const getMaterialType();

    MCAPI void parseDepthStencilState(::Json::Value const& root);

    MCAPI void parseRasterizerState(::Json::Value const& root);

    MCAPI void parseRenderTargetFormat(::Json::Value const& root);

    MCAPI void parseSamplers(::Json::Value const& root);

    MCAPI void parseVertexFields(::Json::Value const& root);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::mce::RenderMaterial const&);

    MCAPI void* $ctor(::std::vector<::mce::TextureFormat> const& defaultRenderTargetFormats);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string $buildHeader(::std::set<::std::string> const& defines);

    MCAPI void $parseRuntimeStates(::Json::Value const& root);

    MCFOLD void $parseShader(::Json::Value const& root);

    MCFOLD void $appendShaderPathForGfxAPI();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
