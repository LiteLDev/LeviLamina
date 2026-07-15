#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/UniqueLock.h"

// auto generated forward declare list
// clang-format off
class GeometryInfo;
class HashedString;
class MinEngineVersion;
class ResourceLoadManager;
class ResourcePackManager;
struct ModelParent;
struct TextureUVCoordinateSet;
namespace Bedrock::Threading { class Mutex; }
namespace Json { class Value; }
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
    virtual ~GeometryGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GeometryGroup();

    MCAPI ::std::shared_ptr<::GeometryInfo> _findOrAddGeometryInfo(
        ::HashedString const&                                          name,
        ::Bedrock::Threading::UniqueLock<::Bedrock::Threading::Mutex>& geometryLock
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
