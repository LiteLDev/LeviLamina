/**
 * @file  LevelChunkMetaData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class LevelChunkMetaData.
 *
 */
class LevelChunkMetaData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELCHUNKMETADATA
public:
    class LevelChunkMetaData& operator=(class LevelChunkMetaData const &) = delete;
    LevelChunkMetaData() = delete;
#endif

public:
    /**
     * @hash   -1458330575
     * @symbol ??0LevelChunkMetaData@@QEAA@AEBV0@@Z
     */
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const &);
    /**
     * @hash   1118601981
     * @symbol ??0LevelChunkMetaData@@QEAA@AEAVIDataInput@@@Z
     */
    MCAPI LevelChunkMetaData(class IDataInput &);
    /**
     * @hash   1211810907
     * @symbol ?getCurrentHash@LevelChunkMetaData@@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentHash() const;
    /**
     * @hash   274380830
     * @symbol ?serialize@LevelChunkMetaData@@QEBAXAEAVIDataOutput@@@Z
     */
    MCAPI void serialize(class IDataOutput &) const;
    /**
     * @hash   1503028530
     * @symbol ??1LevelChunkMetaData@@QEAA@XZ
     */
    MCAPI ~LevelChunkMetaData();
    /**
     * @hash   1096059398
     * @symbol ?INVALID_META_DATA@LevelChunkMetaData@@2_KB
     */
    MCAPI static unsigned __int64 const INVALID_META_DATA;

//protected:
    /**
     * @hash   1721402506
     * @symbol ?_deserialize@LevelChunkMetaData@@IEAAXAEAVIDataInput@@@Z
     */
    MCAPI void _deserialize(class IDataInput &);
    /**
     * @hash   -2088533315
     * @symbol ?_recomputeHash@LevelChunkMetaData@@IEBAXXZ
     */
    MCAPI void _recomputeHash() const;

protected:

};