/**
 * @file  BlockFlammableDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockFlammableDescription.
 *
 */
struct BlockFlammableDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKFLAMMABLEDESCRIPTION
public:
    struct BlockFlammableDescription& operator=(struct BlockFlammableDescription const &) = delete;
    BlockFlammableDescription(struct BlockFlammableDescription const &) = delete;
    BlockFlammableDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BlockFlammableDescription();
    /**
     * @hash   -48361419
     * @vftbl  1
     * @symbol  ?getName\@BlockFlammableDescription\@\@UEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -1076526257
     * @vftbl  2
     * @symbol  ?initializeComponent\@BlockFlammableDescription\@\@UEBAXAEAVEntityContext\@\@\@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   37539867
     * @symbol  ?CATCH_CHANCE_DEFAULT\@BlockFlammableDescription\@\@2HB
     */
    MCAPI static int const CATCH_CHANCE_DEFAULT;
    /**
     * @hash   -2021484383
     * @symbol  ?DESTROY_CHANCE_DEFAULT\@BlockFlammableDescription\@\@2HB
     */
    MCAPI static int const DESTROY_CHANCE_DEFAULT;
    /**
     * @hash   -895143587
     * @symbol  ?NameID\@BlockFlammableDescription\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -674170769
     * @symbol  ?bindType\@BlockFlammableDescription\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1960418016
     * @symbol  ?registerVersionUpgrades\@BlockFlammableDescription\@\@SAXAEAVCerealSchemaUpgradeSet\@\@\@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};