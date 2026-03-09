#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class GeometryInfo;
class GeometryPtr;
class HashedString;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
class SemVersion;
struct GeometryInheritanceTree;
struct ModelParent;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
namespace JsonUtil { class EmptyClass; }
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
    virtual ~GeometryGroup() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeometryGroup();

    MCAPI ::std::shared_ptr<::GeometryInfo> _findOrAddGeometryInfo(
        ::HashedString const&                                          name,
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>& geometryLock
    );

    MCAPI void _loadModelsAsync(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::std::shared_ptr<::GeometryInheritanceTree>         inheritance,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
                                loadModelFunction,
        ::std::function<void()> mainThreadCallback
    );

    MCAPI void _loadModelsSync(
        ::GeometryInheritanceTree& inheritance,
        ::std::function<void(::std::weak_ptr<::GeometryGroup>, ::std::string const&, ::ModelParent const&)>
            loadModelFunction
    );

    MCAPI void addGeometries(
        ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> resourceLoadManager,
        ::Json::Value&                                       geometryData,
        ::MinEngineVersion const&                            minEngineVersion,
        ::std::function<void()>                              mainThreadCallback,
        bool                                                 isAsync
    );

    MCAPI ::GeometryPtr getGeometry(::HashedString const& geometryName);

    MCAPI ::std::weak_ptr<::GeometryGroup> getWeakPtrToThis();

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
    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_pre_v1_8();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_12();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_14();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_16();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_19_30();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_21();

    MCAPI static ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::GeometryGroup>>
    _buildGeometryFileSchema_v1_8();

    MCAPI static void _buildInheritanceTree(
        ::std::string const&,
        ::std::string const&                  sourceFilePathWithExtension,
        ::Json::Value&                        value,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool                                  isFromBaseGamePack,
        bool                                  requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI static void _buildInheritanceTree(
        ::std::string const&                  fileName,
        ::std::string const&                  sourceFilePathWithExtension,
        ::std::string const&                  fileContent,
        ::MinEngineVersion const&             minEngineVersion,
        ::GeometryInheritanceTree&            inheritance,
        bool                                  isFromBaseGamePack,
        bool                                  requireMinecraftNamespace,
        ::std::function<void(::Json::Value&)> postLoadFixup
    );

    MCAPI static ::std::pair<::std::string, ::std::string> _getParent(::std::string const& fullName);

    MCAPI static bool checkVersionlessName(::std::string_view name, ::std::string_view versionlessGeoName);

    MCAPI static bool isValidGeometryIdentifier(::Json::Value const& name);

    MCAPI static bool isValidMinecraftNamespaceGeometryIdentifier(::std::string const& identifier);

    MCAPI static bool isValidOptionalNamespaceGeometryIdentifier(::Json::Value const& name);

    MCAPI static void loadModel(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp
    );

    MCAPI static void loadModelExt(
        ::std::weak_ptr<::GeometryGroup> weakGeometryGroup,
        ::std::string const&             pascalCaseName,
        ::ModelParent const&             mp,
        int                              texw,
        int                              texh,
        ::TextureUVCoordinateSet const&  uvOffset,
        bool                             clearSkinAdjustmentsBitmask
    );

    MCAPI static void upgradeMirrorMemberToV1_12(::Json::Value& bone);

    MCAPI static void upgradeResetMemberToV1_12(::Json::Value& bone);

    MCAPI static bool upgradeToV1_12(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool upgradeToV1_14(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool upgradeToV1_16(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool upgradeToV1_19_30(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool upgradeToV1_21(
        ::Json::Value&            root,
        ::SemVersion const&       fileVersion,
        ::MinEngineVersion const& minEngineVersion,
        bool&                     hasBeenValidated
    );

    MCAPI static bool validateFormatVersion(::SemVersion& fileVersion, ::Json::Value const& value);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
