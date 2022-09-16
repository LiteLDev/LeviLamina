/**
 * @file  ActorDefinitionIdentifier.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
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
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@XZ
     * @hash   -1828672179
     */
    MCAPI ActorDefinitionIdentifier();
    /**
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@W4ActorType@@@Z
     * @hash   -352446832
     */
    MCAPI ActorDefinitionIdentifier(enum ActorType);
    /**
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     * @hash   -1685728858
     */
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    /**
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@PEBD@Z
     * @hash   1893856513
     */
    MCAPI ActorDefinitionIdentifier(char const *);
    /**
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -2055706156
     */
    MCAPI ActorDefinitionIdentifier(std::string const &);
    /**
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@AEBU0@@Z
     * @hash   1073876341
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const &);
    /**
     * @symbol ??0ActorDefinitionIdentifier@@QEAA@$$QEAU0@@Z
     * @hash   811893385
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier &&);
    /**
     * @symbol ?_getLegacyActorType@ActorDefinitionIdentifier@@QEBA?AW4ActorType@@XZ
     * @hash   -1485955878
     */
    MCAPI enum ActorType _getLegacyActorType() const;
    /**
     * @symbol ?clear@ActorDefinitionIdentifier@@QEAAXXZ
     * @hash   -319265729
     */
    MCAPI void clear();
    /**
     * @symbol ?getCanonicalHash@ActorDefinitionIdentifier@@QEBAAEBVHashedString@@XZ
     * @hash   933694398
     */
    MCAPI class HashedString const & getCanonicalHash() const;
    /**
     * @symbol ?getCanonicalName@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2061620354
     */
    MCAPI std::string const & getCanonicalName() const;
    /**
     * @symbol ?getFullName@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1725183806
     */
    MCAPI std::string const & getFullName() const;
    /**
     * @symbol ?getIdentifier@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -2073054596
     */
    MCAPI std::string const & getIdentifier() const;
    /**
     * @symbol ?getInitEvent@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   -446707116
     */
    MCAPI std::string const & getInitEvent() const;
    /**
     * @symbol ?getNamespace@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   829946566
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @symbol ?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
     * @hash   -1827842066
     */
    MCAPI void initialize(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1738614002
     */
    MCAPI void initialize(std::string const &);
    /**
     * @symbol ?isEmpty@ActorDefinitionIdentifier@@QEBA_NXZ
     * @hash   714099164
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isVanilla@ActorDefinitionIdentifier@@QEBA_NXZ
     * @hash   2078850044
     */
    MCAPI bool isVanilla() const;
    /**
     * @symbol ??4ActorDefinitionIdentifier@@QEAAAEAU0@AEBU0@@Z
     * @hash   1369252622
     */
    MCAPI struct ActorDefinitionIdentifier & operator=(struct ActorDefinitionIdentifier const &);
    /**
     * @symbol ??8ActorDefinitionIdentifier@@QEBA_NAEBU0@@Z
     * @hash   -288241414
     */
    MCAPI bool operator==(struct ActorDefinitionIdentifier const &) const;
    /**
     * @symbol ?setIdentifier@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   684534726
     */
    MCAPI void setIdentifier(std::string const &);
    /**
     * @symbol ?setInitEvent@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   347616878
     */
    MCAPI void setInitEvent(std::string const &);
    /**
     * @symbol ??1ActorDefinitionIdentifier@@QEAA@XZ
     * @hash   -1514801875
     */
    MCAPI ~ActorDefinitionIdentifier();
    /**
     * @symbol ?EVENT_BEGIN@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -223773671
     */
    MCAPI static std::string const EVENT_BEGIN;
    /**
     * @symbol ?EVENT_END@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   1513421881
     */
    MCAPI static std::string const EVENT_END;
    /**
     * @symbol ?NAMESPACE_SEPARATOR@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
     * @hash   -1920042087
     */
    MCAPI static std::string const NAMESPACE_SEPARATOR;

//private:
    /**
     * @symbol ?_initialize@ActorDefinitionIdentifier@@AEAAXXZ
     * @hash   -1864912598
     */
    MCAPI void _initialize();
    /**
     * @symbol ?_extractIdentifier@ActorDefinitionIdentifier@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAU1@@Z
     * @hash   -821582724
     */
    MCAPI static void _extractIdentifier(std::string const &, struct ActorDefinitionIdentifier &);

};