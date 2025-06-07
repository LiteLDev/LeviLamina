#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/TintMethod.h"
#include "mc/world/level/block/components/BlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class Experiments;
class SemVersion;
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
        ::ll::UntypedStorage<8, 32> mUnkd404fa;
        ::ll::UntypedStorage<4, 4>  mUnk560526;
        ::ll::UntypedStorage<1, 1>  mUnkb5483c;
        ::ll::UntypedStorage<1, 1>  mUnk73da79;
        ::ll::UntypedStorage<1, 1>  mUnkc44bf0;
        ::ll::UntypedStorage<1, 1>  mUnk9611aa;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockMaterialInstanceData& operator=(BlockMaterialInstanceData const&);
        BlockMaterialInstanceData(BlockMaterialInstanceData const&);
        BlockMaterialInstanceData();
    };

    struct BlockMaterialData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnke0dca5;
        ::ll::UntypedStorage<8, 40> mUnk6be5e5;
        // NOLINTEND

    public:
        // prevent constructor by default
        BlockMaterialData& operator=(BlockMaterialData const&);
        BlockMaterialData(BlockMaterialData const&);
        BlockMaterialData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk98b178;
    ::ll::UntypedStorage<8, 64> mUnkfaac49;
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

    // vIndex: 0
    virtual ~BlockMaterialInstancesDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockMaterialInstancesDescription();

    MCNAPI BlockMaterialInstancesDescription(::BlockMaterialInstancesDescription const&);

    MCNAPI BlockMaterialInstancesDescription(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation
    );

    MCNAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription const&);

    MCNAPI ::BlockMaterialInstancesDescription& operator=(::BlockMaterialInstancesDescription&&);
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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockMaterialInstancesDescription const&);

    MCNAPI void* $ctor(
        ::std::string const& textureName,
        ::BlockRenderLayer   renderLayer,
        float                ambientOcclusion,
        bool                 faceDimming,
        ::TintMethod         tintMethod,
        bool                 randomizeUVRotation
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
