#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/components/BlockRendererDescription.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class CompoundTag;
class ExpressionNode;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockGeometryDescription : public ::NetworkedBlockComponentDescription<::BlockGeometryDescription> {
public:
    // BlockGeometryDescription inner types declare
    // clang-format off
    struct SharedInitializationData;
    // clang-format on

    // BlockGeometryDescription inner types define
    struct SharedInitializationData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 48, ::HashedString>                              mCullingName;
        ::ll::TypedStorage<8, 16, ::std::map<::std::string, ::ExpressionNode>> mBoneVisibilities;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mGeometryName;
    ::ll::TypedStorage<1, 1, bool>            mNeedsLegacyTopRotation;
    ::ll::TypedStorage<1, 1, bool>            mUseBlockTypeLightAbsorption;
    ::ll::TypedStorage<1, 1, bool>            mIgnoreGeometryForIsSolid;
    ::ll::TypedStorage<8, 48, ::HashedString> mCullingLayer;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::BlockGeometryDescription::SharedInitializationData>>
                                                                                mSharedInitializationData;
    ::ll::TypedStorage<8, 24, ::std::variant<bool, ::std::set<::HashedString>>> mUVsLocked;
    ::ll::TypedStorage<4, 52, ::BlockRendererDescription>                       mRenderer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::string const& getName() const /*override*/;

    // vIndex: 2
    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 4
    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    // vIndex: 10
    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;

    // vIndex: 11
    virtual ::CompoundTag buildUnboundDataNetworkTag() const /*override*/;

    // vIndex: 12
    virtual void initializeUnboundDataFromNetwork(::CompoundTag const& tag) /*override*/;

    // vIndex: 0
    virtual ~BlockGeometryDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockGeometryDescription();

    MCAPI BlockGeometryDescription(::BlockGeometryDescription const&);

    MCAPI BlockGeometryDescription(
        ::HashedString const&                                   geometryName,
        ::HashedString const&                                   cullingName,
        ::HashedString const&                                   cullingLayer,
        ::std::variant<bool, ::std::set<::HashedString>> const& uvLock,
        ::BlockRendererDescription const&                       renderer
    );

    MCAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription&&);

    MCAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& CROSS_GEO_NAME();

    MCAPI static ::std::string const& CULLING_LAYER_DOCUMENTATION();

    MCAPI static ::HashedString const& CULLING_LAYER_LEAVES();

    MCAPI static ::std::string const& CULLING_LAYER_NAME_CONSTRAINT();

    MCAPI static ::HashedString const& CULLING_LAYER_UNDEFINED();

    MCAPI static ::HashedString const& FULL_BLOCK_GEO_NAME();

    MCAPI static ::std::string const& GEO_NAME_CONSTRAINT();

    MCAPI static ::std::string const& NameID();

    MCAPI static ::std::string const& UV_LOCKING_CONSTRAINT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BlockGeometryDescription const&);

    MCAPI void* $ctor(
        ::HashedString const&                                   geometryName,
        ::HashedString const&                                   cullingName,
        ::HashedString const&                                   cullingLayer,
        ::std::variant<bool, ::std::set<::HashedString>> const& uvLock,
        ::BlockRendererDescription const&                       renderer
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

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);

    MCAPI ::CompoundTag $buildUnboundDataNetworkTag() const;

    MCAPI void $initializeUnboundDataFromNetwork(::CompoundTag const& tag);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
