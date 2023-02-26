/**
 * @file  LevelChunkMetaDataDictionary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkMetaDataDictionary.
 *
 */
class LevelChunkMetaDataDictionary {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATADICTIONARY
public:
    class LevelChunkMetaDataDictionary& operator=(class LevelChunkMetaDataDictionary const &) = delete;
    LevelChunkMetaDataDictionary(class LevelChunkMetaDataDictionary const &) = delete;
    LevelChunkMetaDataDictionary() = delete;
#endif

public:
    /**
     * @symbol  ?checkAndSerialize\@LevelChunkMetaDataDictionary\@\@QEBAXV?$function\@$$A6AXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void checkAndSerialize(class std::function<void (std::string const &)>) const;
    /**
     * @symbol  ?deserialize\@LevelChunkMetaDataDictionary\@\@QEAAXAEAVIDataInput\@\@\@Z
     */
    MCAPI void deserialize(class IDataInput &);
    /**
     * @symbol  ?getMetaData\@LevelChunkMetaDataDictionary\@\@QEBA?AV?$shared_ptr\@$$CBVLevelChunkMetaData\@\@\@std\@\@_K\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData(unsigned __int64) const;
    /**
     * @symbol  ?registerMetaData\@LevelChunkMetaDataDictionary\@\@QEAA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@AEBVLevelChunkMetaData\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> registerMetaData(class LevelChunkMetaData const &);

//protected:
    /**
     * @symbol  ?_registerMetaData\@LevelChunkMetaDataDictionary\@\@IEAA?AV?$shared_ptr\@VLevelChunkMetaData\@\@\@std\@\@AEBVLevelChunkMetaData\@\@\@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> _registerMetaData(class LevelChunkMetaData const &);

protected:

};