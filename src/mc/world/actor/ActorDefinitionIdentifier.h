#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

struct ActorDefinitionIdentifier {

public:
    std::string  mNamespace;     // 0
    std::string  mIdentifier;    // 32
    std::string  mInitEvent;     // 64
    std::string  mFullName;      // 96
    HashedString mCanonicalName; // 128

    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@W4ActorType\@\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(enum class ActorType); // NOLINT
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@XZ
     */
    MCAPI ActorDefinitionIdentifier(); // NOLINT
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@PEBD\@Z
     */
    MCAPI ActorDefinitionIdentifier(char const*); // NOLINT
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier&&); // NOLINT
    /**
     * @symbol
     * ??0ActorDefinitionIdentifier\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string, std::string, std::string); // NOLINT
    /**
     * @symbol
     * ??0ActorDefinitionIdentifier\@\@QEAA\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(std::string const&); // NOLINT
    /**
     * @symbol ??0ActorDefinitionIdentifier\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const&); // NOLINT
    /**
     * @symbol ?_getLegacyActorType\@ActorDefinitionIdentifier\@\@QEBA?AW4ActorType\@\@XZ
     */
    MCAPI enum class ActorType _getLegacyActorType() const; // NOLINT
    /**
     * @symbol ?getCanonicalHash\@ActorDefinitionIdentifier\@\@QEBAAEBVHashedString\@\@XZ
     */
    MCAPI class HashedString const& getCanonicalHash() const; // NOLINT
    /**
     * @symbol
     * ?getCanonicalName\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getCanonicalName() const; // NOLINT
    /**
     * @symbol
     * ?getFullName\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getFullName() const; // NOLINT
    /**
     * @symbol
     * ?getIdentifier\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getIdentifier() const; // NOLINT
    /**
     * @symbol
     * ?getInitEvent\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getInitEvent() const; // NOLINT
    /**
     * @symbol
     * ?getNamespace\@ActorDefinitionIdentifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getNamespace() const; // NOLINT
    /**
     * @symbol
     * ?initialize\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@00\@Z
     */
    MCAPI void initialize(std::string const&, std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?initialize\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void initialize(std::string const&); // NOLINT
    /**
     * @symbol ?isEmpty\@ActorDefinitionIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isEmpty() const; // NOLINT
    /**
     * @symbol ?isVanilla\@ActorDefinitionIdentifier\@\@QEBA_NXZ
     */
    MCAPI bool isVanilla() const; // NOLINT
    /**
     * @symbol ??4ActorDefinitionIdentifier\@\@QEAAAEAU0\@AEBU0\@\@Z
     */
    MCAPI struct ActorDefinitionIdentifier& operator=(struct ActorDefinitionIdentifier const&); // NOLINT
    /**
     * @symbol ??8ActorDefinitionIdentifier\@\@QEBA_NAEBU0\@\@Z
     */
    MCAPI bool operator==(struct ActorDefinitionIdentifier const&) const; // NOLINT
    /**
     * @symbol
     * ?setIdentifier\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setIdentifier(std::string const&); // NOLINT
    /**
     * @symbol
     * ?setInitEvent\@ActorDefinitionIdentifier\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setInitEvent(std::string const&); // NOLINT
    /**
     * @symbol ??1ActorDefinitionIdentifier\@\@QEAA\@XZ
     */
    MCAPI ~ActorDefinitionIdentifier(); // NOLINT
    /**
     * @symbol
     * ?EVENT_BEGIN\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENT_BEGIN; // NOLINT
    /**
     * @symbol
     * ?EVENT_END\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const EVENT_END; // NOLINT
    /**
     * @symbol
     * ?NAMESPACE_SEPARATOR\@ActorDefinitionIdentifier\@\@2V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const NAMESPACE_SEPARATOR; // NOLINT

    // private:
    /**
     * @symbol ?_initialize\@ActorDefinitionIdentifier\@\@AEAAXXZ
     */
    MCAPI void _initialize(); // NOLINT
    /**
     * @symbol
     * ?_extractIdentifier\@ActorDefinitionIdentifier\@\@CAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAU1\@\@Z
     */
    MCAPI static void _extractIdentifier(std::string const&, struct ActorDefinitionIdentifier&); // NOLINT
};
