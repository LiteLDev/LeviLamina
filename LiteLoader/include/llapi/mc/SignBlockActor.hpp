/**
 * @file  MC/SignBlockActor.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SignBlockActor();
    /**
     * @hash   817632652
     * @vftbl  1
     * @symbol ?load@SignBlockActor@@UEAAXAEAVLevel@@AEBVCompoundTag@@AEAVDataLoadHelper@@@Z
     */
    virtual void load(class Level &, class CompoundTag const &, class DataLoadHelper &);
    /**
     * @hash   -1227165029
     * @vftbl  2
     * @symbol ?save@SignBlockActor@@UEBA_NAEAVCompoundTag@@@Z
     */
    virtual bool save(class CompoundTag &) const;
    /**
     * @hash   -283299555
     * @vftbl  8
     * @symbol ?onChanged@SignBlockActor@@UEAAXAEAVBlockSource@@@Z
     */
    virtual void onChanged(class BlockSource &);
    /**
     * @vftbl  12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @hash   1180194321
     * @vftbl  17
     * @symbol ?getShadowRadius@SignBlockActor@@UEBAMAEAVBlockSource@@@Z
     */
    virtual float getShadowRadius(class BlockSource &) const;
    /**
     * @hash   726250345
     * @vftbl  25
     * @symbol ?getImmersiveReaderText@SignBlockActor@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVBlockSource@@@Z
     */
    virtual std::string getImmersiveReaderText(class BlockSource &);
    /**
     * @vftbl  28
     * @symbol __unk_vfn_28
     */
    virtual void __unk_vfn_28();
    /**
     * @vftbl  29
     * @symbol __unk_vfn_29
     */
    virtual void __unk_vfn_29();
    /**
     * @vftbl  30
     * @symbol __unk_vfn_30
     */
    virtual void __unk_vfn_30();
    /**
     * @vftbl  32
     * @symbol __unk_vfn_32
     */
    virtual void __unk_vfn_32();
    /**
     * @vftbl  33
     * @symbol __unk_vfn_33
     */
    virtual void __unk_vfn_33();
    /**
     * @vftbl  34
     * @symbol __unk_vfn_34
     */
    virtual void __unk_vfn_34();
    /**
     * @hash   -727346114
     * @vftbl  35
     * @symbol ?_getUpdatePacket@SignBlockActor@@MEAA?AV?$unique_ptr@VBlockActorDataPacket@@U?$default_delete@VBlockActorDataPacket@@@std@@@std@@AEAVBlockSource@@@Z
     */
    virtual std::unique_ptr<class BlockActorDataPacket> _getUpdatePacket(class BlockSource &);
    /**
     * @hash   517134340
     * @vftbl  36
     * @symbol ?_onUpdatePacket@SignBlockActor@@MEAAXAEBVCompoundTag@@AEAVBlockSource@@@Z
     */
    virtual void _onUpdatePacket(class CompoundTag const &, class BlockSource &);
    /**
     * @hash   -1366349592
     * @symbol ??0SignBlockActor@@QEAA@AEBVBlockPos@@@Z
     */
    MCAPI SignBlockActor(class BlockPos const &);
    /**
     * @hash   -1400519440
     * @symbol ?getMessage@SignBlockActor@@QEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getMessage();
    /**
     * @hash   1939713788
     * @symbol ?getSignTextColor@SignBlockActor@@QEBAAEBVColor@mce@@XZ
     */
    MCAPI class mce::Color const & getSignTextColor() const;
    /**
     * @hash   589201464
     * @symbol ?isBug471852Resolved@SignBlockActor@@QEBA_NXZ
     */
    MCAPI bool isBug471852Resolved() const;
    /**
     * @hash   -1663552331
     * @symbol ?resolveBug471852@SignBlockActor@@QEAAXXZ
     */
    MCAPI void resolveBug471852();
    /**
     * @hash   1557188948
     * @symbol ?setMessage@SignBlockActor@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI void setMessage(std::string, std::string);
    /**
     * @hash   973979887
     * @symbol ?setMessage@SignBlockActor@@QEAAXVTextObjectRoot@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setMessage(class TextObjectRoot, std::string);
    /**
     * @hash   1137272810
     * @symbol ?setSignTextColor@SignBlockActor@@QEAAXAEBVColor@mce@@@Z
     */
    MCAPI void setSignTextColor(class mce::Color const &);
    /**
     * @hash   1308749990
     * @symbol ?setType@SignBlockActor@@QEAAXW4SignType@1@@Z
     */
    MCAPI void setType(enum SignBlockActor::SignType);

};