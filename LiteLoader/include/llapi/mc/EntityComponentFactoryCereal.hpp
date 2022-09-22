/**
 * @file  EntityComponentFactoryCereal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityComponentFactoryCereal.
 *
 */
class EntityComponentFactoryCereal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYCEREAL
public:
    class EntityComponentFactoryCereal& operator=(class EntityComponentFactoryCereal const &) = delete;
    EntityComponentFactoryCereal(class EntityComponentFactoryCereal const &) = delete;
#endif

public:
    /**
     * @hash   -316271732
     * @symbol ??0EntityComponentFactoryCereal@@QEAA@XZ
     */
    MCAPI EntityComponentFactoryCereal();
    /**
     * @hash   928162201
     * @symbol ?serializeComponentDefinitions@EntityComponentFactoryCereal@@QEBAXAEAVDefinitionInstanceGroup@@AEAV?$GenericValue@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@@rapidjson@@AEBVSemVersion@@@Z
     */
    MCAPI void serializeComponentDefinitions(class DefinitionInstanceGroup &, class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> &, class SemVersion const &) const;
    /**
     * @hash   76461656
     * @symbol ?tryGetDefinitionSerializer@EntityComponentFactoryCereal@@QEBAPEAVICerealDefinitionSerializer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class ICerealDefinitionSerializer * tryGetDefinitionSerializer(std::string const &) const;

};