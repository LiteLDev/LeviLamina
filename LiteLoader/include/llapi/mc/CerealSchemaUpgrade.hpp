/**
 * @file  CerealSchemaUpgrade.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class CerealSchemaUpgrade.
 *
 */
class CerealSchemaUpgrade {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALSCHEMAUPGRADE
public:
    class CerealSchemaUpgrade& operator=(class CerealSchemaUpgrade const &) = delete;
    CerealSchemaUpgrade(class CerealSchemaUpgrade const &) = delete;
    CerealSchemaUpgrade() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CerealSchemaUpgrade();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @hash   -237950259
     * @vftbl  2
     * @symbol  ?upgradeToNext\@CerealSchemaUpgrade\@\@UEBA_NAEAV?$GenericDocument\@U?$UTF8\@D\@rapidjson\@\@V?$MemoryPoolAllocator\@VCrtAllocator\@rapidjson\@\@\@2\@VCrtAllocator\@2\@\@rapidjson\@\@\@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;
    /**
     * @hash   -767466162
     * @symbol  ??0CerealSchemaUpgrade\@\@QEAA\@VSemVersion\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const &, std::string const &);
    /**
     * @hash   -1501956087
     * @symbol  ?bindLegacySchema\@CerealSchemaUpgrade\@\@QEAAXAEAVSchemaFactory\@reflection\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void bindLegacySchema(class reflection::SchemaFactory &, std::string const &);
    /**
     * @hash   -1311331556
     * @symbol  ?getTargetVersion\@CerealSchemaUpgrade\@\@QEBAAEBVSemVersion\@\@XZ
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @hash   2117960964
     * @symbol  ?registerLegacySchema\@CerealSchemaUpgrade\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void registerLegacySchema(std::string const &);

};