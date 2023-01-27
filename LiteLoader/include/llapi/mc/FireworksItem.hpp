/**
 * @file  FireworksItem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FireworksItem.
 *
 */
class FireworksItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FIREWORKSITEM
public:
    class FireworksItem& operator=(class FireworksItem const &) = delete;
    FireworksItem(class FireworksItem const &) = delete;
    FireworksItem() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FireworksItem();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  14
     * @symbol  __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl  16
     * @symbol  __unk_vfn_16
     */
    virtual void __unk_vfn_16();
    /**
     * @vftbl  51
     * @symbol  __unk_vfn_51
     */
    virtual void __unk_vfn_51();
    /**
     * @vftbl  53
     * @symbol  __unk_vfn_53
     */
    virtual void __unk_vfn_53();
    /**
     * @hash   -559349684
     * @vftbl  56
     * @symbol  ?isDestructive\@FireworksItem\@\@UEBA_NH\@Z
     */
    virtual bool isDestructive(int) const;
    /**
     * @hash   -1855797504
     * @vftbl  60
     * @symbol  ?appendFormattedHovertext\@FireworksItem\@\@UEBAXAEBVItemStackBase\@\@AEAVLevel\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@_N\@Z
     */
    virtual void appendFormattedHovertext(class ItemStackBase const &, class Level &, std::string &, bool) const;
    /**
     * @vftbl  66
     * @symbol  __unk_vfn_66
     */
    virtual void __unk_vfn_66();
    /**
     * @vftbl  70
     * @symbol  __unk_vfn_70
     */
    virtual void __unk_vfn_70();
    /**
     * @vftbl  71
     * @symbol  __unk_vfn_71
     */
    virtual void __unk_vfn_71();
    /**
     * @vftbl  72
     * @symbol  __unk_vfn_72
     */
    virtual void __unk_vfn_72();
    /**
     * @vftbl  75
     * @symbol  __unk_vfn_75
     */
    virtual void __unk_vfn_75();
    /**
     * @vftbl  79
     * @symbol  __unk_vfn_79
     */
    virtual void __unk_vfn_79();
    /**
     * @vftbl  80
     * @symbol  __unk_vfn_80
     */
    virtual void __unk_vfn_80();
    /**
     * @hash   -880284177
     * @vftbl  84
     * @symbol  ?use\@FireworksItem\@\@UEBAAEAVItemStack\@\@AEAV2\@AEAVPlayer\@\@\@Z
     */
    virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /**
     * @hash   -747958165
     * @vftbl  85
     * @symbol  ?dispense\@FireworksItem\@\@UEBA_NAEAVBlockSource\@\@AEAVContainer\@\@HAEBVVec3\@\@E\@Z
     */
    virtual bool dispense(class BlockSource &, class Container &, int, class Vec3 const &, unsigned char) const;
    /**
     * @hash   -815866817
     * @vftbl  132
     * @symbol  ?_useOn\@FireworksItem\@\@UEBA_NAEAVItemStack\@\@AEAVActor\@\@VBlockPos\@\@EAEBVVec3\@\@\@Z
     */
    virtual bool _useOn(class ItemStack &, class Actor &, class BlockPos, unsigned char, class Vec3 const &) const;
    /**
     * @hash   -674377331
     * @symbol  ??0FireworksItem\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@H\@Z
     */
    MCAPI FireworksItem(std::string const &, int);
    /**
     * @hash   1703978327
     * @symbol  ?TAG_EXPLOSIONS\@FireworksItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_EXPLOSIONS;
    /**
     * @hash   1153884471
     * @symbol  ?TAG_E_FLIGHT\@FireworksItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_E_FLIGHT;
    /**
     * @hash   348152789
     * @symbol  ?TAG_FIREWORKS\@FireworksItem\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TAG_FIREWORKS;
    /**
     * @hash   -768240865
     * @symbol  ?initFireworksRocketItem\@FireworksItem\@\@SAAEBVItemInstance\@\@AEAV2\@AEBV?$vector\@VItemInstance\@\@V?$allocator\@VItemInstance\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI static class ItemInstance const & initFireworksRocketItem(class ItemInstance &, std::vector<class ItemInstance> const &, int);
    /**
     * @hash   1837997496
     * @symbol  ?initFireworksRocketItem\@FireworksItem\@\@SAAEBVItemStack\@\@AEAV2\@AEBV?$vector\@VItemStack\@\@V?$allocator\@VItemStack\@\@\@std\@\@\@std\@\@H\@Z
     */
    MCAPI static class ItemStack const & initFireworksRocketItem(class ItemStack &, std::vector<class ItemStack> const &, int);

};