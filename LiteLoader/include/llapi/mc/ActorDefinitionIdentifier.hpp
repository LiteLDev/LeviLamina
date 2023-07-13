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
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@W4ActorType\@\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(enum class ActorType);
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionIdentifier();
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@PEBD\@Z
     */
    MCAPI ActorDefinitionIdentifier(char const *);
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier &&);
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string);
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string const &);
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const &);
    /**
     * @symbol ?_getLegacyActorType\@ActorDefinitionIdentifier\@\@QEBA?AW4ActorType\@\@XZ
     */
    MCAPI enum class ActorType _getLegacyActorType() const;
    /**
     * @symbol ?getCanonicalHash\@ActorDefinitionIdentifier\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const & getCanonicalHash() const;
    /**
     * @symbol ?getCanonicalName\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getCanonicalName() const;
    /**
     * @symbol ?getFullName\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getFullName() const;
    /**
     * @symbol ?getIdentifier\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getIdentifier() const;
    /**
     * @symbol ?getInitEvent\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getInitEvent() const;
    /**
     * @symbol ?getNamespace\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getNamespace() const;
    /**
     * @symbol ?initialize\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI void initialize(std::string const &, std::string const &, std::string const &);
    /**
     * @symbol ?initialize\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void initialize(std::string const &);
    /**
     * @symbol ?isEmpty\@ActorDefinitionIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const;
    /**
     * @symbol ?isVanilla\@ActorDefinitionIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isVanilla() const;
    /**
     * @symbol ??4ActorDefinitionIdentifier\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorDefinitionIdentifier & operator=(struct ActorDefinitionIdentifier const &);
    /**
     * @symbol ??8ActorDefinitionIdentifier\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ActorDefinitionIdentifier const &) const;
    /**
     * @symbol ?setIdentifier\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setIdentifier(std::string const &);
    /**
     * @symbol ?setInitEvent\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setInitEvent(std::string const &);
    /**
     * @symbol ??1ActorDefinitionIdentifier\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionIdentifier();
    /**
     * @symbol ?EVENT_BEGIN\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENT_BEGIN;
    /**
     * @symbol ?EVENT_END\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENT_END;
    /**
     * @symbol ?NAMESPACE_SEPARATOR\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAMESPACE_SEPARATOR;

//private:
    /**
     * @symbol ?_initialize\@ActorDefinitionIdentifier\@\@AEAAXXZ
     */
    MCAPI void _initialize();
    /**
     * @symbol ?_extractIdentifier\@ActorDefinitionIdentifier\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAU1\@\@Z
     */
    MCAPI static void _extractIdentifier(std::string const &, struct ActorDefinitionIdentifier &);

};