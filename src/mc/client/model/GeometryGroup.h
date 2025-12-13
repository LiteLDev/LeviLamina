#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class GeometryInheritanceTree;
class GeometryPtr;
class HashedString;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
struct ModelParent;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
struct GeometryInfo;
// clang-format on

class GeometryGroup : public ::Bedrock::EnableNonOwnerReferences,
                      public ::std::enable_shared_from_this<::GeometryGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk69fa9e;
    ::ll::UntypedStorage<8, 80> mUnk15a0e0;
    ::ll::UntypedStorage<8, 8>  mUnk89a968;
    // NOLINTEND

public:
    // prevent constructor by default
    GeometryGroup& operator=(GeometryGroup const&);
    GeometryGroup(GeometryGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~GeometryGroup() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~GeometryGroup() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C GeometryGroup();

    MCNAPI_C ::std::shared_ptr<::GeometryInfo> _findOrAddGeometryInfo(
        ::HashedString const&                                          name,
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>& geometryLock
    );

    MCNAPI_C void _loadModelsAsync(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::shared_ptr<::GeometryInheritanceTree>         inheritance,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                loadModelFunction,
        ::std::function<void()> mainThreadCallback
    );

    MCNAPI_C void _loadModelsSync(
        ::GeometryInheritanceTree& inheritance,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
            loadModelFunction
    );

    MCNAPI_C void addGeometries(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::Json::Value&                                       geometryData,
        ::MinEngineVersion const&                            minEngineVersion,
        ::std::function<void()>                              mainThreadCallback,
        bool                                                 isAsync
    );

    MCNAPI_C ::GeometryPtr getGeometry(::HashedString const& geometryName);

    MCNAPI_C ::std::weak_ptr<::GeometryGroup> getWeakPtrToThis();

    MCNAPI_C void loadGeometriesAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                              loadModelFunction,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCNAPI_C void loadModelPackFromStringSync(
        ::std::string const&      packName,
        ::std::string const&      content,
        ::MinEngineVersion const& minEngineVersion
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_pre_v1_8();

    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_12();

    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_14();

    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_16();

    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_19_30();

    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_21();

    MCNAPI_C static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_8();

    MCNAPI_C static void _buildInheritanceTree(
        ::std::string const&,
        ::std::string const&                  sourceFilePathWithExtension,
        ::Json::Value&                        value,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool                                  isFromBaseGamePack,
        bool                                  requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCNAPI_C static void _buildInheritanceTree(
        ::std::string const&                  fileName,
        ::std::string const&                  sourceFilePathWithExtension,
        ::std::string const&                  fileContent,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool                                  isFromBaseGamePack,
        bool                                  requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCNAPI_C static ::std::pair<::std::string, ::std::string> _getParent(::std::string const& fullName);

    MCNAPI_C static bool checkVersionlessName(::std::string_view name, ::std::string_view versionlessGeoName);

    MCNAPI_C static bool isValidGeometryIdentifier(::Json::Value const& name);

    MCNAPI_C static bool isValidMinecraftNamespaceGeometryIdentifier(::std::string const& identifier);

    MCNAPI_C static bool isValidOptionalNamespaceGeometryIdentifier(::Json::Value const& name);

    MCNAPI_C static void loadModel(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp
    );

    MCNAPI_C static void loadModelExt(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp,
        int                              texw,
        int                              texh,
        ::TextureUVCoordinateSet const&  uvOffset,
        bool                             clearSkinAdjustmentsBitmask
    );

    MCNAPI_C static void upgradeMirrorMemberToV1_12(::Json::Value& bone);

    MCNAPI_C static void upgradeResetMemberToV1_12(::Json::Value& bone);

    MCNAPI_C static bool upgradeToV1_12(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI_C static bool upgradeToV1_14(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI_C static bool upgradeToV1_16(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI_C static bool upgradeToV1_19_30(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI_C static bool upgradeToV1_21(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI_C static bool validateFormatVersion(::SemVersion& fileVersion, ::Json::Value const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
