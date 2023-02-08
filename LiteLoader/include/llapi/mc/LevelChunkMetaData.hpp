/**
 * @file  LevelChunkMetaData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -767517647
     * @symbol  ??0LevelChunkMetaData\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI LevelChunkMetaData(class LevelChunkMetaData const &);
    /**
     * @hash   1809353405
     * @symbol  ??0LevelChunkMetaData\@\@QEAA\@AEAVIDataInput\@\@\@Z
     */
    MCAPI LevelChunkMetaData(class IDataInput &);
    /**
     * @hash   1902224059
     * @symbol  ?getCurrentHash\@LevelChunkMetaData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getCurrentHash() const;
    /**
     * @hash   519966302
     * @symbol  ?serialize\@LevelChunkMetaData\@\@QEBAXAEAVIDataOutput\@\@\@Z
     */
    MCAPI void serialize(class IDataOutput &) const;
    /**
     * @hash   1015563202
     * @symbol  ??1LevelChunkMetaData\@\@QEAA\@XZ
     */
    MCAPI ~LevelChunkMetaData();
    /**
     * @hash   2144987054
     * @symbol  ?INVALID_META_DATA\@LevelChunkMetaData\@\@2_KB
     */
    MCAPI static unsigned __int64 const INVALID_META_DATA;

//protected:
    /**
     * @hash   -1398089411
     * @symbol  ?_recomputeHash\@LevelChunkMetaData\@\@IEBAXXZ
     */
    MCAPI void _recomputeHash() const;

protected:

};