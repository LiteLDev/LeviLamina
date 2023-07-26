#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SynchedActorDataEntityWrapper {

public:
    // prevent constructor by default
    SynchedActorDataEntityWrapper& operator=(SynchedActorDataEntityWrapper const&) = delete;
    SynchedActorDataEntityWrapper(SynchedActorDataEntityWrapper const&)            = delete;
    SynchedActorDataEntityWrapper()                                                = delete;

public:
    /**
     * @symbol ??0SynchedActorDataEntityWrapper\@\@QEAA\@AEAVEntityContext\@\@\@Z
     */
    MCAPI SynchedActorDataEntityWrapper(class EntityContext&); // NOLINT
    /**
     * @symbol ?getCompoundTag\@SynchedActorDataEntityWrapper\@\@QEBAAEBVCompoundTag\@\@G\@Z
     */
    MCAPI class CompoundTag const& getCompoundTag(unsigned short) const; // NOLINT
    /**
     * @symbol ?getFloat\@SynchedActorDataEntityWrapper\@\@QEBAMG\@Z
     */
    MCAPI float getFloat(unsigned short) const; // NOLINT
    /**
     * @symbol ?getInt\@SynchedActorDataEntityWrapper\@\@QEBAHG\@Z
     */
    MCAPI int getInt(unsigned short) const; // NOLINT
    /**
     * @symbol ?getInt64\@SynchedActorDataEntityWrapper\@\@QEBA_JG\@Z
     */
    MCAPI __int64 getInt64(unsigned short) const; // NOLINT
    /**
     * @symbol ?getInt8\@SynchedActorDataEntityWrapper\@\@QEBACG\@Z
     */
    MCAPI signed char getInt8(unsigned short) const; // NOLINT
    /**
     * @symbol ?getPosition\@SynchedActorDataEntityWrapper\@\@QEBA?AVBlockPos\@\@G\@Z
     */
    MCAPI class BlockPos getPosition(unsigned short) const; // NOLINT
    /**
     * @symbol ?getShort\@SynchedActorDataEntityWrapper\@\@QEBAFG\@Z
     */
    MCAPI short getShort(unsigned short) const; // NOLINT
    /**
     * @symbol ?getStatusFlag\@SynchedActorDataEntityWrapper\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const; // NOLINT
    /**
     * @symbol
     * ?getString\@SynchedActorDataEntityWrapper\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@G\@Z
     */
    MCAPI std::string const& getString(unsigned short) const; // NOLINT
    /**
     * @symbol ?getVec3\@SynchedActorDataEntityWrapper\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const; // NOLINT
    /**
     * @symbol ?hasData\@SynchedActorDataEntityWrapper\@\@QEBA_NG\@Z
     */
    MCAPI bool hasData(unsigned short) const; // NOLINT
    /**
     * @symbol ?isDirty\@SynchedActorDataEntityWrapper\@\@QEBA_NXZ
     */
    MCAPI bool isDirty() const; // NOLINT
    /**
     * @symbol ?markDirty\@SynchedActorDataEntityWrapper\@\@QEAAXG\@Z
     */
    MCAPI void markDirty(unsigned short); // NOLINT
    /**
     * @symbol
     * ?packAll\@SynchedActorDataEntityWrapper\@\@QEBA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> packAll() const; // NOLINT
    /**
     * @symbol
     * ?packDirty\@SynchedActorDataEntityWrapper\@\@QEAA?AV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::unique_ptr<class DataItem>> packDirty(); // NOLINT
    /**
     * @symbol ?reader\@SynchedActorDataEntityWrapper\@\@QEBA?AVSynchedActorDataReader\@\@XZ
     */
    MCAPI class SynchedActorDataReader reader() const; // NOLINT
    /**
     * @symbol ?setStatusFlag\@SynchedActorDataEntityWrapper\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool); // NOLINT
    /**
     * @symbol ?writer\@SynchedActorDataEntityWrapper\@\@QEAA?AVSynchedActorDataWriter\@\@XZ
     */
    MCAPI class SynchedActorDataWriter writer(); // NOLINT
    /**
     * @symbol ??1SynchedActorDataEntityWrapper\@\@QEAA\@XZ
     */
    MCAPI ~SynchedActorDataEntityWrapper(); // NOLINT

    // private:
    /**
     * @symbol ?_get\@SynchedActorDataEntityWrapper\@\@AEAA?AV?$not_null\@PEAVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData*> _get(); // NOLINT
    /**
     * @symbol ?_get\@SynchedActorDataEntityWrapper\@\@AEBA?AV?$not_null\@PEBVSynchedActorData\@\@\@gsl\@\@XZ
     */
    MCAPI class gsl::not_null<class SynchedActorData const*> _get() const; // NOLINT

private:
};
