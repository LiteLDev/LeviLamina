/**
 * @file  VolumeDefinitionGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class VolumeDefinitionGroup.
 *
 */
class VolumeDefinitionGroup {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VOLUMEDEFINITIONGROUP
public:
    class VolumeDefinitionGroup& operator=(class VolumeDefinitionGroup const &) = delete;
    VolumeDefinitionGroup(class VolumeDefinitionGroup const &) = delete;
    VolumeDefinitionGroup() = delete;
#endif

public:
    /**
     * @hash   22107895
     * @symbol ??0VolumeDefinitionGroup@@QEAA@V?$not_null@V?$NonOwnerPointer@$$CBVVolumeComponentFactory@@@Bedrock@@@gsl@@@Z
     */
    MCAPI VolumeDefinitionGroup(class gsl::not_null<class Bedrock::NonOwnerPointer<class VolumeComponentFactory const>>);
    /**
     * @hash   -2119747149
     * @symbol ?loadDefinitions@VolumeDefinitionGroup@@QEAAXAEBVResourcePackManager@@_N@Z
     */
    MCAPI void loadDefinitions(class ResourcePackManager const &, bool);
    /**
     * @hash   1343252072
     * @symbol ?tryGetVolumeDefinition@VolumeDefinitionGroup@@QEBAPEBUVolumeDefinition@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI struct VolumeDefinition const * tryGetVolumeDefinition(std::string const &) const;
    /**
     * @hash   -888385938
     * @symbol ??1VolumeDefinitionGroup@@QEAA@XZ
     */
    MCAPI ~VolumeDefinitionGroup();
    /**
     * @hash   -2022074987
     * @symbol ?bindVolumeDefinitions@VolumeDefinitionGroup@@SAXXZ
     */
    MCAPI static void bindVolumeDefinitions();

//private:
    /**
     * @hash   32252207
     * @symbol ?_parseAndRegisterDefinition@VolumeDefinitionGroup@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVSemVersion@@0@Z
     */
    MCAPI bool _parseAndRegisterDefinition(std::string const &, class SemVersion const &, std::string const &);
    /**
     * @hash   -1683528875
     * @symbol ?_registerDefinition@VolumeDefinitionGroup@@AEAA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@AEBVSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI bool _registerDefinition(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &, class SemVersion const &, std::string const &);

private:

};