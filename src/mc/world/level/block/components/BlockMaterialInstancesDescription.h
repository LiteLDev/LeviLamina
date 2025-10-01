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
    struct BlockMaterialData;
    struct BlockMaterialInstanceData;
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
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 7
    virtual bool isNetworkComponent() const /*override*/;

    // vIndex: 8
    virtual ::std::unique_ptr<::CompoundTag> buildNetworkTag(::cereal::ReflectionCtx const& ctx) const /*override*/;

    // vIndex: 9
    virtual void initializeFromNetwork(::CompoundTag const& tag, ::cereal::ReflectionCtx const& ctx) /*override*/;

    // vIndex: 10
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 0
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
        bool                 supportsTextureVariations
    );

    MCAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription const&);

    MCAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription&&);
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
        bool                 supportsTextureVariations
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
