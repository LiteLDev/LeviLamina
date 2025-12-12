#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/controller/RenderControllerArrayType.h"
#include "mc/molang/MolangVersion.h"

// auto generated forward declare list
// clang-format off
class DataDrivenGeometry;
class ExpressionNode;
class RenderParams;
class Vec4;
namespace Json { class Value; }
namespace mce { class Color; }
class DataDrivenModel;
// clang-format on

class RenderController {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48>  mUnk972647;
    ::ll::UntypedStorage<8, 192> mUnkbd217d;
    ::ll::UntypedStorage<8, 16>  mUnk82218a;
    ::ll::UntypedStorage<8, 64>  mUnkd6f969;
    ::ll::UntypedStorage<8, 64>  mUnkd9ddbc;
    ::ll::UntypedStorage<8, 64>  mUnk117366;
    ::ll::UntypedStorage<8, 64>  mUnk6e4053;
    ::ll::UntypedStorage<8, 64>  mUnk44f009;
    ::ll::UntypedStorage<8, 24>  mUnk65eaf4;
    ::ll::UntypedStorage<8, 24>  mUnkbd7a8a;
    ::ll::UntypedStorage<8, 24>  mUnk1b8a19;
    ::ll::UntypedStorage<8, 24>  mUnk35e3d7;
    ::ll::UntypedStorage<1, 1>   mUnkfa4011;
    ::ll::UntypedStorage<1, 1>   mUnkad774d;
    ::ll::UntypedStorage<1, 1>   mUnk7aa91c;
    ::ll::UntypedStorage<1, 1>   mUnk15c5da;
    ::ll::UntypedStorage<8, 16>  mUnk39f6f1;
    ::ll::UntypedStorage<8, 8>   mUnk861111;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderController& operator=(RenderController const&);
    RenderController();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C RenderController(::RenderController&&);

    MCNAPI_C RenderController(::RenderController const&);

    MCNAPI_C explicit RenderController(::std::string const& name);

    MCNAPI_C bool _parseColor(
        ::Json::Value const& root,
        ::ExpressionNode*    colorNode,
        ::MolangVersion      molangVersion,
        float                defaultAlpha
    );

    MCNAPI_C ::std::vector<::std::shared_ptr<::DataDrivenGeometry const>> getDataDrivenGeometries() const;

    MCNAPI_C ::std::shared_ptr<::DataDrivenGeometry> getGeometry(::RenderParams& renderParams) const;

    MCNAPI_C ::mce::Color getHurtColor(::RenderParams& renderParams) const;

    MCNAPI_C float getLightColorMultiplier(::RenderParams& renderParams, float const& defaultValue) const;

    MCNAPI_C ::mce::Color getOnFireColor(::RenderParams& renderParams) const;

    MCNAPI_C ::mce::Color getOverlayColor(::RenderParams& renderParams) const;

    MCNAPI_C ::mce::Color getTintColor(::RenderParams& renderParams) const;

    MCNAPI_C ::Vec4 getUVAnim(::RenderParams& renderParams, ::Vec4 const& defaultUVAnim) const;

    MCNAPI_C bool parse(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool
    parseArray(::Json::Value const& root, ::RenderControllerArrayType arrayType, ::MolangVersion molangVersion);

    MCNAPI_C bool parseArrays(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool parseGeometry(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool parseLightColorMultiplier(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool parseMaterials(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool parsePartVisibility(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool parseTextures(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C bool parseUVAnim(::Json::Value const& root, ::MolangVersion molangVersion);

    MCNAPI_C void render(::RenderParams& renderParams, ::DataDrivenGeometry& geo);

    MCNAPI_C bool replaceVariables(::DataDrivenModel& model);

    MCNAPI_C bool updatePartMaterials();

    MCNAPI_C bool updatePartVisibility();

    MCNAPI_C ~RenderController();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::string nameToRegExStr(::std::string const& sourceName);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::RenderController&&);

    MCNAPI_C void* $ctor(::RenderController const&);

    MCNAPI_C void* $ctor(::std::string const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
