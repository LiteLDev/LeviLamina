#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IFeature;
class JigsawBlockInfo;
class LegacyStructureSettings;
class Random;
class StructureManager;
struct ActorDefinitionIdentifier;
// clang-format on

class FeaturePoolElement : public ::StructurePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkba215a;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePoolElement& operator=(FeaturePoolElement const&);
    FeaturePoolElement(FeaturePoolElement const&);
    FeaturePoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;

    // vIndex: 1
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;

    // vIndex: 8
    virtual bool place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const /*override*/;

    // vIndex: 15
    virtual ::StructurePoolElementType type() const /*override*/;

    // vIndex: 14
    virtual ~FeaturePoolElement() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FeaturePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager,
        ::WeakRef<::IFeature>                             feature
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::StructureManager> structureManager, ::WeakRef<::IFeature> feature);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockPos $getSize(::Rotation rotation) const;

    MCNAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCNAPI bool $place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;

    MCNAPI ::StructurePoolElementType $type() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
