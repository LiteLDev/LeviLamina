/**
 * @file  MC/LevelChunkMetaDataDictionary.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   2086500065
     * @symbol ?checkAndSerialize@LevelChunkMetaDataDictionary@@QEBAXV?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@@Z
     */
    MCAPI void checkAndSerialize(class std::function<void (std::string const &)>) const;
    /**
     * @hash   -1964393190
     * @symbol ?deserialize@LevelChunkMetaDataDictionary@@QEAAXAEAVIDataInput@@@Z
     */
    MCAPI void deserialize(class IDataInput &);
    /**
     * @hash   -1351682339
     * @symbol ?getMetaData@LevelChunkMetaDataDictionary@@QEBA?AV?$shared_ptr@$$CBVLevelChunkMetaData@@@std@@_K@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData const> getMetaData(unsigned __int64) const;
    /**
     * @hash   2146419756
     * @symbol ?registerMetaData@LevelChunkMetaDataDictionary@@QEAA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@AEBVLevelChunkMetaData@@@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> registerMetaData(class LevelChunkMetaData const &);

//protected:
    /**
     * @hash   104866747
     * @symbol ?_registerMetaData@LevelChunkMetaDataDictionary@@IEAA?AV?$shared_ptr@VLevelChunkMetaData@@@std@@AEBVLevelChunkMetaData@@@Z
     */
    MCAPI class std::shared_ptr<class LevelChunkMetaData> _registerMetaData(class LevelChunkMetaData const &);

protected:

};