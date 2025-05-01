#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/world/level/GeneratorType.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Dimension;
class DimensionHeightRange;
class IDimensionManagerConnector;
class ILevelChunkEventManagerConnector;
class LevelChunk;
class LevelChunkMetaData;
class LevelChunkMetaDataDictionary;
class LevelSeed64;
// clang-format on

class LevelChunkMetaDataManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::LevelChunkMetaDataDictionary>> mLevelChunkMetaDataDictionary;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnNewDimensionCreatedSubscription;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mOnChunkLoadedSubscription;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _consolidateLevelChunkMetaData(::LevelChunk& levelChunk);

    MCNAPI void _onNewDimensionCreated(::Dimension& dimension);

    MCNAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    MCNAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCNAPI void registerOnNewDimensionCreated(::IDimensionManagerConnector& dimensionManagerConnector);

    MCNAPI void updateLevelChunkMetaDataForSaving(
        ::LevelChunk&                 lc,
        ::BaseGameVersion const&      currentBaseGameVersion,
        ::DimensionHeightRange const& dimensionHeightRange
    );

    MCNAPI ~LevelChunkMetaDataManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void inferInitialMetaDataAfterDeserialization(
        ::LevelChunk&                 lc,
        ::LevelSeed64                 generationSeed,
        ::GeneratorType               generatorType,
        ::std::string const&          dimensionName,
        ::DimensionType               dimensionId,
        ::DimensionHeightRange const& dimensionHeightRange,
        ::BaseGameVersion const&      currentBaseGameVersion,
        ::LevelChunkMetaData&         metaData
    );

    MCNAPI static ::std::shared_ptr<::LevelChunkMetaData> initializeLevelChunkMetaData(
        ::DimensionType               dimensionId,
        ::std::string const&          dimensionName,
        ::DimensionHeightRange const& dimensionHeightRange,
        bool                          use3DBiomeMaps,
        ::LevelSeed64                 levelSeed,
        ::GeneratorType               generatorType,
        ::BaseGameVersion const&      baseGameVersion
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
