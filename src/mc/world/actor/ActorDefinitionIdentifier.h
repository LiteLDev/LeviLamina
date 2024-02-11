#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/string/HashedString.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"

struct ActorDefinitionIdentifier {
public:
    std::string  mNamespace;     // 0
    std::string  mIdentifier;    // 32
    std::string  mInitEvent;     // 64
    std::string  mFullName;      // 96
    HashedString mCanonicalName; // 128

    // NOLINTBEGIN
    // symbol: ??0ActorDefinitionIdentifier@@QEAA@XZ
    MCAPI ActorDefinitionIdentifier();

    // symbol: ??0ActorDefinitionIdentifier@@QEAA@PEBD@Z
    MCAPI explicit ActorDefinitionIdentifier(char const* fullName);

    // symbol: ??0ActorDefinitionIdentifier@@QEAA@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit ActorDefinitionIdentifier(std::string const& fullName);

    // symbol: ??0ActorDefinitionIdentifier@@QEAA@W4ActorType@@@Z
    MCAPI explicit ActorDefinitionIdentifier(::ActorType type);

    // symbol: ??0ActorDefinitionIdentifier@@QEAA@$$QEAU0@@Z
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier&& other);

    // symbol: ??0ActorDefinitionIdentifier@@QEAA@AEBU0@@Z
    MCAPI ActorDefinitionIdentifier(struct ActorDefinitionIdentifier const& other);

    // symbol: ??0ActorDefinitionIdentifier@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCAPI ActorDefinitionIdentifier(std::string nameSpace, std::string identifier, std::string initEvent);

    // symbol: ?_getLegacyActorType@ActorDefinitionIdentifier@@QEBA?AW4ActorType@@XZ
    MCAPI ::ActorType _getLegacyActorType() const;

    // symbol: ?clear@ActorDefinitionIdentifier@@QEAAXXZ
    MCAPI void clear();

    // symbol: ?getCanonicalHash@ActorDefinitionIdentifier@@QEBAAEBVHashedString@@XZ
    MCAPI class HashedString const& getCanonicalHash() const;

    // symbol:
    // ?getCanonicalName@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getCanonicalName() const;

    // symbol:
    // ?getFullName@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getFullName() const;

    // symbol:
    // ?getIdentifier@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getIdentifier() const;

    // symbol:
    // ?getInitEvent@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getInitEvent() const;

    // symbol:
    // ?getNamespace@ActorDefinitionIdentifier@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getNamespace() const;

    // symbol:
    // ?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void initialize(std::string const& fullName);

    // symbol:
    // ?initialize@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00@Z
    MCAPI void initialize(std::string const& nameSpace, std::string const& identifier, std::string const& initEvent);

    // symbol: ?isEmpty@ActorDefinitionIdentifier@@QEBA_NXZ
    MCAPI bool isEmpty() const;

    // symbol: ?isVanilla@ActorDefinitionIdentifier@@QEBA_NXZ
    MCAPI bool isVanilla() const;

    // symbol: ??4ActorDefinitionIdentifier@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct ActorDefinitionIdentifier& operator=(struct ActorDefinitionIdentifier const& other);

    // symbol: ??8ActorDefinitionIdentifier@@QEBA_NAEBU0@@Z
    MCAPI bool operator==(struct ActorDefinitionIdentifier const& other) const;

    // symbol:
    // ?setIdentifier@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setIdentifier(std::string const& identifier);

    // symbol:
    // ?setInitEvent@ActorDefinitionIdentifier@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void setInitEvent(std::string const& initEvent);

    // symbol: ??1ActorDefinitionIdentifier@@QEAA@XZ
    MCAPI ~ActorDefinitionIdentifier();

    // symbol: ?EVENT_BEGIN@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EVENT_BEGIN;

    // symbol: ?EVENT_END@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const EVENT_END;

    // symbol:
    // ?NAMESPACE_SEPARATOR@ActorDefinitionIdentifier@@2V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const NAMESPACE_SEPARATOR;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initialize@ActorDefinitionIdentifier@@AEAAXXZ
    MCAPI void _initialize();

    // symbol:
    // ?_extractIdentifier@ActorDefinitionIdentifier@@CAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAU1@@Z
    MCAPI static void _extractIdentifier(std::string const& name, struct ActorDefinitionIdentifier& id);

    // NOLINTEND
};
