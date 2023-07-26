#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelChunkMetaDataDictionary {

public:
    // prevent constructor by default
    LevelChunkMetaDataDictionary& operator=(LevelChunkMetaDataDictionary const&) = delete;
    LevelChunkMetaDataDictionary(LevelChunkMetaDataDictionary const&)            = delete;
    LevelChunkMetaDataDictionary()                                               = delete;

public:
    /**
     * @symbol
     * ?checkAndSerialize\@LevelChunkMetaDataDictionary\@\@QEBAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void checkAndSerialize(class std::function<void(std::string const&)>) const; // NOLINT
    /**
     * @symbol ?deserialize\@LevelChunkMetaDataDictionary\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserialize(class IDataInput&); // NOLINT
    /**
     * @symbol
     * ?getMetaData\@LevelChunkMetaDataDictionary\@\@QEBA?AV?$shared_ptr\@$$CBVLevelChunkMetaData\@\@\@std\@\@_K\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData(unsigned __int64) const; // NOLINT
    /**
     * @symbol
     * ?registerMetaData\@LevelChunkMetaDataDictionary\@\@QEAA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@AEBVLevelChunkMetaData\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> registerMetaData(class LevelChunkMetaData const&); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_registerMetaData\@LevelChunkMetaDataDictionary\@\@IEAA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@AEBVLevelChunkMetaData\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> _registerMetaData(class LevelChunkMetaData const&); // NOLINT

protected:
};
