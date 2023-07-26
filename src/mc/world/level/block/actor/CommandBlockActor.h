#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/actor/BlockActor.h"

class CommandBlockActor : public ::BlockActor {

public:
    // prevent constructor by default
    CommandBlockActor& operator=(CommandBlockActor const&) = delete;
    CommandBlockActor(CommandBlockActor const&)            = delete;
    CommandBlockActor()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?load\@CommandBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level&, class CompoundTag const&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?save\@CommandBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag&) const; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?saveBlockData\@CommandBlockActor\@\@UEBAXAEAVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void saveBlockData(class CompoundTag&, class BlockSource&) const; // NOLINT
    /**
     * @vftbl 5
     * @symbol ?loadBlockData\@CommandBlockActor\@\@UEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void loadBlockData(class CompoundTag const&, class BlockSource&, class DataLoadHelper&); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?onCustomTagLoadDone\@CommandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onCustomTagLoadDone(class BlockSource&); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?onChanged\@CommandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource&); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?onPlace\@CommandBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onPlace(class BlockSource&); // NOLINT
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
     * @vftbl 24
     * @symbol
     * ?getCustomName\@CommandBlockActor\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const& getCustomName() const; // NOLINT
    /**
     * @vftbl 25
     * @symbol
     * ?getFilteredCustomName\@CommandBlockActor\@\@UEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVUIProfanityContext\@\@\@Z
     */
    virtual std::string const& getFilteredCustomName(class UIProfanityContext const&); // NOLINT
    /**
     * @vftbl 27
     * @symbol
     * ?setCustomName\@CommandBlockActor\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void setCustomName(std::string const&); // NOLINT
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
     * @vftbl 39
     * @symbol __unk_vfn_39
     */
    virtual void __unk_vfn_39(); // NOLINT
    /**
     * @vftbl 40
     * @symbol
     * ?_getUpdatePacket\@CommandBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource&); // NOLINT
    /**
     * @vftbl 41
     * @symbol ?_onUpdatePacket\@CommandBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const&, class BlockSource&); // NOLINT
    /**
     * @vftbl 42
     * @symbol ?_playerCanUpdate\@CommandBlockActor\@\@MEBA_NAEBVPlayer\@\@\@Z
     */
    virtual bool _playerCanUpdate(class Player const&) const; // NOLINT
    /**
     * @symbol ?getBaseCommandBlock\@CommandBlockActor\@\@QEAAAEAVBaseCommandBlock\@\@XZ
     */
    MCAPI class BaseCommandBlock& getBaseCommandBlock(); // NOLINT
    /**
     * @symbol
     * ?getCommand\@CommandBlockActor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getCommand() const; // NOLINT
    /**
     * @symbol ?getCommandBlock\@CommandBlockActor\@\@QEBAPEBVCommandBlock\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI class CommandBlock const* getCommandBlock(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?getConditionalMode\@CommandBlockActor\@\@QEBA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool getConditionalMode(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?getDelayOnActivation\@CommandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getDelayOnActivation() const; // NOLINT
    /**
     * @symbol ?getMode\@CommandBlockActor\@\@QEBA?AW4CommandBlockMode\@\@AEAVBlockSource\@\@\@Z
     */
    MCAPI enum class CommandBlockMode getMode(class BlockSource&) const; // NOLINT
    /**
     * @symbol ?getPowered\@CommandBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool getPowered() const; // NOLINT
    /**
     * @symbol ?getSuccessCount\@CommandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const; // NOLINT
    /**
     * @symbol ?getTickDelay\@CommandBlockActor\@\@QEBAHXZ
     */
    MCAPI int getTickDelay() const; // NOLINT
    /**
     * @symbol ?isAutomatic\@CommandBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isAutomatic() const; // NOLINT
    /**
     * @symbol ?markConditionMet\@CommandBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool markConditionMet(class BlockSource&); // NOLINT
    /**
     * @symbol ?markForSaving\@CommandBlockActor\@\@QEAAXAEAVBlockSource\@\@\@Z
     */
    MCAPI void markForSaving(class BlockSource&); // NOLINT
    /**
     * @symbol ?markForSaving\@CommandBlockActor\@\@QEAAXAEAVBlockSource\@\@H_N\@Z
     */
    MCAPI void markForSaving(class BlockSource&, int, bool); // NOLINT
    /**
     * @symbol ?performCommand\@CommandBlockActor\@\@QEAA_NAEAVBlockSource\@\@\@Z
     */
    MCAPI bool performCommand(class BlockSource&); // NOLINT
    /**
     * @symbol ?setPowered\@CommandBlockActor\@\@QEAAX_N\@Z
     */
    MCAPI void setPowered(bool); // NOLINT
    /**
     * @symbol ?setSuccessCount\@CommandBlockActor\@\@QEAAXH\@Z
     */
    MCAPI void setSuccessCount(int); // NOLINT
    /**
     * @symbol
     * ?updateBlock\@CommandBlockActor\@\@QEAAXAEAVBlockSource\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1W4CommandBlockMode\@\@_N33H3\@Z
     */
    MCAPI void updateBlock(
        class BlockSource&,
        std::string const&,
        std::string const&,
        enum class CommandBlockMode,
        bool,
        bool,
        bool,
        int,
        bool
    ); // NOLINT
    /**
     * @symbol ?wasConditionMet\@CommandBlockActor\@\@QEAA_NXZ
     */
    MCAPI bool wasConditionMet(); // NOLINT

    // private:
    /**
     * @symbol ?_setAutomatic\@CommandBlockActor\@\@AEAAXAEAVBlockSource\@\@_NW4CommandBlockMode\@\@\@Z
     */
    MCAPI void _setAutomatic(class BlockSource&, bool, enum class CommandBlockMode); // NOLINT

private:
};
