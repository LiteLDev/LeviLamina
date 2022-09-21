/**
 * @file  MC/PropertyComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class PropertyComponent.
 *
 */
class PropertyComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROPERTYCOMPONENT
public:
    class PropertyComponent& operator=(class PropertyComponent const &) = delete;
    PropertyComponent(class PropertyComponent const &) = delete;
    PropertyComponent() = delete;
#endif

public:
    /**
     * @hash   940739722
     * @symbol ??0PropertyComponent@@QEAA@V?$not_null@V?$shared_ptr@$$CBVPropertyGroup@@@std@@@gsl@@AEAVRenderParams@@@Z
     */
    MCAPI PropertyComponent(class gsl::not_null<class std::shared_ptr<class PropertyGroup const>>, class RenderParams &);
    /**
     * @hash   -114500455
     * @symbol ??0PropertyComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI PropertyComponent(class PropertyComponent &&);
    /**
     * @hash   2095468290
     * @symbol ?_setBoolValue@PropertyComponent@@QEAAX_K_N@Z
     */
    MCAPI void _setBoolValue(unsigned __int64, bool);
    /**
     * @hash   -1550602991
     * @symbol ?_setEnumIndexValue@PropertyComponent@@QEAAX_K0@Z
     */
    MCAPI void _setEnumIndexValue(unsigned __int64, unsigned __int64);
    /**
     * @hash   -754739942
     * @symbol ?_setFloatValue@PropertyComponent@@QEAAX_KM@Z
     */
    MCAPI void _setFloatValue(unsigned __int64, float);
    /**
     * @hash   2016951996
     * @symbol ?_setIntValue@PropertyComponent@@QEAAX_KH@Z
     */
    MCAPI void _setIntValue(unsigned __int64, int);
    /**
     * @hash   -60994280
     * @symbol ?addAdditionalSaveData@PropertyComponent@@QEBAXAEAVCompoundTag@@@Z
     */
    MCAPI void addAdditionalSaveData(class CompoundTag &) const;
    /**
     * @hash   -207051862
     * @symbol ?applyPendingChanges@PropertyComponent@@QEAAXAEBV?$unordered_map@_KV?$variant@HM_N_K@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$variant@HM_N_K@std@@@std@@@2@@std@@@Z
     */
    MCAPI void applyPendingChanges(class std::unordered_map<unsigned __int64, class std::variant<int, float, bool, unsigned __int64>, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, class std::variant<int, float, bool, unsigned __int64>>>> const &);
    /**
     * @hash   -290285935
     * @symbol ?getMolangValue@PropertyComponent@@QEBA_N_KAEAUMolangScriptArg@@@Z
     */
    MCAPI bool getMolangValue(unsigned __int64, struct MolangScriptArg &) const;
    /**
     * @hash   -916191472
     * @symbol ?hasProperty@PropertyComponent@@QEBA_N_K@Z
     */
    MCAPI bool hasProperty(unsigned __int64) const;
    /**
     * @hash   1943479476
     * @symbol ??4PropertyComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class PropertyComponent & operator=(class PropertyComponent &&);
    /**
     * @hash   -2047533656
     * @symbol ?readLoadedProperties@PropertyComponent@@QEAAXAEBVCompoundTag@@@Z
     */
    MCAPI void readLoadedProperties(class CompoundTag const &);
    /**
     * @hash   1819963577
     * @symbol ?setAliasProperties@PropertyComponent@@QEAAXAEBV?$unordered_map@VHashedString@@V?$shared_ptr@VTag@@@std@@U?$hash@VHashedString@@@3@U?$equal_to@VHashedString@@@3@V?$allocator@U?$pair@$$CBVHashedString@@V?$shared_ptr@VTag@@@std@@@std@@@3@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@1@Z
     */
    MCAPI void setAliasProperties(class std::unordered_map<class HashedString, class std::shared_ptr<class Tag>, struct std::hash<class HashedString>, struct std::equal_to<class HashedString>, class std::allocator<struct std::pair<class HashedString const, class std::shared_ptr<class Tag>>>> const &, std::string const &, std::string const &);
    /**
     * @hash   20800482
     * @symbol ?updateDirtyProperties@PropertyComponent@@QEAA?AVCompoundTag@@XZ
     */
    MCAPI class CompoundTag updateDirtyProperties();
    /**
     * @hash   97206996
     * @symbol ??1PropertyComponent@@QEAA@XZ
     */
    MCAPI ~PropertyComponent();

};