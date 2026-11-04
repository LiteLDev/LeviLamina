#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class GeometryInfo;
class GeometryInheritanceTree;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
class SemVersionConstant;
struct ModelParent;
struct TextureUVCoordinateSet;
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
// clang-format on

class GeometryGroup : public ::Bedrock::EnableNonOwnerReferences,
                      public ::std::enable_shared_from_this<::GeometryGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::shared_ptr<::GeometryInfo>>> mGeometries;
    ::ll::TypedStorage<8, 80, ::std::mutex>                                                            mGeometryLock;
    ::ll::TypedStorage<8, 8, int64 const> mResourceLoadTimeStamp;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GeometryGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GeometryGroup();

    MCNAPI ::std::shared_ptr<::GeometryInfo>
    _findOrAddGeometryInfo(::HashedString const& name, ::Bedrock::Threading::UniqueLock<::std::mutex>& geometryLock);

    MCNAPI void _loadModelsAsync(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::shared_ptr<::GeometryInheritanceTree>         inheritance,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                loadModelFunction,
        ::std::function<void()> mainThreadCallback
    );

    MCAPI void addGeometries(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::Json::Value&                                       geometryData,
        ::MinEngineVersion const&                            minEngineVersion,
        ::std::function<void()>                              mainThreadCallback,
        bool                                                 isAsync
    );

    MCAPI void loadGeometriesAsync(
        ::ResourcePackManager&                               resourcePackManager,
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                              loadModelFunction,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI void loadModelPackFromStringSync(
        ::std::string const&      packName,
        ::std::string const&      content,
        ::MinEngineVersion const& minEngineVersion
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_21();

    MCNAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_26_40();

    MCNAPI static void _buildInheritanceTree(
        ::std::string const&,
        ::std::string const&                  sourceFilePathWithExtension,
        ::Json::Value&                        value,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool const                            isFromBaseGamePack,
        bool const                            requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCNAPI static void _buildInheritanceTree(
        ::std::string const&                  fileName,
        ::std::string const&                  sourceFilePathWithExtension,
        ::std::string const&                  fileContent,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool const                            isFromBaseGamePack,
        bool const                            requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI static bool checkVersionlessName(::std::string_view name, ::std::string_view versionlessGeoName);

    MCAPI static bool isValidGeometryIdentifier(::Json::Value const& name);

    MCAPI static bool isValidOptionalNamespaceGeometryIdentifier(::Json::Value const& name);

    MCNAPI static void loadModel(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp
    );

    MCNAPI static void loadModelExt(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp,
        int                              texw,
        int                              texh,
        ::TextureUVCoordinateSet const&  uvOffset,
        bool                             clearSkinAdjustmentsBitmask
    );

    MCNAPI static void upgradeMirrorMemberToV1_12(::Json::Value& bone);

    MCNAPI static bool upgradeToV1_19_30(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI static bool upgradeToV1_21(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCNAPI static bool upgradeToV1_26_40(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_12();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_14();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_16();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_19_30();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_21();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_26_40();

    MCNAPI static ::SemVersionConstant const& GEOMETRY_SCHEMA_V1_8();

    MCNAPI static ::std::string const& ITEM_DISPLAY_TRANSFORMS_ID();

    MCNAPI static ::std::string const& UV_ROTATION_DOC();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
