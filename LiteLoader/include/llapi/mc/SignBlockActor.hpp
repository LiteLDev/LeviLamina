/**
 * @file  SignBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "BlockActor.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SignBlockActor.
 *
 */
class SignBlockActor : public BlockActor {

#define AFTER_EXTRA
// Add Member There
public:
enum class SignType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIGNBLOCKACTOR
public:
    class SignBlockActor& operator=(class SignBlockActor const &) = delete;
    SignBlockActor(class SignBlockActor const &) = delete;
    SignBlockActor() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?load\@SignBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @vftbl 2
     * @symbol ?save\@SignBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @vftbl 7
     * @symbol ?tick\@SignBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void tick(class BlockSource &);
    /**
     * @vftbl 8
     * @symbol ?onChanged\@SignBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
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
     * @vftbl 19
     * @symbol ?getShadowRadius\@SignBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @vftbl 28
     * @symbol ?getImmersiveReaderText\@SignBlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
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
     * @symbol ?getUgcStrings\@SignBlockActor\@\@UEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBVCompoundTag\@\@\@Z
     */
    virtual std::vector<std::string> getUgcStrings(class CompoundTag const &) const;
    /**
     * @vftbl 37
     * @symbol ?setUgcStrings\@SignBlockActor\@\@UEBAXAEAVCompoundTag\@\@AEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@\@Z
     */
    virtual void setUgcStrings(class CompoundTag &, std::vector<std::string> const &) const;
    /**
     * @vftbl 38
     * @symbol __unk_vfn_38
     */
    virtual void __unk_vfn_38();
    /**
     * @vftbl 39
     * @symbol ?_getUpdatePacket\@SignBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @vftbl 40
     * @symbol ?_onUpdatePacket\@SignBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @vftbl 41
     * @symbol ?_playerCanUpdate\@SignBlockActor\@\@MEBA_NAEBVPlayer\@\@\@Z
     */
    virtual bool _playerCanUpdate(class Player const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SIGNBLOCKACTOR
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~SignBlockActor();
#endif
    /**
     * @symbol ??0SignBlockActor\@\@QEAA\@AEBVBlockPos\@\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI SignBlockActor(class BlockPos const &, enum class BlockActorType, std::string const &);
    /**
     * @symbol ?getIsGlowing\@SignBlockActor\@\@QEBA_NW4SignTextSide\@\@\@Z
     */
    MCAPI bool getIsGlowing(enum class SignTextSide) const;
    /**
     * @symbol ?getIsLockedForEditing\@SignBlockActor\@\@QEAA_NAEAVILevel\@\@\@Z
     */
    MCAPI bool getIsLockedForEditing(class ILevel &);
    /**
     * @symbol ?getIsWaxed\@SignBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool getIsWaxed() const;
    /**
     * @symbol ?getMessage\@SignBlockActor\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI std::string const & getMessage(enum class SignTextSide) const;
    /**
     * @symbol ?getSideFacingPlayer\@SignBlockActor\@\@QEBA?AW4SignTextSide\@\@AEBVPlayer\@\@\@Z
     */
    MCAPI enum class SignTextSide getSideFacingPlayer(class Player const &) const;
    /**
     * @symbol ?getSignTextColor\@SignBlockActor\@\@QEBAAEBVColor\@mce\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class mce::Color const & getSignTextColor(enum class SignTextSide) const;
    /**
     * @symbol ?getTextObject\@SignBlockActor\@\@QEBAAEBVTextObjectRoot\@\@W4SignTextSide\@\@\@Z
     */
    MCAPI class TextObjectRoot const & getTextObject(enum class SignTextSide) const;
    /**
     * @symbol ?isStringMessage\@SignBlockActor\@\@QEBA_NW4SignTextSide\@\@\@Z
     */
    MCAPI bool isStringMessage(enum class SignTextSide) const;
    /**
     * @symbol ?serverOnlySetIsLockedForEditing\@SignBlockActor\@\@QEAAXAEAVPlayer\@\@\@Z
     */
    MCAPI void serverOnlySetIsLockedForEditing(class Player &);
    /**
     * @symbol ?setHideGlowOutline\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@_N\@Z
     */
    MCAPI void setHideGlowOutline(enum class SignTextSide, bool);
    /**
     * @symbol ?setIsGlowing\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@_N\@Z
     */
    MCAPI void setIsGlowing(enum class SignTextSide, bool);
    /**
     * @symbol ?setMessageForServerScripingOnly\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void setMessageForServerScripingOnly(enum class SignTextSide, std::string, std::string);
    /**
     * @symbol ?setMessageForServerScripingOnly\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@VTextObjectRoot\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setMessageForServerScripingOnly(enum class SignTextSide, class TextObjectRoot, std::string);
    /**
     * @symbol ?setSignTextColor\@SignBlockActor\@\@QEAAXW4SignTextSide\@\@AEBVColor\@mce\@\@\@Z
     */
    MCAPI void setSignTextColor(enum class SignTextSide, class mce::Color const &);
    /**
     * @symbol ?setWaxed\@SignBlockActor\@\@QEAAXXZ
     */
    MCAPI void setWaxed();

//private:
    /**
     * @symbol ?_updateTextFromClient\@SignBlockActor\@\@AEAAXAEBVCompoundTag\@\@AEBVBlockSource\@\@\@Z
     */
    MCAPI void _updateTextFromClient(class CompoundTag const &, class BlockSource const &);

private:

};
