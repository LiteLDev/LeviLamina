#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaDataDictionary {
public:
    // prevent constructor by default
    LevelChunkMetaDataDictionary& operator=(LevelChunkMetaDataDictionary const&);
    LevelChunkMetaDataDictionary(LevelChunkMetaDataDictionary const&);
    LevelChunkMetaDataDictionary();

public:
    // NOLINTBEGIN
    // symbol:
    // ?checkAndSerialize@LevelChunkMetaDataDictionary@@QEBAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
    MCAPI void checkAndSerialize(std::function<void(std::string const&)>) const;

    // symbol: ?deserialize@LevelChunkMetaDataDictionary@@QEAAXAEAVIDataInput@@@Z
    MCAPI void deserialize(class IDataInput& stream);

    // symbol:
    // ?registerMetaData@LevelChunkMetaDataDictionary@@QEAA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@AEBVLevelChunkMetaData@@@Z
    MCAPI std::shared_ptr<class LevelChunkMetaData> registerMetaData(class LevelChunkMetaData const&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_registerMetaData@LevelChunkMetaDataDictionary@@IEAA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@AEBVLevelChunkMetaData@@@Z
    MCAPI std::shared_ptr<class LevelChunkMetaData> _registerMetaData(class LevelChunkMetaData const&);

    // NOLINTEND
};
