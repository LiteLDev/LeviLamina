#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
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
    ::ll::UntypedStorage<8, 16> mUnka0bf51;
    ::ll::UntypedStorage<8, 16> mUnkab425c;
    ::ll::UntypedStorage<8, 16> mUnk206103;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelChunkMetaDataManager& operator=(LevelChunkMetaDataManager const&);
    LevelChunkMetaDataManager(LevelChunkMetaDataManager const&);
    LevelChunkMetaDataManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _onNewDimensionCreated(::Dimension& dimension);

    MCAPI ::std::shared_ptr<::LevelChunkMetaDataDictionary> getLevelChunkMetaDataDictionary() const;

    MCAPI void registerForLevelChunkEvents(::ILevelChunkEventManagerConnector& levelChunkEventManagerConnector);

    MCAPI void registerOnNewDimensionCreated(::IDimensionManagerConnector& dimensionManagerConnector);

    MCAPI void tick();

    MCAPI void updateLevelChunkMetaDataForSaving(
        ::LevelChunk&                 lc,
        ::BaseGameVersion const&      currentBaseGameVersion,
        ::DimensionHeightRange const& dimensionHeightRange
    );

    MCAPI ~LevelChunkMetaDataManager();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void inferInitialMetaDataAfterDeserialization(
        ::LevelChunk&                 lc,
        ::LevelSeed64                 generationSeed,
        ::GeneratorType               generatorType,
        ::std::string const&          dimensionName,
        ::DimensionType               dimensionId,
        ::DimensionHeightRange const& dimensionHeightRange,
        ::BaseGameVersion const&      currentBaseGameVersion,
        ::LevelChunkMetaData&         metaData
    );

    MCAPI static void
    inferTargetMetaData(::BaseGameVersion const& version, ::DimensionType dimensionID, ::LevelChunkMetaData& metaData);

    MCAPI static ::std::shared_ptr<::LevelChunkMetaData> initializeLevelChunkMetaData(
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
    MCAPI void $dtor();
    // NOLINTEND
};
