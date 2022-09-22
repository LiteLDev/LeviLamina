/**
 * @file  BottleItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BottleItem.
 *
 */
class BottleItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOTTLEITEM
public:
    class BottleItem& operator=(class BottleItem const &) = delete;
    BottleItem(class BottleItem const &) = delete;
    BottleItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BottleItem();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  52
     * @symbol __unk_vfn_52
     */
    virtual void __unk_vfn_52();
    /**
     * @vftbl  54
     * @symbol __unk_vfn_54
     */
    virtual void __unk_vfn_54();
    /**
     * @hash   -1605867899
     * @vftbl  58
     * @symbol ?isLiquidClipItem@BottleItem@@UEBA_NH@Z
     */
    virtual bool isLiquidClipItem(int) const;
    /**
     * @vftbl  67
     * @symbol __unk_vfn_67
     */
    virtual void __unk_vfn_67();
    /**
     * @vftbl  71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  73
     * @symbol __unk_vfn_73
     */
    virtual void __unk_vfn_73();
    /**
     * @vftbl  76
     * @symbol __unk_vfn_76
     */
    virtual void __unk_vfn_76();
    /**
     * @vftbl  80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl  81
     * @symbol __unk_vfn_81
     */
    virtual void __unk_vfn_81();
    /**
     * @hash   -601030715
     * @vftbl  86
     * @symbol ?dispense@BottleItem@@UEBA_NAEAVBlockSource@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   189059783
     * @vftbl  135
     * @symbol ?_useOn@BottleItem@@EEBA_NAEAVItemStack@@AEAVActor@@VBlockPos@@EAEBVVec3@@@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @hash   -381175801
     * @symbol ??0BottleItem@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI BottleItem(std::string const &, int);

//private:
    /**
     * @hash   -411734959
     * @symbol ?_createBottledItem@BottleItem@@AEBAXAEAVActor@@AEAVItemStack@@V?$basic_string_span@$$CBD$0?0@gsl@@@Z
     */
    MCAPI void _createBottledItem(class Actor &, class ItemStack &, class gsl::basic_string_span<char const, -1>) const;
    /**
     * @hash   -1755780065
     * @symbol ?_fillBottleViaDispenser@BottleItem@@AEBAXAEAVBlockSource@@V?$basic_string_span@$$CBD$0?0@gsl@@AEAVContainer@@HAEBVVec3@@E@Z
     */
    MCAPI void _fillBottleViaDispenser(class BlockSource &, class gsl::basic_string_span<char const, -1>, class Container &, int, class Vec3 const &, unsigned char) const;

private:

};