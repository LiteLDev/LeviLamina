#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockGeometryDescription.h"
#include "mc/world/level/block/components/BlockMaterialInstancesDescription.h"
#include "mc/world/level/block/components/NetworkedBlockComponentDescription.h"

// auto generated forward declare list
// clang-format off
class BlockComponentStorage;
class SemVersion;
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct BlockEmbeddedVisualDescription : public ::NetworkedBlockComponentDescription<::BlockEmbeddedVisualDescription> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 264, ::BlockGeometryDescription>          mGeometry;
    ::ll::TypedStorage<8, 144, ::BlockMaterialInstancesDescription> mMaterialInstances;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockEmbeddedVisualDescription(BlockEmbeddedVisualDescription const&);
    BlockEmbeddedVisualDescription();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::string const& getName() const /*override*/;

    virtual void initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void initializeComponent(::BlockComponentStorage& blockComponentStorage) const /*override*/;

    virtual void handleVersionBasedInitialization(::SemVersion const& originalJsonVersion) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BlockEmbeddedVisualDescription(
        ::BlockGeometryDescription const&          geometryDescription,
        ::BlockMaterialInstancesDescription const& materialInstanceDescription
    );

    MCFOLD ::BlockEmbeddedVisualDescription& operator=(::BlockEmbeddedVisualDescription&&);

    MCFOLD ::BlockEmbeddedVisualDescription& operator=(::BlockEmbeddedVisualDescription const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string const& NameID();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockGeometryDescription const&          geometryDescription,
        ::BlockMaterialInstancesDescription const& materialInstanceDescription
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::string const& $getName() const;

    MCFOLD void $initializeComponentFromCode(::BlockComponentStorage& blockComponentStorage) const;

    MCAPI void $initializeComponent(::BlockComponentStorage& blockComponentStorage) const;

    MCFOLD void $handleVersionBasedInitialization(::SemVersion const& originalJsonVersion);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
