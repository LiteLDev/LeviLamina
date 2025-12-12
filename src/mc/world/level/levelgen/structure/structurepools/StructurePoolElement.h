#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/once_flag.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementSettings.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"
#include "mc/world/level/levelgen/v2/LiquidSettings.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class IStructureTemplateManager;
class JigsawBlockInfo;
class JigsawStructureBlockInfo;
class LegacyStructureSettings;
class Random;
class StructurePoolActorRule;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
struct ActorDefinitionIdentifier;
struct StructureTemplateRegistrationContext;
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadata; }
namespace br::worldgen { struct StructureProcessor; }
// clang-format on

class StructurePoolElement {
public:
    // StructurePoolElement inner types declare
    // clang-format off
    class ITemplate;
    class LazyTemplate;
    // clang-format on

    // StructurePoolElement inner types define
    class ITemplate {
    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ~ITemplate();

        virtual ::std::vector<::JigsawBlockInfo> const& getJigsawMarkers() const = 0;

        virtual ::BlockPos getSize(::Rotation) const = 0;

        virtual bool isLegacyStructure() const = 0;
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    class LazyTemplate : public ::StructurePoolElement::ITemplate {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk127613;
        ::ll::UntypedStorage<8, 24> mUnk5a0bbf;
        // NOLINTEND

    public:
        // prevent constructor by default
        LazyTemplate& operator=(LazyTemplate const&);
        LazyTemplate(LazyTemplate const&);
        LazyTemplate();

    public:
        // virtual functions
        // NOLINTBEGIN
        virtual ::std::vector<::JigsawBlockInfo> const& getJigsawMarkers() const /*override*/;

        virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;

        virtual bool isLegacyStructure() const /*override*/;

        virtual ~LazyTemplate() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LazyTemplate(
            ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>           manager,
            ::std::string const&                                                 location,
            ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules
        );
        // NOLINTEND

    public:
        // static functions
        // NOLINTBEGIN
        MCNAPI static ::std::vector<::JigsawBlockInfo> _findJigsawBlocks(
            ::std::vector<::JigsawStructureBlockInfo>&                           jigsawMarkers,
            ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>           manager,
            ::std::string const&                                                 location,
            ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules
        );
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI ::std::vector<::JigsawBlockInfo> const& $getJigsawMarkers() const;

        MCNAPI ::BlockPos $getSize(::Rotation rotation) const;

        MCNAPI bool $isLegacyStructure() const;


        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    using StructureProcessorList =
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;

    using StructureProcessorPtr = ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata>> mMetadata;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                         mMetadataMutex;
    ::ll::TypedStorage<4, 4, ::brstd::once_flag>                                                   mTemplateOnceFlag;
    ::ll::TypedStorage<8, 56, ::std::optional<::StructurePoolElement::LazyTemplate>>               mTemplate;
    ::ll::TypedStorage<8, 8, uint64>                                                               mMetadataKey;
    ::ll::TypedStorage<8, 32, ::std::string>                                                       mLocation;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>>          mManager;
    ::ll::TypedStorage<8, 32, ::StructurePoolElementSettings>                                      mSettings;
    ::ll::TypedStorage<
        8,
        16,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>>
                                   mProcessors;
    ::ll::TypedStorage<1, 1, bool> mValid;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolElement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::BlockPos getSize(::Rotation rotation) const;

    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    virtual void setProjection(::Projection projection);

    virtual ::Projection getProjection() const;

    virtual ::PostProcessSettings getPostProcessSettings() const;

    virtual bool place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;

    virtual bool place(
        ::BlockSource&                    region,
        ::BlockPos                        position,
        ::BlockPos                        sectionOrigin,
        ::BoundingBox                     chunkBB,
        ::Rotation                        rotation,
        ::IRandom&                        random,
        ::br::worldgen::JigsawReplacement jigsaw,
        ::br::worldgen::LiquidSettings    liquidSettings
    ) const;

    virtual void placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;

    virtual void
    placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;

    virtual void
    handleJigsawBlock(::BlockSource& region, ::JigsawBlockInfo& jigsawBlock, ::LegacyStructureSettings& settings) const;

    virtual void handleDataMarker(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      markerPos,
        ::std::string                                                                   markerData,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    virtual bool isValid() const;

    virtual ~StructurePoolElement();

    virtual ::StructurePoolElementType type() const;

    virtual ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> createMetadata() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::StructurePoolElementSettings                             settings
    );

    MCNAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
                     processors,
        ::Projection projection
    );

    MCNAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::Projection                                               projection,
        ::PostProcessSettings                                      postProcessSettings
    );

    MCNAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>           manager,
        ::std::string const&                                                 location,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*    blockRules,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules,
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
    );

    MCNAPI ::SharedTypes::v1_21_80::JigsawStructureMetadata const& _getMetadata() const;

    MCNAPI uint64 _getMetadataKey() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(::std::string_view location);

    MCNAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(
        ::std::string_view location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
            processors
    );

    MCNAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(
        ::std::string_view                                                   location,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*    blockRules,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules,
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*    actorRules
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::StructurePoolElementSettings                             settings
    );

    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
                     processors,
        ::Projection projection
    );

    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager> manager,
        ::std::string const&                                       location,
        ::Projection                                               projection,
        ::PostProcessSettings                                      postProcessSettings
    );

    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IStructureTemplateManager>           manager,
        ::std::string const&                                                 location,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*    blockRules,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules,
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
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
    MCNAPI ::BlockPos $getSize(::Rotation rotation) const;

    MCNAPI ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    MCNAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCNAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    MCNAPI void $setProjection(::Projection projection);

    MCNAPI ::Projection $getProjection() const;

    MCNAPI ::PostProcessSettings $getPostProcessSettings() const;

    MCNAPI bool $place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;

    MCNAPI bool $place(
        ::BlockSource&                    region,
        ::BlockPos                        position,
        ::BlockPos                        sectionOrigin,
        ::BoundingBox                     chunkBB,
        ::Rotation                        rotation,
        ::IRandom&                        random,
        ::br::worldgen::JigsawReplacement jigsaw,
        ::br::worldgen::LiquidSettings    liquidSettings
    ) const;

    MCNAPI void $placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;

    MCNAPI void
    $placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;

    MCNAPI void $handleJigsawBlock(
        ::BlockSource&             region,
        ::JigsawBlockInfo&         jigsawBlock,
        ::LegacyStructureSettings& settings
    ) const;

    MCNAPI void $handleDataMarker(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      markerPos,
        ::std::string                                                                   markerData,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    MCNAPI bool $isValid() const;

    MCNAPI ::StructurePoolElementType $type() const;

    MCNAPI ::std::shared_ptr<::SharedTypes::v1_21_80::JigsawStructureMetadata> $createMetadata() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
