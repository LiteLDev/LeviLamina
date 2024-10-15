#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

class StructurePoolElement {
public:
    // StructurePoolElement inner types declare
    // clang-format off
    class LazyTemplate;
    // clang-format on

    // StructurePoolElement inner types define
    class LazyTemplate {
    public:
        // prevent constructor by default
        LazyTemplate& operator=(LazyTemplate const&);
        LazyTemplate(LazyTemplate const&);
        LazyTemplate();

    public:
        // NOLINTBEGIN
        MCAPI LazyTemplate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                  manager,
            std::string const&                                                   location,
            std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules
        );

        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        MCAPI static std::vector<class JigsawBlockInfo> _findJigsawBlocks(
            std::vector<class JigsawStructureBlockInfo>&                         jigsawMarkers,
            std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules
        );

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void* ctor$(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                  manager,
            std::string const&                                                   location,
            std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules
        );

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructurePoolElement& operator=(StructurePoolElement const&);
    StructurePoolElement(StructurePoolElement const&);
    StructurePoolElement();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual class BlockPos getSize(::Rotation rotation) const;

    // vIndex: 1
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos position, ::Rotation rotation) const;

    // vIndex: 2
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos position, class LegacyStructureSettings& settings, class BlockSource* region) const;

    // vIndex: 3
    virtual class BoundingBox getBoundingBox(class BlockPos position, ::Rotation rotation) const;

    // vIndex: 4
    virtual void setProjection(::Projection projection);

    // vIndex: 5
    virtual ::Projection getProjection() const;

    // vIndex: 6
    virtual ::PostProcessSettings getPostProcessSettings() const;

    // vIndex: 7
    virtual bool place(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       position,
        ::Rotation                                                                           rotation,
        class BoundingBox                                                                    chunkBB,
        class Random&                                                                        random,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace,
        class BlockPos                                                                       refPos
    ) const;

    // vIndex: 8
    virtual void
    placeActors(class BlockSource& region, class BlockPos position, ::Rotation rotation, class Random& random) const;

    // vIndex: 9
    virtual void handleJigsawBlock(
        class BlockSource&             region,
        class JigsawBlockInfo&         jigsawBlock,
        class LegacyStructureSettings& settings
    ) const;

    // vIndex: 10
    virtual void handleDataMarker(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       markerPos,
        std::string                                                                          markerData,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    // vIndex: 11
    virtual bool isValid() const;

    // vIndex: 12
    virtual ~StructurePoolElement();

    // vIndex: 13
    virtual ::StructurePoolElementType type() const;

    MCAPI StructurePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        std::string const&                                  location,
        struct StructurePoolElementSettings                 settings
    );

    MCAPI StructurePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        std::string const&                                  location,
        ::Projection                                        projection,
        ::PostProcessSettings                               postProcessSettings
    );

    MCAPI StructurePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager>                  manager,
        std::string const&                                                   location,
        std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*    blockRules,
        std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules,
        std::vector<std::unique_ptr<class StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
    );

    MCAPI static std::function<
        class StructurePoolElement const&(struct StructureTemplateRegistrationContext, ::Projection)>
    empty();

    MCAPI static std::function<
        class StructurePoolElement const&(struct StructureTemplateRegistrationContext, ::Projection)>
    single(std::string_view location);

    MCAPI static std::function<
        class StructurePoolElement const&(struct StructureTemplateRegistrationContext, ::Projection)>
    single(std::string_view location, std::vector<std::unique_ptr<class StructurePoolBlockRule>> const* blockRules);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class StructurePoolElement::LazyTemplate const& _getTemplate() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        std::string const&                                  location,
        ::Projection                                        projection,
        ::PostProcessSettings                               postProcessSettings
    );

    MCAPI void* ctor$(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        std::string const&                                  location,
        struct StructurePoolElementSettings                 settings
    );

    MCAPI void* ctor$(
        Bedrock::NotNullNonOwnerPtr<class StructureManager>                  manager,
        std::string const&                                                   location,
        std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*    blockRules,
        std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules,
        std::vector<std::unique_ptr<class StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
    );

    MCAPI void dtor$();

    MCAPI class BoundingBox getBoundingBox$(class BlockPos position, ::Rotation rotation) const;

    MCAPI std::vector<class JigsawBlockInfo> getJigsawMarkers$(class BlockPos position, ::Rotation rotation) const;

    MCAPI std::vector<class JigsawBlockInfo>
          getJigsawMarkers$(class BlockPos position, class LegacyStructureSettings& settings, class BlockSource* region)
        const;

    MCAPI ::PostProcessSettings getPostProcessSettings$() const;

    MCAPI ::Projection getProjection$() const;

    MCAPI class BlockPos getSize$(::Rotation rotation) const;

    MCAPI void handleDataMarker$(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       markerPos,
        std::string                                                                          markerData,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    MCAPI void handleJigsawBlock$(
        class BlockSource&             region,
        class JigsawBlockInfo&         jigsawBlock,
        class LegacyStructureSettings& settings
    ) const;

    MCAPI bool isValid$() const;

    MCAPI bool place$(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       position,
        ::Rotation                                                                           rotation,
        class BoundingBox                                                                    chunkBB,
        class Random&                                                                        random,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace,
        class BlockPos                                                                       refPos
    ) const;

    MCAPI void
    placeActors$(class BlockSource& region, class BlockPos position, ::Rotation rotation, class Random& random) const;

    MCAPI void setProjection$(::Projection projection);

    MCAPI ::StructurePoolElementType type$() const;

    // NOLINTEND
};
