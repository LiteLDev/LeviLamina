#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/sem_ver/SemVersion.h"
#include "mc/deps/core_graphics/VariationMap.h"
#include "mc/deps/core_graphics/enums/RenderState.h"
#include "mc/deps/core_graphics/helpers/InheritanceType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace cg { struct RenderFeaturesConfiguration; }
// clang-format on

namespace cg {

class RenderMaterialBase {
public:
    // RenderMaterialBase inner types define
    using DefineSet = ::std::set<::std::string>;

    using MaterialVariationMap = ::std::map<::std::string, ::std::shared_ptr<::cg::RenderMaterialBase>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::std::shared_ptr<::cg::RenderMaterialBase>>>
                                                                 mMaterialVariations;
    ::ll::TypedStorage<8, 32, ::cg::VariationMap>                mVariationMap;
    ::ll::TypedStorage<8, 32, ::std::string>                     mFullMaterialName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mVariantName;
    ::ll::TypedStorage<8, 32, ::std::string>                     mMaterialIdentifier;
    ::ll::TypedStorage<8, 16, ::std::set<::std::string>>         mDefines;
    ::ll::TypedStorage<2, 2, ::mce::RenderState>                 mStateMask;
    ::ll::TypedStorage<8, 32, ::std::string>                     mShaderHeader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mVertexShader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mFragmentShader;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>> mGeometryShader;
    ::ll::TypedStorage<8, 24, ::SemVersion>                      mVersion;
    ::ll::TypedStorage<1, 1, uchar>                              mRequiredTextures;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    RenderMaterialBase& operator=(RenderMaterialBase const&);

#endif
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~RenderMaterialBase() = default;
#else // LL_PLAT_C
    virtual ~RenderMaterialBase();
#endif

    virtual void parseRuntimeStates(::Json::Value const& root) = 0;

    virtual void appendShaderPathForGfxAPI() = 0;

    virtual ::std::string buildHeader(::std::set<::std::string> const& defines);

    virtual void parseShader(::Json::Value const& root);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI RenderMaterialBase();

    MCAPI RenderMaterialBase(::cg::RenderMaterialBase const&);

    MCAPI void addDefine(::std::string const& define);

    MCAPI void modifyDefines(::cg::RenderFeaturesConfiguration const& features);

    MCAPI void parseDefines(::Json::Value const& root);

    MCAPI void parseMaterial(::Json::Value const& root);

    MCAPI void parseStates(::Json::Value const& root);

    MCAPI bool parseVariantWithInheritance(
        ::Json::Value const&   root,
        ::std::string_view     key,
        ::mce::InheritanceType inheritanceType
    );

    MCAPI void parseVersion(::Json::Value const& root);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI static void warnOnDeprecatedSchemaKeyword(::Json::Value const& root, ::std::string_view key);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor();

    MCAPI void* $ctor(::cg::RenderMaterialBase const&);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI ::std::string $buildHeader(::std::set<::std::string> const& defines);

    MCAPI void $parseShader(::Json::Value const& root);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cg
