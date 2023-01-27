/**
 * @file  SignBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../BlockActor.hpp"

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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~SignBlockActor();
    /**
     * @hash   1568242844
     * @vftbl  1
     * @symbol  ?load\@SignBlockActor\@\@UEAAXAEAVLevel\@\@AEBVCompoundTag\@\@AEAVDataLoadHelper\@\@\@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -476600965
     * @vftbl  2
     * @symbol  ?save\@SignBlockActor\@\@UEBA_NAEAVCompoundTag\@\@\@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -79552179
     * @vftbl  8
     * @symbol  ?onChanged\@SignBlockActor\@\@UEAAXAEAVBlockSource\@\@\@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  18
     * @symbol  __unk_vfn_18
     */
    virtual void __unk_vfn_18();
    /**
     * @hash   -958135215
     * @vftbl  19
     * @symbol  ?getShadowRadius\@SignBlockActor\@\@UEBAMAEAVBlockSource\@\@\@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @hash   1476768281
     * @vftbl  28
     * @symbol  ?getImmersiveReaderText\@SignBlockActor\@\@UEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @vftbl  31
     * @symbol  __unk_vfn_31
     */
    virtual void __unk_vfn_31();
    /**
     * @vftbl  32
     * @symbol  __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol  __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol  __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @vftbl  35
     * @symbol  __unk_vfn_35
     */
    virtual void __unk_vfn_35();
    /**
     * @vftbl  36
     * @symbol  __unk_vfn_36
     */
    virtual void __unk_vfn_36();
    /**
     * @hash   -523706370
     * @vftbl  37
     * @symbol  ?_getUpdatePacket\@SignBlockActor\@\@MEAA?AV?$unique_ptr\@VBlockActorDataPacket\@\@U?$default_delete\@VBlockActorDataPacket\@\@\@std\@\@\@std\@\@AEAVBlockSource\@\@\@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   1387523572
     * @vftbl  38
     * @symbol  ?_onUpdatePacket\@SignBlockActor\@\@MEAAXAEBVCompoundTag\@\@AEAVBlockSource\@\@\@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   1206707782
     * @symbol  ??0SignBlockActor\@\@QEAA\@AEBVBlockPos\@\@W4BlockActorType\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI SignBlockActor(class BlockPos const &, enum class BlockActorType, std::string const &);
    /**
     * @hash   -650001504
     * @symbol  ?getMessage\@SignBlockActor\@\@QEAAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getMessage();
    /**
     * @hash   -1604643316
     * @symbol  ?getSignTextColor\@SignBlockActor\@\@QEBAAEBVColor\@mce\@\@XZ
     */
    MCAPI class mce::Color const & getSignTextColor() const;
    /**
     * @hash   1459636824
     * @symbol  ?isBug471852Resolved\@SignBlockActor\@\@QEBA_NXZ
     */
    MCAPI bool isBug471852Resolved() const;
    /**
     * @hash   -912988267
     * @symbol  ?resolveBug471852\@SignBlockActor\@\@QEAAXXZ
     */
    MCAPI void resolveBug471852();
    /**
     * @hash   -1987229660
     * @symbol  ?setMessage\@SignBlockActor\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void setMessage(std::string, std::string);
    /**
     * @hash   1724528575
     * @symbol  ?setMessage\@SignBlockActor\@\@QEAAXVTextObjectRoot\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setMessage(class TextObjectRoot, std::string);
    /**
     * @hash   1887821498
     * @symbol  ?setSignTextColor\@SignBlockActor\@\@QEAAXAEBVColor\@mce\@\@\@Z
     */
    MCAPI void setSignTextColor(class mce::Color const &);
    /**
     * @hash   2059298678
     * @symbol  ?setType\@SignBlockActor\@\@QEAAXW4SignType\@1\@\@Z
     */
    MCAPI void setType(enum class SignBlockActor::SignType);

};