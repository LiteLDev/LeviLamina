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

    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const&) const /*override*/;

    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
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

    MCAPI bool const isRenderLayerOpaque() const;

    MCAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static bool
    postParseConstraint(::Experiments const&, ::Json::Value const& componentJson, ::SemVersion const& jsonVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64 const& MATERIALS_LIMIT();

    MCAPI static ::std::string const& NameID();

    MCAPI static ::SemVersionConstant const& VARIATIONS_TEXTURE_SUPPORT_MIN_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const&) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
