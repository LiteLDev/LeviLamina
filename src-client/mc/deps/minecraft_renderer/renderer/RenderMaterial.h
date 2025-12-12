#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/RenderMaterialBase.h"
#include "mc/deps/core_graphics/enums/TextureFormat.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialRenderType.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialType.h"
#include "mc/deps/renderer/VertexField.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { struct ActorMaterialVariation; }
namespace mce::framebuilder::bgfxbridge { struct DefineFlags; }
// clang-format on

namespace mce {

class RenderMaterial : public ::cg::RenderMaterialBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 34>  mUnke23b9f;
    ::ll::UntypedStorage<4, 4>   mUnka6c058;
    ::ll::UntypedStorage<4, 4>   mUnkbe8147;
    ::ll::UntypedStorage<4, 4>   mUnk7f8069;
    ::ll::UntypedStorage<1, 7>   mUnkaab133;
    ::ll::UntypedStorage<4, 24>  mUnk4f6ad6;
    ::ll::UntypedStorage<4, 12>  mUnk3b55cd;
    ::ll::UntypedStorage<4, 96>  mUnkb4d31b;
    ::ll::UntypedStorage<8, 16>  mUnk25ef50;
    ::ll::UntypedStorage<1, 1>   mUnkecd544;
    ::ll::UntypedStorage<8, 24>  mUnk5aecf2;
    ::ll::UntypedStorage<8, 24>  mUnk6e67f9;
    ::ll::UntypedStorage<4, 8>   mUnkd97236;
    ::ll::UntypedStorage<1, 2>   mUnk1bc862;
    ::ll::UntypedStorage<8, 264> mUnk3054e6;
    ::ll::UntypedStorage<1, 1>   mUnk7b639a;
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
    MCNAPI RenderMaterial(::mce::RenderMaterial const&);

    MCNAPI explicit RenderMaterial(::std::vector<::mce::TextureFormat> const& defaultRenderTargetFormats);

    MCNAPI ::mce::ActorMaterialVariation getActorVariation(::mce::MaterialRenderType renderType);

    MCNAPI ::mce::framebuilder::bgfxbridge::DefineFlags const getDefinesFlags();

    MCNAPI ::std::optional<::mce::MaterialType> const getMaterialType();

    MCNAPI void parseDepthStencilState(::Json::Value const& root);

    MCNAPI void parseRasterizerState(::Json::Value const& root);

    MCNAPI void parseRenderTargetFormat(::Json::Value const& root);

    MCNAPI void parseSamplers(::Json::Value const& root);

    MCNAPI void parseVertexFields(::Json::Value const& root);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::mce::RenderMaterial const&);

    MCNAPI void* $ctor(::std::vector<::mce::TextureFormat> const& defaultRenderTargetFormats);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $buildHeader(::std::set<::std::string> const& defines);

    MCNAPI void $parseRuntimeStates(::Json::Value const& root);

    MCNAPI void $parseShader(::Json::Value const& root);

    MCNAPI void $appendShaderPathForGfxAPI();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace mce
