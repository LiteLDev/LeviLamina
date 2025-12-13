#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core_graphics/helpers/InheritanceType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cg { struct RenderFeaturesConfiguration; }
// clang-format on

namespace cg {

class RenderMaterialBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkc68a56;
    ::ll::UntypedStorage<8, 32> mUnk201cdc;
    ::ll::UntypedStorage<8, 32> mUnk24b5e2;
    ::ll::UntypedStorage<8, 32> mUnk53b973;
    ::ll::UntypedStorage<8, 32> mUnkd1bdc9;
    ::ll::UntypedStorage<8, 16> mUnk794254;
    ::ll::UntypedStorage<2, 2>  mUnk8028a2;
    ::ll::UntypedStorage<8, 32> mUnk521b21;
    ::ll::UntypedStorage<8, 32> mUnke04660;
    ::ll::UntypedStorage<8, 32> mUnk6e466a;
    ::ll::UntypedStorage<8, 32> mUnk268667;
    ::ll::UntypedStorage<8, 24> mUnk1f6462;
    ::ll::UntypedStorage<1, 1>  mUnk716a43;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderMaterialBase& operator=(RenderMaterialBase const&);

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RenderMaterialBase() = default;
#else // LL_PLAT_C
    virtual ~RenderMaterialBase();
#endif

    virtual void parseRuntimeStates(::Json::Value const&) = 0;

    virtual void appendShaderPathForGfxAPI() = 0;

    virtual ::std::string buildHeader(::std::set<::std::string> const& defines);

    virtual void parseShader(::Json::Value const& root);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C RenderMaterialBase();

    MCNAPI_C RenderMaterialBase(::cg::RenderMaterialBase const&);

    MCNAPI_C void addDefine(::std::string const& define);

    MCNAPI_C void modifyDefines(::cg::RenderFeaturesConfiguration const& features);

    MCNAPI_C void parseDefines(::Json::Value const& root);

    MCNAPI_C void parseMaterial(::Json::Value const& root);

    MCNAPI_C void parseStates(::Json::Value const& root);

    MCNAPI_C bool parseVariantWithInheritance(
        ::Json::Value const&   root,
        ::std::string_view     key,
        ::mce::InheritanceType inheritanceType
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static void warnOnDeprecatedSchemaKeyword(::Json::Value const& root, ::std::string_view key);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();

    MCNAPI_C void* $ctor(::cg::RenderMaterialBase const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string $buildHeader(::std::set<::std::string> const& defines);

    MCNAPI void $parseShader(::Json::Value const& root);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
