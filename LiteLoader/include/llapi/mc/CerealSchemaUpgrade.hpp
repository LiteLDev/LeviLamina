/**
 * @file  CerealSchemaUpgrade.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "reflection.hpp"

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
     * @symbol __unk_destructor_0
     */
    virtual ~CerealSchemaUpgrade();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @hash   -337848131
     * @vftbl  2
     * @symbol ?upgradeToNext@CerealSchemaUpgrade@@UEBA_NAEAV?$GenericDocument@U?$UTF8@D@rapidjson@@V?$MemoryPoolAllocator@VCrtAllocator@rapidjson@@@2@VCrtAllocator@2@@rapidjson@@@Z
     */
    virtual bool upgradeToNext(class rapidjson::GenericDocument<struct rapidjson::UTF8<char>, class rapidjson::MemoryPoolAllocator<class rapidjson::CrtAllocator>, class rapidjson::CrtAllocator> &) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   2038791004
     * @symbol ?getPreviousVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getPreviousVersion() const;
    /**
     * @hash   -1637055842
     * @symbol ??0CerealSchemaUpgrade@@QEAA@VSemVersion@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
     */
    MCAPI CerealSchemaUpgrade(class SemVersion, std::string const &, std::string const &);
    /**
     * @hash   160307984
     * @symbol ?bindLegacySchema@CerealSchemaUpgrade@@QEAAXAEAVSchemaFactory@reflection@@@Z
     */
    MCAPI void bindLegacySchema(class reflection::SchemaFactory &);
    /**
     * @hash   2038791004
     * @symbol ?getPreviousVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getPreviousVersion() const;
    /**
     * @hash   748910804
     * @symbol ?getPreviousVersionString@CerealSchemaUpgrade@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getPreviousVersionString() const;
    /**
     * @hash   2022607020
     * @symbol ?getSchemaKey@CerealSchemaUpgrade@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getSchemaKey() const;
    /**
     * @hash   1428238124
     * @symbol ?getTargetVersion@CerealSchemaUpgrade@@QEBAAEBVSemVersion@@XZ
     */
    MCAPI class SemVersion const & getTargetVersion() const;
    /**
     * @hash   -1037313779
     * @symbol ?registerLegacySchema@CerealSchemaUpgrade@@QEAAXXZ
     */
    MCAPI void registerLegacySchema();
    /**
     * @hash   2076446820
     * @symbol ?setPreviousVersion@CerealSchemaUpgrade@@QEAAXAEBVSemVersion@@@Z
     */
    MCAPI void setPreviousVersion(class SemVersion const &);

};