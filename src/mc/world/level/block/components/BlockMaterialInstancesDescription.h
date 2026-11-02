#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockMaterialInstancePackedBools.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class Experiments;
class SemVersion;
class SemVersionConstant;
struct BlockMaterialInstance;
namespace Json { class Value; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockMaterialInstancesDescription : public ::BlockComponentDescription {
public:
    // BlockMaterialInstancesDescription inner types declare
    // clang-format off
    struct BlockMaterialInstanceData;
    struct BlockMaterialData;
    // clang-format on

    // BlockMaterialInstancesDescription inner types define
    struct BlockMaterialInstanceData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                     textureName;
        ::ll::TypedStorage<4, 4, float>                              ambientOcclusion;
        ::ll::TypedStorage<1, 1, ::BlockRenderLayer>                 renderLayer;
        ::ll::TypedStorage<1, 1, ::TintMethod>                       tintMethod;
        ::ll::TypedStorage<1, 1, ::BlockMaterialInstancePackedBools> packedBools;
        // NOLINTEND
    };

    struct BlockMaterialData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                                  materialName;
        ::ll::TypedStorage<8, 40, ::BlockMaterialInstancesDescription::BlockMaterialInstanceData> materialInstanceData;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockMaterialData& operator=(BlockMaterialData const&);
        BlockMaterialData();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI BlockMaterialData(::BlockMaterialInstancesDescription::BlockMaterialData const&);

        MCNAPI ~BlockMaterialData();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::BlockMaterialInstancesDescription::BlockMaterialData const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::BlockMaterialInstance>> mMaterials;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::string>>           mMaterialMappings;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockMaterialInstancesDescription(BlockMaterialInstancesDescription const&);
    BlockMaterialInstancesDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual bool isNetworkComponent() const /*override*/;

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    virtual ~BlockMaterialInstancesDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit BlockMaterialInstancesDescription(
        ::std::vector<::BlockMaterialInstancesDescription::BlockMaterialData> const& materialDatas
    );

    MCAPI BlockMaterialInstancesDescription(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation,
        bool                 supportsTextureVariations,
        bool                 alphaMaskedTint,
        bool                 dithering
    );

    MCNAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCNAPI static bool
    postParseConstraint(::Experiments const&, ::Json::Value const& componentJson, ::SemVersion const& jsonVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& NameID();

    MCNAPI static ::SemVersionConstant const& VARIATIONS_TEXTURE_SUPPORT_MIN_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::vector<::BlockMaterialInstancesDescription::BlockMaterialData> const& materialDatas);

    MCAPI void* $ctor(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation,
        bool                 supportsTextureVariations,
        bool                 alphaMaskedTint,
        bool                 dithering
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string const& $getName() const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI bool $isNetworkComponent() const;

    MCNAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCNAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
