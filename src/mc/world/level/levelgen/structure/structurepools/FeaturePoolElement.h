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
class IStructureTemplateManager;
class JigsawBlockInfo;
class LegacyStructureSettings;
class Random;
struct ActorDefinitionIdentifier;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
// clang-format on

class FeaturePoolElement : public ::StructurePoolElement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakRef<::IFeature>> mFeature;
    // NOLINTEND

public:
    // prevent constructor by default
    FeaturePoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;

    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const
        /*override*/;

    virtual bool place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const /*override*/;

    virtual ::StructurePoolElementType type() const /*override*/;

    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const /*override*/;

    virtual ~FeaturePoolElement() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FeaturePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager,
        ::WeakRef<::IFeature>                                      feature
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> structureManager, ::WeakRef<::IFeature> feature);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockPos $getSize(::Rotation rotation) const;

    MCAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCAPI bool $place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;

    MCFOLD ::StructurePoolElementType $type() const;

    MCAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
