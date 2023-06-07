/**
 * @file  FertilizerItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FertilizerItem.
 *
 */
class FertilizerItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FERTILIZERITEM
public:
    class FertilizerItem& operator=(class FertilizerItem const &) = delete;
    FertilizerItem(class FertilizerItem const &) = delete;
    FertilizerItem() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 10
     * @symbol ?executeEvent\@FertilizerItem\@\@UEBAXAEAVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVRenderParams\@\@\@Z
     */
    virtual void executeEvent(class ItemStackBase &, std::string const &, class RenderParams &) const;
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 16
     * @symbol __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl 19
     * @symbol __unk_vfn_19
     */
    virtual void __unk_vfn_19();
    /**
     * @vftbl 21
     * @symbol ?isFertilizer\@FertilizerItem\@\@UEBA_NXZ
     */
    virtual bool isFertilizer() const;
    /**
     * @vftbl 51
     * @symbol __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl 53
     * @symbol __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @vftbl 66
     * @symbol __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl 70
     * @symbol __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl 71
     * @symbol __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl 72
     * @symbol __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl 75
     * @symbol __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl 79
     * @symbol __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl 80
     * @symbol __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @vftbl 85
     * @symbol ?dispense\@FertilizerItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @vftbl 115
     * @symbol __unk_vfn_115
     */
    virtual void __unk_vfn_115();
    /**
     * @vftbl 116
     * @symbol __unk_vfn_116
     */
    virtual void __unk_vfn_116();
    /**
     * @vftbl 134
     * @symbol ?_useOn\@FertilizerItem\@\@MEBA?AVInteractionResult\@\@AEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual class InteractionResult _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FERTILIZERITEM
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~FertilizerItem();
#endif
    /**
     * @symbol ??0FertilizerItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@HW4FertilizerType\@\@\@Z
     */
    MCAPI FertilizerItem(std::string const &, int, enum class FertilizerType);
    /**
     * @symbol ?getFertilizerType\@FertilizerItem\@\@QEBA?AW4FertilizerType\@\@XZ
     */
    MCAPI enum class FertilizerType getFertilizerType() const;

};
