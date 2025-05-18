#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/threading/Mutex.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/PostProcessSettings.h"
#include "mc/world/level/levelgen/structure/Projection.h"
#include "mc/world/level/levelgen/structure/structurepools/JigsawReplacement.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementSettings.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class JigsawBlockInfo;
class JigsawStructureBlockInfo;
class LegacyStructureSettings;
class Random;
class StructureManager;
class StructurePoolActorRule;
class StructurePoolBlockRule;
class StructurePoolBlockTagRule;
struct ActorDefinitionIdentifier;
struct StructureTemplateRegistrationContext;
namespace Bedrock::Threading { class Mutex; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadata; }
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
    using StructureProcessorPtr = ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>;

    using StructureProcessorList =
        ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>>;

    class ITemplate {
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 0
        virtual ~ITemplate();

        // vIndex: 1
        virtual ::std::vector<::JigsawBlockInfo> const& getJigsawMarkers() const = 0;

        // vIndex: 2
        virtual ::BlockPos getSize(::Rotation) const = 0;

        // vIndex: 3
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
        // vIndex: 1
        virtual ::std::vector<::JigsawBlockInfo> const& getJigsawMarkers() const /*override*/;

        // vIndex: 2
        virtual ::BlockPos getSize(::Rotation rotation) const /*override*/;

        // vIndex: 3
        virtual bool isLegacyStructure() const /*override*/;

        // vIndex: 0
        virtual ~LazyTemplate() /*override*/ = default;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI LazyTemplate(
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                    manager,
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
            ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                    manager,
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

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::SharedTypes::v1_21_50::JigsawStructureMetadata>> mMetadata;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                                        mMetadataMutex;
    ::ll::TypedStorage<8, 8, ::std::once_flag>                                                    mTemplateOnceFlag;
    ::ll::TypedStorage<8, 56, ::std::optional<::StructurePoolElement::LazyTemplate>>              mTemplate;
    ::ll::TypedStorage<8, 8, uint64>                                                              mMetadataKey;
    ::ll::TypedStorage<8, 32, ::std::string>                                                      mLocation;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::StructureManager>>                  mManager;
    ::ll::TypedStorage<8, 32, ::StructurePoolElementSettings>                                     mSettings;
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
    // vIndex: 0
    virtual ::BlockPos getSize(::Rotation rotation) const;

    // vIndex: 2
    virtual ::std::vector<::JigsawBlockInfo> getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    // vIndex: 1
    virtual ::std::vector<::JigsawBlockInfo>
    getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    // vIndex: 3
    virtual ::BoundingBox getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    // vIndex: 4
    virtual void setProjection(::Projection projection);

    // vIndex: 5
    virtual ::Projection getProjection() const;

    // vIndex: 6
    virtual ::PostProcessSettings getPostProcessSettings() const;

    // vIndex: 8
    virtual bool place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;

    // vIndex: 7
    virtual bool place(
        ::BlockSource&                    region,
        ::BlockPos                        position,
        ::BlockPos                        sectionOrigin,
        ::BoundingBox                     chunkBB,
        ::Rotation                        rotation,
        ::IRandom&                        random,
        ::br::worldgen::JigsawReplacement jigsaw
    ) const;

    // vIndex: 9
    virtual void placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;

    // vIndex: 10
    virtual void
    placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;

    // vIndex: 11
    virtual void
    handleJigsawBlock(::BlockSource& region, ::JigsawBlockInfo& jigsawBlock, ::LegacyStructureSettings& settings) const;

    // vIndex: 12
    virtual void handleDataMarker(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      markerPos,
        ::std::string                                                                   markerData,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    // vIndex: 13
    virtual bool isValid() const;

    // vIndex: 14
    virtual ~StructurePoolElement();

    // vIndex: 15
    virtual ::StructurePoolElementType type() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::std::string const&                              location,
        ::StructurePoolElementSettings                    settings
    );

    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::std::string const&                              location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
                     processors,
        ::Projection projection
    );

    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::std::string const&                              location,
        ::Projection                                      projection,
        ::PostProcessSettings                             postProcessSettings
    );

    MCAPI StructurePoolElement(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                    manager,
        ::std::string const&                                                 location,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockRule>> const*    blockRules,
        ::std::vector<::std::unique_ptr<::StructurePoolBlockTagRule>> const* blockTagRules,
        ::std::vector<::std::unique_ptr<::StructurePoolActorRule>> const*    actorRules,
        ::Projection                                                         projection,
        ::PostProcessSettings                                                postProcessSettings
    );

    MCAPI ::std::unique_ptr<::SharedTypes::v1_21_50::JigsawStructureMetadata> _createMetadata() const;

    MCAPI ::SharedTypes::v1_21_50::JigsawStructureMetadata const& _getMetadata() const;

    MCAPI uint64 _getMetadataKey() const;

    MCAPI ::StructurePoolElement::LazyTemplate const& _getTemplate() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(::std::string_view location);

    MCAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
    single(
        ::std::string_view location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
            processors
    );

    MCAPI static ::std::function<::StructurePoolElement const&(::StructureTemplateRegistrationContext, ::Projection)>
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
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::std::string const&                              location,
        ::StructurePoolElementSettings                    settings
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::std::string const&                              location,
        ::gsl::not_null<::std::shared_ptr<
            ::std::vector<::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> const>>
                     processors,
        ::Projection projection
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager> manager,
        ::std::string const&                              location,
        ::Projection                                      projection,
        ::PostProcessSettings                             postProcessSettings
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::StructureManager>                    manager,
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
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockPos $getSize(::Rotation rotation) const;

    MCAPI ::std::vector<::JigsawBlockInfo> $getJigsawMarkers(::BlockPos position, ::Rotation rotation) const;

    MCAPI ::std::vector<::JigsawBlockInfo>
    $getJigsawMarkers(::BlockPos position, ::LegacyStructureSettings& settings, ::BlockSource* region) const;

    MCAPI ::BoundingBox $getBoundingBox(::BlockPos position, ::Rotation rotation) const;

    MCFOLD void $setProjection(::Projection projection);

    MCAPI ::Projection $getProjection() const;

    MCAPI ::PostProcessSettings $getPostProcessSettings() const;

    MCAPI bool $place(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      position,
        ::Rotation                                                                      rotation,
        ::BoundingBox                                                                   chunkBB,
        ::Random&                                                                       random,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace,
        ::BlockPos                                                                      refPos
    ) const;

    MCAPI bool $place(
        ::BlockSource&                    region,
        ::BlockPos                        position,
        ::BlockPos                        sectionOrigin,
        ::BoundingBox                     chunkBB,
        ::Rotation                        rotation,
        ::IRandom&                        random,
        ::br::worldgen::JigsawReplacement jigsaw
    ) const;

    MCAPI void $placeActors(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::Random& random) const;

    MCAPI void
    $placeEntities(::BlockSource& region, ::BlockPos position, ::Rotation rotation, ::BoundingBox overlapBB) const;

    MCAPI void
    $handleJigsawBlock(::BlockSource& region, ::JigsawBlockInfo& jigsawBlock, ::LegacyStructureSettings& settings)
        const;

    MCAPI void $handleDataMarker(
        ::BlockSource&                                                                  region,
        ::BlockPos                                                                      markerPos,
        ::std::string                                                                   markerData,
        ::std::unordered_map<::BlockPos, ::std::optional<::ActorDefinitionIdentifier>>& entitiesToPlace
    ) const;

    MCAPI bool $isValid() const;

    MCFOLD ::StructurePoolElementType $type() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
