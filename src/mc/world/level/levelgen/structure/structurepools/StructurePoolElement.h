#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/PostProcessSettings.h"
#include "mc/enums/Projection.h"
#include "mc/enums/Rotation.h"
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
        // symbol:
        // ??0LazyTemplate@StructurePoolElement@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@5@@Z
        MCAPI LazyTemplate(
            Bedrock::NotNullNonOwnerPtr<class StructureManager>                  manager,
            std::string const&                                                   location,
            std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules
        );

        // NOLINTEND

        // protected:
        // NOLINTBEGIN
        // symbol:
        // ?_findJigsawBlocks@LazyTemplate@StructurePoolElement@@KA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@AEAV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@4@PEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@4@@Z
        MCAPI static std::vector<class JigsawBlockInfo> _findJigsawBlocks(
            std::vector<class JigsawStructureBlockInfo>&                         jigsawMarkers,
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
    // vIndex: 0, symbol: ?getSize@StructurePoolElement@@UEBA?AVBlockPos@@W4Rotation@@@Z
    virtual class BlockPos getSize(::Rotation rotation) const;

    // vIndex: 1, symbol:
    // ?getJigsawMarkers@StructurePoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@W4Rotation@@@Z
    virtual std::vector<class JigsawBlockInfo> getJigsawMarkers(class BlockPos position, ::Rotation rotation) const;

    // vIndex: 2, symbol:
    // ?getJigsawMarkers@StructurePoolElement@@UEBA?AV?$vector@VJigsawBlockInfo@@V?$allocator@VJigsawBlockInfo@@@std@@@std@@VBlockPos@@AEAVLegacyStructureSettings@@PEAVBlockSource@@@Z
    virtual std::vector<class JigsawBlockInfo>
    getJigsawMarkers(class BlockPos position, class LegacyStructureSettings& settings, class BlockSource* region) const;

    // vIndex: 3, symbol: ?getBoundingBox@StructurePoolElement@@UEBA?AVBoundingBox@@VBlockPos@@W4Rotation@@@Z
    virtual class BoundingBox getBoundingBox(class BlockPos position, ::Rotation rotation) const;

    // vIndex: 4, symbol: ?setProjection@StructurePoolElement@@UEAAXW4Projection@@@Z
    virtual void setProjection(::Projection projection);

    // vIndex: 5, symbol: ?getProjection@StructurePoolElement@@UEBA?AW4Projection@@XZ
    virtual ::Projection getProjection() const;

    // vIndex: 6, symbol: ?getPostProcessSettings@StructurePoolElement@@UEBA?AW4PostProcessSettings@@XZ
    virtual ::PostProcessSettings getPostProcessSettings() const;

    // vIndex: 7, symbol:
    // ?place@StructurePoolElement@@UEBA_NAEAVBlockSource@@VBlockPos@@W4Rotation@@VBoundingBox@@AEAVRandom@@AEAV?$unordered_map@VBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@@std@@@3@@std@@1@Z
    virtual bool place(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       position,
        ::Rotation                                                                           rotation,
        class BoundingBox                                                                    chunkBB,
        class Random&                                                                        random,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace,
        class BlockPos                                                                       refPos
    ) const;

    // vIndex: 8, symbol: ?placeActors@StructurePoolElement@@UEBAXAEAVBlockSource@@VBlockPos@@W4Rotation@@AEAVRandom@@@Z
    virtual void
    placeActors(class BlockSource& region, class BlockPos position, ::Rotation rotation, class Random& random) const;

    // vIndex: 9, symbol:
    // ?handleJigsawBlock@StructurePoolElement@@UEBAXAEAVBlockSource@@AEAVJigsawBlockInfo@@AEAVLegacyStructureSettings@@@Z
    virtual void handleJigsawBlock(
        class BlockSource&             region,
        class JigsawBlockInfo&         jigsawBlock,
        class LegacyStructureSettings& settings
    ) const;

    // vIndex: 10, symbol:
    // ?handleDataMarker@StructurePoolElement@@UEBAXAEAVBlockSource@@VBlockPos@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAV?$unordered_map@VBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@U?$hash@VBlockPos@@@3@U?$equal_to@VBlockPos@@@3@V?$allocator@U?$pair@$$CBVBlockPos@@V?$optional@UActorDefinitionIdentifier@@@std@@@std@@@3@@5@@Z
    virtual void handleDataMarker(
        class BlockSource&                                                                   region,
        class BlockPos                                                                       markerPos,
        std::string                                                                          markerData,
        std::unordered_map<class BlockPos, std::optional<struct ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    // vIndex: 11, symbol: ?isValid@StructurePoolElement@@UEBA_NXZ
    virtual bool isValid() const;

    // vIndex: 12, symbol: ??1StructurePoolElement@@UEAA@XZ
    virtual ~StructurePoolElement();

    // vIndex: 13, symbol: ?type@StructurePoolElement@@UEBA?AW4StructurePoolElementType@@XZ
    virtual ::StructurePoolElementType type() const;

    // symbol:
    // ??0StructurePoolElement@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UStructurePoolElementSettings@@@Z
    MCAPI StructurePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        std::string const&                                  location,
        struct StructurePoolElementSettings                 settings
    );

    // symbol:
    // ??0StructurePoolElement@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Projection@@W4PostProcessSettings@@@Z
    MCAPI StructurePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager> manager,
        std::string const&                                  location,
        ::Projection                                        projection,
        ::PostProcessSettings                               postProcessSettings
    );

    // symbol:
    // ??0StructurePoolElement@@QEAA@V?$not_null@V?$NonOwnerPointer@VStructureManager@@@Bedrock@@@gsl@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@4@PEBV?$vector@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockTagRule@@U?$default_delete@VStructurePoolBlockTagRule@@@std@@@std@@@2@@4@PEBV?$vector@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolActorRule@@U?$default_delete@VStructurePoolActorRule@@@std@@@std@@@2@@4@W4Projection@@W4PostProcessSettings@@@Z
    MCAPI StructurePoolElement(
        Bedrock::NotNullNonOwnerPtr<class StructureManager>                  manager,
        std::string const&                                                   location,
        std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*    blockRules,
        std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const* blockTagRules,
        std::vector<std::unique_ptr<class StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
    );

    // symbol:
    // ?empty@StructurePoolElement@@SA?AV?$function@$$A6AAEBVStructurePoolElement@@UStructureTemplateRegistrationContext@@W4Projection@@@Z@std@@XZ
    MCAPI static std::function<
        class StructurePoolElement const&(struct StructureTemplateRegistrationContext, ::Projection)>
    empty();

    // symbol:
    // ?single@StructurePoolElement@@SA?AV?$function@$$A6AAEBVStructurePoolElement@@UStructureTemplateRegistrationContext@@W4Projection@@@Z@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
    MCAPI static std::function<
        class StructurePoolElement const&(struct StructureTemplateRegistrationContext, ::Projection)>
        single(std::string_view);

    // symbol:
    // ?single@StructurePoolElement@@SA?AV?$function@$$A6AAEBVStructurePoolElement@@UStructureTemplateRegistrationContext@@W4Projection@@@Z@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@PEBV?$vector@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@V?$allocator@V?$unique_ptr@VStructurePoolBlockRule@@U?$default_delete@VStructurePoolBlockRule@@@std@@@std@@@2@@3@@Z
    MCAPI static std::function<
        class StructurePoolElement const&(struct StructureTemplateRegistrationContext, ::Projection)>
    single(std::string_view, std::vector<std::unique_ptr<class StructurePoolBlockRule>> const*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getTemplate@StructurePoolElement@@AEBAAEBVLazyTemplate@1@XZ
    MCAPI class StructurePoolElement::LazyTemplate const& _getTemplate() const;

    // NOLINTEND
};
