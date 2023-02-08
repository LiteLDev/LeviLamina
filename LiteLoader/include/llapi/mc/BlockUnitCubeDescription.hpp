/**
 * @file  BlockUnitCubeDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockUnitCubeDescription.
 *
 */
struct BlockUnitCubeDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKUNITCUBEDESCRIPTION
public:
    struct BlockUnitCubeDescription& operator=(struct BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription(struct BlockUnitCubeDescription const &) = delete;
    BlockUnitCubeDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockUnitCubeDescription();
    /**
     * @hash   -2002595437
     * @vftbl  1
     * @symbol  ?getName\@BlockUnitCubeDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1204413327
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockUnitCubeDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   -597433931
     * @vftbl  3
     * @symbol  ?initializeFromNetwork\@BlockUnitCubeDescription\@\@UEAAXAEBVCompoundTag\@\@\@Z
     */
    virtual void initializeFromNetwork(class CompoundTag const &);
    /**
     * @hash   986099979
     * @vftbl  4
     * @symbol  ?isNetworkComponent\@BlockUnitCubeDescription\@\@UEBA_NXZ
     */
    virtual bool isNetworkComponent() const;
    /**
     * @hash   943701677
     * @vftbl  5
     * @symbol  ?buildNetworkTag\@BlockUnitCubeDescription\@\@UEBA?AV?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@XZ
     */
    virtual std::unique_ptr<class CompoundTag> buildNetworkTag() const;
    /**
     * @hash   493638027
     * @symbol  ?NameID\@BlockUnitCubeDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -885246973
     * @symbol  ?bindType\@BlockUnitCubeDescription\@\@SAXXZ
     */
    MCAPI static void bindType();

};