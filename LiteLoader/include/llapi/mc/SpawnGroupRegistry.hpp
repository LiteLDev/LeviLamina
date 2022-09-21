/**
 * @file  MC/SpawnGroupRegistry.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SpawnGroupRegistry.
 *
 */
class SpawnGroupRegistry {

#define AFTER_EXTRA
    // Add Member There
public:
    std::vector<std::unique_ptr<class SpawnGroupData>> mSpawnGroupRegistry;
    std::unordered_map<std::string, class SpawnGroupData*> mSpawnGroupLookupMap;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SPAWNGROUPREGISTRY
public:
    class SpawnGroupRegistry& operator=(class SpawnGroupRegistry const &) = delete;
    SpawnGroupRegistry(class SpawnGroupRegistry const &) = delete;
    SpawnGroupRegistry() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SpawnGroupRegistry();
    /**
     * @hash   981748568
     * @vftbl  1
     * @symbol ?getRootKey@SpawnGroupRegistry@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getRootKey();
    /**
     * @hash   1382328333
     * @vftbl  2
     * @symbol ?getFileType@SpawnGroupRegistry@@MEAAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    virtual std::string const & getFileType();
    /**
     * @hash   1149682001
     * @vftbl  3
     * @symbol ?processPopulationControl@SpawnGroupRegistry@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVValue@Json@@@Z
     */
    virtual bool processPopulationControl(std::string const &, class Json::Value &);
    /**
     * @hash   1669700277
     * @vftbl  4
     * @symbol ?readResourceFiles@SpawnGroupRegistry@@MEAAXAEAVResourcePackManager@@AEAV?$unordered_map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@U?$hash@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@U?$equal_to@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UActorSpawnRuleDefinition@@@std@@@2@@std@@@Z
     */
    virtual void readResourceFiles(class ResourcePackManager &, class std::unordered_map<std::string, struct ActorSpawnRuleDefinition, struct std::hash<std::string>, struct std::equal_to<std::string>, class std::allocator<struct std::pair<std::string const, struct ActorSpawnRuleDefinition>>> &);
    /**
     * @hash   -225450048
     * @symbol ??0SpawnGroupRegistry@@QEAA@AEAVResourcePackManager@@@Z
     */
    MCAPI SpawnGroupRegistry(class ResourcePackManager &);
    /**
     * @hash   1714617074
     * @symbol ?getSpawnGroup@SpawnGroupRegistry@@QEBAPEBVSpawnGroupData@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class SpawnGroupData const * getSpawnGroup(std::string const &) const;

};