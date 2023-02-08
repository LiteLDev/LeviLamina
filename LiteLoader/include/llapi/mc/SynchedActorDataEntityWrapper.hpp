/**
 * @file  SynchedActorDataEntityWrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SynchedActorDataEntityWrapper.
 *
 */
class SynchedActorDataEntityWrapper {

#define AFTER_EXTRA
public:
    template <typename T>
    MCAPI void define(unsigned short, T const&);
    template <typename T>
    MCAPI void set(unsigned short, T const&);
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SYNCHEDACTORDATAENTITYWRAPPER
public:
    class SynchedActorDataEntityWrapper& operator=(class SynchedActorDataEntityWrapper const &) = delete;
    SynchedActorDataEntityWrapper(class SynchedActorDataEntityWrapper const &) = delete;
    SynchedActorDataEntityWrapper() = delete;
#endif

public:
    /**
     * @hash   -789935848
     * @symbol  ??0SynchedActorDataEntityWrapper\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI SynchedActorDataEntityWrapper(class EntityContext &);
    /**
     * @hash   25394724
     * @symbol  ?getCompoundTag\@SynchedActorDataEntityWrapper\@\@QEBAAEBVCompoundTag\@\@G\@Z
     */
    MCAPI class CompoundTag const & getCompoundTag(unsigned short) const;
    /**
     * @hash   1980112920
     * @symbol  ?getFloat\@SynchedActorDataEntityWrapper\@\@QEBAMG\@Z
     */
    MCAPI float getFloat(unsigned short) const;
    /**
     * @hash   808764368
     * @symbol  ?getInt\@SynchedActorDataEntityWrapper\@\@QEBAHG\@Z
     */
    MCAPI int getInt(unsigned short) const;
    /**
     * @hash   -117406159
     * @symbol  ?getInt64\@SynchedActorDataEntityWrapper\@\@QEBA_JG\@Z
     */
    MCAPI __int64 getInt64(unsigned short) const;
    /**
     * @hash   -838028296
     * @symbol  ?getInt8\@SynchedActorDataEntityWrapper\@\@QEBACG\@Z
     */
    MCAPI signed char getInt8(unsigned short) const;
    /**
     * @hash   -521851336
     * @symbol  ?getPosition\@SynchedActorDataEntityWrapper\@\@QEBA?AVBlockPos\@\@G\@Z
     */
    MCAPI class BlockPos getPosition(unsigned short) const;
    /**
     * @hash   -2142850191
     * @symbol  ?getShort\@SynchedActorDataEntityWrapper\@\@QEBAFG\@Z
     */
    MCAPI short getShort(unsigned short) const;
    /**
     * @hash   -646516639
     * @symbol  ?getStatusFlag\@SynchedActorDataEntityWrapper\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const;
    /**
     * @hash   1765385180
     * @symbol  ?getString\@SynchedActorDataEntityWrapper\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCAPI std::string const & getString(unsigned short) const;
    /**
     * @hash   -912139316
     * @symbol  ?getVec3\@SynchedActorDataEntityWrapper\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const;
    /**
     * @hash   -126345756
     * @symbol  ?hasData\@SynchedActorDataEntityWrapper\@\@QEBA_NG\@Z
     */
    MCAPI bool hasData(unsigned short) const;
    /**
     * @hash   -954608588
     * @symbol  ?isDirty\@SynchedActorDataEntityWrapper\@\@QEBA_NXZ
     */
    MCAPI bool isDirty() const;
    /**
     * @hash   873287019
     * @symbol  ?markDirty\@SynchedActorDataEntityWrapper\@\@QEAAXG\@Z
     */
    MCAPI void markDirty(unsigned short);
    /**
     * @hash   -240406097
     * @symbol  ?packAll\@SynchedActorDataEntityWrapper\@\@QEBA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll() const;
    /**
     * @hash   -1098159409
     * @symbol  ?packDirty\@SynchedActorDataEntityWrapper\@\@QEAA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty();
    /**
     * @hash   -2042323848
     * @symbol  ?reader\@SynchedActorDataEntityWrapper\@\@QEBA?AVSynchedActorDataReader\@\@XZ
     */
    MCAPI class SynchedActorDataReader reader() const;
    /**
     * @hash   -721901223
     * @symbol  ?setStatusFlag\@SynchedActorDataEntityWrapper\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool);
    /**
     * @hash   838457242
     * @symbol  ?writer\@SynchedActorDataEntityWrapper\@\@QEAA?AVSynchedActorDataWriter\@\@XZ
     */
    MCAPI class SynchedActorDataWriter writer();
    /**
     * @hash   1664279593
     * @symbol  ??1SynchedActorDataEntityWrapper\@\@QEAA\@XZ
     */
    MCAPI ~SynchedActorDataEntityWrapper();

//private:
    /**
     * @hash   -737609409
     * @symbol  ?_get\@SynchedActorDataEntityWrapper\@\@AEAA?AV?$not_null\@PEAVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData *> _get();
    /**
     * @hash   1210920929
     * @symbol  ?_get\@SynchedActorDataEntityWrapper\@\@AEBA?AV?$not_null\@PEBVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData const *> _get() const;

private:

};