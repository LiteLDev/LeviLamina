/**
 * @file  EntityComponentFactoryCereal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "cereal.hpp"
#include "EntityComponentFactoryBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EntityComponentFactoryCereal.
 *
 */
class EntityComponentFactoryCereal : public EntityComponentFactoryBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENTITYCOMPONENTFACTORYCEREAL
public:
    class EntityComponentFactoryCereal& operator=(class EntityComponentFactoryCereal const &) = delete;
    EntityComponentFactoryCereal(class EntityComponentFactoryCereal const &) = delete;
    EntityComponentFactoryCereal() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENTITYCOMPONENTFACTORYCEREAL
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EntityComponentFactoryCereal();
#endif
    /**
     * @symbol ??0EntityComponentFactoryCereal\@\@QEAA\@AEAUReflectionCtx\@cereal\@\@\@Z
     */
    MCAPI EntityComponentFactoryCereal(struct cereal::ReflectionCtx &);
    /**
     * @symbol ?cerealContext\@EntityComponentFactoryCereal\@\@QEBAAEBUReflectionCtx\@cereal\@\@XZ
     */
    MCAPI struct cereal::ReflectionCtx const & cerealContext() const;
    /**
     * @symbol ?serializeComponentDefinitions\@EntityComponentFactoryCereal\@\@QEBAXAEAVDefinitionInstanceGroup\@\@AEBV?$GenericValue\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@\@rapidjson\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI void serializeComponentDefinitions(class DefinitionInstanceGroup &, class rapidjson::GenericValue<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>> const &, class SemVersion const &) const;
    /**
     * @symbol ?tryGetDefinitionSerializer\@EntityComponentFactoryCereal\@\@QEBAPEAVICerealDefinitionSerializer\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class ICerealDefinitionSerializer * tryGetDefinitionSerializer(std::string const &) const;

};
