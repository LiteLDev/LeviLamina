#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SynchedActorData {

public:
    // prevent constructor by default
    SynchedActorData& operator=(SynchedActorData const&) = delete;
    SynchedActorData(SynchedActorData const&)            = delete;

public:
    /**
     * @symbol ??0SynchedActorData\@\@QEAA\@XZ
     */
    MCAPI SynchedActorData(); // NOLINT
    /**
     * @symbol ??0SynchedActorData\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI SynchedActorData(class SynchedActorData&&); // NOLINT
    /**
     * @symbol ?_clone\@SynchedActorData\@\@QEBA?AV1\@XZ
     */
    MCAPI class SynchedActorData _clone() const; // NOLINT
    /**
     * @symbol
     * ?assignValues\@SynchedActorData\@\@QEAA_NAEBV?$vector\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@V?$allocator\@V?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@2\@\@std\@\@PEAVActor\@\@\@Z
     */
    MCAPI bool assignValues(std::vector<std::unique_ptr<class DataItem>> const&, class Actor*); // NOLINT
    /**
     * @symbol
     * ?forEachDataItem\@SynchedActorData\@\@QEBAXAEBV?$function\@$$A6AXAEBV?$unique_ptr\@VDataItem\@\@U?$default_delete\@VDataItem\@\@\@std\@\@\@std\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void
    forEachDataItem(class std::function<void(std::unique_ptr<class DataItem> const&)> const&) const; // NOLINT
    /**
     * @symbol ?getFloat\@SynchedActorData\@\@QEBAMG\@Z
     */
    MCAPI float getFloat(unsigned short) const; // NOLINT
    /**
     * @symbol ?getInt\@SynchedActorData\@\@QEBAHG\@Z
     */
    MCAPI int getInt(unsigned short) const; // NOLINT
    /**
     * @symbol ?getInt64\@SynchedActorData\@\@QEBA_JG\@Z
     */
    MCAPI __int64 getInt64(unsigned short) const; // NOLINT
    /**
     * @symbol ?getInt8\@SynchedActorData\@\@QEBACG\@Z
     */
    MCAPI signed char getInt8(unsigned short) const; // NOLINT
    /**
     * @symbol ?getStatusFlag\@SynchedActorData\@\@QEBA_NW4ActorFlags\@\@\@Z
     */
    MCAPI bool getStatusFlag(enum class ActorFlags) const; // NOLINT
    /**
     * @symbol ?getValidDataItemCount\@SynchedActorData\@\@QEBA_KXZ
     */
    MCAPI unsigned __int64 getValidDataItemCount() const; // NOLINT
    /**
     * @symbol ?getVec3\@SynchedActorData\@\@QEBA?AVVec3\@\@G\@Z
     */
    MCAPI class Vec3 getVec3(unsigned short) const; // NOLINT
    /**
     * @symbol ?markDirty\@SynchedActorData\@\@QEAAXG\@Z
     */
    MCAPI void markDirty(unsigned short); // NOLINT
    /**
     * @symbol ??4SynchedActorData\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class SynchedActorData& operator=(class SynchedActorData&&); // NOLINT
    /**
     * @symbol ?setStatusFlag\@SynchedActorData\@\@QEAAXW4ActorFlags\@\@_N\@Z
     */
    MCAPI void setStatusFlag(enum class ActorFlags, bool); // NOLINT
    /**
     * @symbol ??1SynchedActorData\@\@QEAA\@XZ
     */
    MCAPI ~SynchedActorData(); // NOLINT
    /**
     * @symbol
     * ?DIFF_ITEM\@SynchedActorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ITEM; // NOLINT
    /**
     * @symbol
     * ?DIFF_ITEMS_SIZE\@SynchedActorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ITEMS_SIZE; // NOLINT
    /**
     * @symbol
     * ?DIFF_ITEM_NULL\@SynchedActorData\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DIFF_ITEM_NULL; // NOLINT

    // private:
    /**
     * @symbol ?_find\@SynchedActorData\@\@AEBAPEAVDataItem\@\@G\@Z
     */
    MCAPI class DataItem* _find(unsigned short) const; // NOLINT
    /**
     * @symbol ?_get\@SynchedActorData\@\@AEAAAEAVDataItem\@\@G\@Z
     */
    MCAPI class DataItem& _get(unsigned short); // NOLINT
    /**
     * @symbol ?_resizeToContain\@SynchedActorData\@\@AEAAXG\@Z
     */
    MCAPI void _resizeToContain(unsigned short); // NOLINT

private:
};
