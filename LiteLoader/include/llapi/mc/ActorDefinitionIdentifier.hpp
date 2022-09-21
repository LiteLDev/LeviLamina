/**
 * @file  MC/ActorDefinitionIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "HashedString.hpp"

#undef BEFORE_EXTRA

/**
 * @brief MC structure ActorDefinitionIdentifier.
 *
 */
struct ActorDefinitionIdentifier {

#define AFTER_EXTRA
// Add Member There
std::string ns;             // 0
std::string identifier;     // 32
std::string event;          // 64
std::string fullname;       // 96
HashedString canonicalHash; // 128

#undef AFTER_EXTRA
public:
    /**
     * @hash   -1828672179
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@XZ
     */
    MCAPI ActorDefinitionIdentifier();
    /**
     * @hash   -352446832
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@W4ActorType@@@Z
     */
    MCAPI ActorDefinitionIdentifier(enum ActorType);
    /**
     * @hash   -1685728858
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    /**
     * @hash   1893856513
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@PEBD@Z
     */
    MCAPI ActorDefinitionIdentifier(char const *);
    /**
     * @hash   -2055706156
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string const &);
    /**
     * @hash   1073876341
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@AEBU0@@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const &);
    /**
     * @hash   811893385
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@$$QEAU0@@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier &&);
    /**
     * @hash   -1485955878
     * @symbol ?_getLegacyActorType@ActorDefinitionIdentifier@@QEBA?AW4ActorType@@XZ
     */
    MCAPI enum ActorType _getLegacyActorType() const;
    /**
     * @hash   -319265729
     * @symbol ?clear@ActorDefinitionIdentifier@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   933694398
     * @symbol ?getCanonicalHash@ActorDefinitionIdentifier@@QEBAAEBVHashedString@@XZ
     */
    MCAPI class HashedString const & getCanonicalHash() const;
    /**
     * @hash   -2061620354
     * @symbol ?getCanonicalName@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getCanonicalName() const;
    /**
     * @hash   1725183806
     * @symbol ?getFullName@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getFullName() const;
    /**
     * @hash   -2073054596
     * @symbol ?getIdentifier@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getIdentifier() const;
    /**
     * @hash   -446707116
     * @symbol ?getInitEvent@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getInitEvent() const;
    /**
     * @hash   829946566
     * @symbol ?getNamespace@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @hash   -1827842066
     * @symbol ?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     */
    MCAPI void initialize(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   -1738614002
     * @symbol ?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void initialize(std::string const &);
    /**
     * @hash   714099164
     * @symbol ?isEmpty@ActorDefinitionIdentifier@@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   2078850044
     * @symbol ?isVanilla@ActorDefinitionIdentifier@@QEBA_NXZ
     */
    MCAPI bool isVanilla() const;
    /**
     * @hash   1369252622
     * @symbol ??4ActorDefinitionIdentifier@@QEAAAEAU0@AEBU0@@Z
     */
    MCAPI struct ActorDefinitionIdentifier & operator=(struct ActorDefinitionIdentifier const &);
    /**
     * @hash   -288241414
     * @symbol ??8ActorDefinitionIdentifier@@QEBA_NAEBU0@@Z
     */
    MCAPI bool operator==(struct ActorDefinitionIdentifier const &) const;
    /**
     * @hash   684534726
     * @symbol ?setIdentifier@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setIdentifier(std::string const &);
    /**
     * @hash   347616878
     * @symbol ?setInitEvent@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void setInitEvent(std::string const &);
    /**
     * @hash   -1514801875
     * @symbol ??1ActorDefinitionIdentifier@@QEAA@XZ
     */
    MCAPI ~ActorDefinitionIdentifier();
    /**
     * @hash   -223773671
     * @symbol ?EVENT_BEGIN@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EVENT_BEGIN;
    /**
     * @hash   1513421881
     * @symbol ?EVENT_END@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const EVENT_END;
    /**
     * @hash   -1920042087
     * @symbol ?NAMESPACE_SEPARATOR@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     */
    MCAPI static std::string const NAMESPACE_SEPARATOR;

//private:
    /**
     * @hash   -1864912598
     * @symbol ?_initialize@ActorDefinitionIdentifier@@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @hash   -821582724
     * @symbol ?_extractIdentifier@ActorDefinitionIdentifier@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAU1@@Z
     */
    MCAPI static void _extractIdentifier(std::string const &, struct ActorDefinitionIdentifier &);

};