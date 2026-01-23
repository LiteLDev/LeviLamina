#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"
#include "mc/world/level/block/components/BlockMaterialInstancePackedBools.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class Experiments;
class HashedString;
class SemVersion;
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
    MCAPI BlockMaterialInstancesDescription();

    MCAPI BlockMaterialInstancesDescription(::BlockMaterialInstancesDescription const&);

    MCAPI BlockMaterialInstancesDescription(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation,
        bool                 supportsTextureVariations,
        bool                 alphaMaskedTint
    );

    MCAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription&&);

    MCAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);

    MCAPI static bool postParseConstraint(
        ::Experiments const& experiments,
        ::Json::Value const& componentJson,
        ::SemVersion const&  jsonVersion
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockMaterialInstancesDescription const&);

    MCAPI void* $ctor(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation,
        bool                 supportsTextureVariations,
        bool                 alphaMaskedTint
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
    MCAPI ::std::string const& $getName() const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD bool $isNetworkComponent() const;

    MCAPI ::std::unique_ptr<::CompoundTag> $buildNetworkTag(::cereal::ReflectionCtx const& ctx) const;

    MCAPI void $initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx);

    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
