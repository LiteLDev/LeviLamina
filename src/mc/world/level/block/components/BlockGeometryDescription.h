#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class HashedString;
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
        ::ll::UntypedStorage<8, 48> mUnk334de9;
        ::ll::UntypedStorage<8, 16> mUnkc0ae00;
        // NOLINTEND

    public:
        // prevent constructor by default
        SharedInitializationData& operator=(SharedInitializationData const&);
        SharedInitializationData(SharedInitializationData const&);
        SharedInitializationData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk82c02d;
    ::ll::UntypedStorage<1, 1>  mUnkc74705;
    ::ll::UntypedStorage<1, 1>  mUnk6249a9;
    ::ll::UntypedStorage<8, 48> mUnkddf5e8;
    ::ll::UntypedStorage<8, 16> mUnk32eaa1;
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

    // vIndex: 0
    virtual ~BlockGeometryDescription() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BlockGeometryDescription();

    MCNAPI BlockGeometryDescription(::BlockGeometryDescription const&);

    MCNAPI BlockGeometryDescription(
        ::HashedString const& geometryName,
        ::HashedString const& cullingName,
        ::HashedString const& cullingLayer
    );

    MCNAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription&&);

    MCNAPI ::BlockGeometryDescription& operator=(::BlockGeometryDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& CROSS_GEO_NAME();

    MCNAPI static ::std::string const& CULLING_LAYER_DOCUMENTATION();

    MCNAPI static ::HashedString const& CULLING_LAYER_LEAVES();

    MCNAPI static ::std::string const& CULLING_LAYER_NAME_CONSTRAINT();

    MCNAPI static ::HashedString const& CULLING_LAYER_UNDEFINED();

    MCNAPI static ::HashedString const& FULL_BLOCK_GEO_NAME();

    MCNAPI static ::std::string const& GEO_NAME_CONSTRAINT();

    MCNAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::BlockGeometryDescription const&);

    MCNAPI void*
    $ctor(::HashedString const& geometryName, ::HashedString const& cullingName, ::HashedString const& cullingLayer);
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

    MCNAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCNAPI void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
