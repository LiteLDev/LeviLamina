/**
 * @file  MC/BlockDestructibleByExplosionDescription.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure BlockDestructibleByExplosionDescription.
 *
 */
struct BlockDestructibleByExplosionDescription {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYEXPLOSIONDESCRIPTION
public:
    struct BlockDestructibleByExplosionDescription& operator=(struct BlockDestructibleByExplosionDescription const &) = delete;
    BlockDestructibleByExplosionDescription(struct BlockDestructibleByExplosionDescription const &) = delete;
    BlockDestructibleByExplosionDescription() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BlockDestructibleByExplosionDescription();
    /**
     * @hash   -208700170
     * @vftbl  1
     * @symbol ?getName@BlockDestructibleByExplosionDescription@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getName() const;
    /**
     * @hash   -90957906
     * @vftbl  2
     * @symbol ?initializeComponent@BlockDestructibleByExplosionDescription@@UEBAXAEAVEntityContext@@@Z
     */
    virtual void initializeComponent(class EntityContext &) const;
    /**
     * @hash   -1128597857
     * @symbol ?NameID@BlockDestructibleByExplosionDescription@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NameID;
    /**
     * @hash   -1683774241
     * @symbol ?bindType@BlockDestructibleByExplosionDescription@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   1471162686
     * @symbol ?registerVersionUpgrades@BlockDestructibleByExplosionDescription@@SAXAEAVCerealSchemaUpgradeSet@@@Z
     */
    MCAPI static void registerVersionUpgrades(class CerealSchemaUpgradeSet &);

};