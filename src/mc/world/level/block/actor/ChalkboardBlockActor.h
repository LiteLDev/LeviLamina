#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class ChalkboardBlockActor : public ::BlockActor {
public:
    // ChalkboardBlockActor inner types declare
    // clang-format off
    class CachedLineData;
    class CachedMessageData;
    struct ChalkboardFinder;
    // clang-format on

    // ChalkboardBlockActor inner types define
    class CachedLineData {

    public:
        // prevent constructor by default
        CachedLineData& operator=(CachedLineData const&) = delete;
        CachedLineData(CachedLineData const&)            = delete;

    public:
        /**
         * @symbol ??0CachedLineData\@ChalkboardBlockActor\@\@QEAA\@XZ
         */
        MCAPI CachedLineData(); // NOLINT
        /**
         * @symbol ??1CachedLineData\@ChalkboardBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~CachedLineData(); // NOLINT
    };

    class CachedMessageData {

    public:
        // prevent constructor by default
        CachedMessageData& operator=(CachedMessageData const&) = delete;
        CachedMessageData(CachedMessageData const&)            = delete;
        CachedMessageData()                                    = delete;

    public:
        /**
         * @symbol ??1CachedMessageData\@ChalkboardBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~CachedMessageData(); // NOLINT
    };

    struct ChalkboardFinder {

    public:
        // prevent constructor by default
        ChalkboardFinder& operator=(ChalkboardFinder const&) = delete;
        ChalkboardFinder(ChalkboardFinder const&)            = delete;
        ChalkboardFinder()                                   = delete;

    public:
        /**
         * @symbol ?confirmedBroken\@ChalkboardFinder\@ChalkboardBlockActor\@\@QEBA_NAEAV2\@AEAVBlockSource\@\@\@Z
         */
        MCAPI bool confirmedBroken(class ChalkboardBlockActor&, class BlockSource&) const; // NOLINT
    };

public:
    // prevent constructor by default
    ChalkboardBlockActor& operator=(ChalkboardBlockActor const&) = delete;
    ChalkboardBlockActor(ChalkboardBlockActor const&)            = delete;
    ChalkboardBlockActor()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@ChalkboardBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@ChalkboardBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?tick\@ChalkboardBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@ChalkboardBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18(); // NOLINT
    /**
     * @vftbl 28
     * @symbol
     * ?getImmersiveReaderText\@ChalkboardBlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource&); // NOLINT
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30(); // NOLINT
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31(); // NOLINT
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32(); // NOLINT
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33(); // NOLINT
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34(); // NOLINT
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35(); // NOLINT
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36(); // NOLINT
    /**
     * @vftbl 37
     * @symbol
     * ?getUgcStrings\@ChalkboardBlockActor\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const; // NOLINT
    /**
     * @vftbl 38
     * @symbol
     * ?setUgcStrings\@ChalkboardBlockActor\@\@UEBAXAEAVCompoundTag\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const; // NOLINT
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@ChalkboardBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@ChalkboardBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @symbol ??0ChalkboardBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChalkboardBlockActor(class BlockPos const&); // NOLINT
    /**
     * @symbol ?getChalkboardSize\@ChalkboardBlockActor\@\@QEBA?BW4ChalkboardSize\@\@XZ
     */
    MCAPI enum class ChalkboardSize const getChalkboardSize() const; // NOLINT
    /**
     * @symbol ?getLocked\@ChalkboardBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool getLocked() const; // NOLINT
    /**
     * @symbol ?getRotation\@ChalkboardBlockActor\@\@QEBAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getRotation(class BlockSource&) const; // NOLINT
    /**
     * @symbol
     * ?getText\@ChalkboardBlockActor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getText() const; // NOLINT
    /**
     * @symbol ?getTextCharCount\@ChalkboardBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTextCharCount() const; // NOLINT
    /**
     * @symbol
     * ?setText\@ChalkboardBlockActor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setText(std::string const&); // NOLINT
    /**
     * @symbol ?validate\@ChalkboardBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void validate(class BlockSource&); // NOLINT
    /**
     * @symbol
     * ?calculateAllBlocks\@ChalkboardBlockActor\@\@SA?AV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@W4ChalkboardSize\@\@H\@Z
     */
    MCAPI static std::vector<class BlockPos>
    calculateAllBlocks(class BlockPos const&, enum class ChalkboardSize, int); // NOLINT
    /**
     * @symbol
     * ?canCreateChalkboard\@ChalkboardBlockActor\@\@SA_NPEAVActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@W4ChalkboardSize\@\@EHAEAV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEBVItemStack\@\@_N\@Z
     */
    MCAPI static bool canCreateChalkboard(
        class Actor*,
        class BlockSource&,
        class BlockPos const&,
        enum class ChalkboardSize,
        unsigned char,
        int,
        std::vector<class BlockPos>&,
        class ItemStack const&,
        bool
    ); // NOLINT
    /**
     * @symbol ?convertFromEntity\@ChalkboardBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ChalkboardBlockActor* convertFromEntity(class BlockSource&, class CompoundTag const&); // NOLINT
    /**
     * @symbol
     * ?createChalkboard\@ChalkboardBlockActor\@\@SAPEAV1\@PEAVActor\@\@AEAVBlockSource\@\@AEBVBlockPos\@\@W4ChalkboardSize\@\@EH_NAEBVItemStack\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class ChalkboardBlockActor* createChalkboard(
        class Actor*,
        class BlockSource&,
        class BlockPos const&,
        enum class ChalkboardSize,
        unsigned char,
        int,
        bool,
        class ItemStack const&,
        std::string
    ); // NOLINT

    // private:
    /**
     * @symbol
     * ?_findChalkboard\@ChalkboardBlockActor\@\@CA?AUChalkboardFinder\@1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder
    _findChalkboard(class BlockSource&, class BlockPos const&); // NOLINT

private:
};
