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

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR_CACHEDLINEDATA
    public:
        CachedLineData& operator=(CachedLineData const&) = delete;
        CachedLineData(CachedLineData const&)            = delete;
#endif

    public:
        /**
         * @symbol ??0CachedLineData\@ChalkboardBlockActor\@\@QEAA\@XZ
         */
        MCAPI CachedLineData();
        /**
         * @symbol ??1CachedLineData\@ChalkboardBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~CachedLineData();
    };

    class CachedMessageData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR_CACHEDMESSAGEDATA
    public:
        CachedMessageData& operator=(CachedMessageData const&) = delete;
        CachedMessageData(CachedMessageData const&)            = delete;
        CachedMessageData()                                    = delete;
#endif

    public:
        /**
         * @symbol ??1CachedMessageData\@ChalkboardBlockActor\@\@QEAA\@XZ
         */
        MCAPI ~CachedMessageData();
    };

    struct ChalkboardFinder {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR_CHALKBOARDFINDER
    public:
        ChalkboardFinder& operator=(ChalkboardFinder const&) = delete;
        ChalkboardFinder(ChalkboardFinder const&)            = delete;
        ChalkboardFinder()                                   = delete;
#endif

    public:
        /**
         * @symbol ?confirmedBroken\@ChalkboardFinder\@ChalkboardBlockActor\@\@QEBA_NAEAV2\@AEAVBlockSource\@\@\@Z
         */
        MCAPI bool confirmedBroken(class ChalkboardBlockActor&, class BlockSource&) const;
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHALKBOARDBLOCKACTOR
public:
    ChalkboardBlockActor& operator=(ChalkboardBlockActor const&) = delete;
    ChalkboardBlockActor(ChalkboardBlockActor const&)            = delete;
    ChalkboardBlockActor()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@ChalkboardBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&);
    /**
     * @vftbl 2
     * @symbol ?save\@ChalkboardBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@ChalkboardBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource&);
    /**
     * @vftbl 8
     * @symbol ?onChanged\@ChalkboardBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&);
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 18
     * @symbol __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @vftbl 28
     * @symbol
     * ?getImmersiveReaderText\@ChalkboardBlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource&);
    /**
     * @vftbl 30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl 31
     * @symbol __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl 32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl 33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl 34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl 35
     * @symbol __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl 36
     * @symbol __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @vftbl 37
     * @symbol
     * ?getUgcStrings\@ChalkboardBlockActor\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const&) const;
    /**
     * @vftbl 38
     * @symbol
     * ?setUgcStrings\@ChalkboardBlockActor\@\@UEBAXAEAVCompoundTag\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void setUgcStrings(class CompoundTag&, std::vector<std::string> const&) const;
    /**
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39();
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@ChalkboardBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&);
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@ChalkboardBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&);
    /**
     * @symbol ??0ChalkboardBlockActor\@\@QEAA\@AEBVBlockPos\@\@\@Z
     */
    MCAPI ChalkboardBlockActor(class BlockPos const&);
    /**
     * @symbol ?getChalkboardSize\@ChalkboardBlockActor\@\@QEBA?BW4ChalkboardSize\@\@XZ
     */
    MCAPI enum class ChalkboardSize const getChalkboardSize() const;
    /**
     * @symbol ?getLocked\@ChalkboardBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool getLocked() const;
    /**
     * @symbol ?getRotation\@ChalkboardBlockActor\@\@QEBAHAEAVBlockSource\@\@\@Z
     */
    MCAPI int getRotation(class BlockSource&) const;
    /**
     * @symbol
     * ?getText\@ChalkboardBlockActor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getText() const;
    /**
     * @symbol ?getTextCharCount\@ChalkboardBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTextCharCount() const;
    /**
     * @symbol
     * ?setText\@ChalkboardBlockActor\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setText(std::string const&);
    /**
     * @symbol ?validate\@ChalkboardBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void validate(class BlockSource&);
    /**
     * @symbol
     * ?calculateAllBlocks\@ChalkboardBlockActor\@\@SA?AV?$vector\@VBlockPos\@\@V?$allocator\@VBlockPos\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@W4ChalkboardSize\@\@H\@Z
     */
    MCAPI static std::vector<class BlockPos> calculateAllBlocks(class BlockPos const&, enum class ChalkboardSize, int);
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
    );
    /**
     * @symbol ?convertFromEntity\@ChalkboardBlockActor\@\@SAPEAV1\@AEAVBlockSource\@\@AEBVCompoundTag\@\@\@Z
     */
    MCAPI static class ChalkboardBlockActor* convertFromEntity(class BlockSource&, class CompoundTag const&);
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
    );

    // private:
    /**
     * @symbol
     * ?_findChalkboard\@ChalkboardBlockActor\@\@CA?AUChalkboardFinder\@1\@AEAVBlockSource\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI static struct ChalkboardBlockActor::ChalkboardFinder
    _findChalkboard(class BlockSource&, class BlockPos const&);

private:
};
