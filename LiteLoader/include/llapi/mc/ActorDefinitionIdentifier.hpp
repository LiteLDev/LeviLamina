/**
 * @file  ActorDefinitionIdentifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
    std::string mNamespace;      // 0
    std::string mIdentifier;     // 32
    std::string mInitEvent;      // 64
    std::string mFullName;       // 96
    HashedString mCanonicalName; // 128

#undef AFTER_EXTRA
public:
    /**
     * @hash   1797423741
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionIdentifier();
    /**
     * @hash   -1021302832
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@W4ActorType\@\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(enum class ActorType);
    /**
     * @hash   1940382438
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    /**
     * @hash   1225015889
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@PEBD\@Z
     */
    MCAPI ActorDefinitionIdentifier(char const *);
    /**
     * @hash   1570420516
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string const &);
    /**
     * @hash   405035717
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const &);
    /**
     * @hash   143052761
     * @symbol  ??0ActorDefinitionIdentifier\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier &&);
    /**
     * @hash   2140616698
     * @symbol  ?_getLegacyActorType\@ActorDefinitionIdentifier\@\@QEBA?AW4ActorType\@\@XZ
     */
    MCAPI enum class ActorType _getLegacyActorType() const;
    /**
     * @hash   -987660449
     * @symbol  ?clear\@ActorDefinitionIdentifier\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   189126974
     * @symbol  ?getCanonicalHash\@ActorDefinitionIdentifier\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getCanonicalHash() const;
    /**
     * @hash   1564952222
     * @symbol  ?getCanonicalName\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getCanonicalName() const;
    /**
     * @hash   1831447342
     * @symbol  ?getFullName\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFullName() const;
    /**
     * @hash   -1966791060
     * @symbol  ?getIdentifier\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getIdentifier() const;
    /**
     * @hash   -340443580
     * @symbol  ?getInitEvent\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getInitEvent() const;
    /**
     * @hash   926569350
     * @symbol  ?getNamespace\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @hash   1798730510
     * @symbol  ?initialize\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI void initialize(std::string const &, std::string const &, std::string const &);
    /**
     * @hash   1887958574
     * @symbol  ?initialize\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void initialize(std::string const &);
    /**
     * @hash   45704444
     * @symbol  ?isEmpty\@ActorDefinitionIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @hash   1410455324
     * @symbol  ?isVanilla\@ActorDefinitionIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isVanilla() const;
    /**
     * @hash   700381246
     * @symbol  ??4ActorDefinitionIdentifier\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorDefinitionIdentifier & operator=(struct ActorDefinitionIdentifier const &);
    /**
     * @hash   -957112790
     * @symbol  ??8ActorDefinitionIdentifier\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ActorDefinitionIdentifier const &) const;
    /**
     * @hash   16140006
     * @symbol  ?setIdentifier\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setIdentifier(std::string const &);
    /**
     * @hash   -320777842
     * @symbol  ?setInitEvent\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setInitEvent(std::string const &);
    /**
     * @hash   -1367561299
     * @symbol  ??1ActorDefinitionIdentifier\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionIdentifier();
    /**
     * @hash   1469546769
     * @symbol  ?EVENT_BEGIN\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENT_BEGIN;
    /**
     * @hash   -1088224975
     * @symbol  ?EVENT_END\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENT_END;
    /**
     * @hash   -226721647
     * @symbol  ?NAMESPACE_SEPARATOR\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAMESPACE_SEPARATOR;

//private:
    /**
     * @hash   1761659978
     * @symbol  ?_initialize\@ActorDefinitionIdentifier\@\@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @hash   -1490454100
     * @symbol  ?_extractIdentifier\@ActorDefinitionIdentifier\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAU1\@\@Z
     */
    MCAPI static void _extractIdentifier(std::string const &, struct ActorDefinitionIdentifier &);

};