/**
 * @file  BiomeFilterGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterGroup.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BiomeFilterGroup.
 *
 */
class BiomeFilterGroup : public FilterGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEFILTERGROUP
public:
    class BiomeFilterGroup& operator=(class BiomeFilterGroup const &) = delete;
    BiomeFilterGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BiomeFilterGroup();
    /**
     * @hash   1343084802
     * @vftbl  1
     * @symbol ?_createSubgroup@BiomeFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum FilterGroup::CollectionType) const;
    /**
     * @hash   -421388207
     * @symbol ??0BiomeFilterGroup@@QEAA@AEBV0@@Z
     */
    MCAPI BiomeFilterGroup(class BiomeFilterGroup const &);
    /**
     * @hash   -1935751414
     * @symbol ?finalizeParsedValue@BiomeFilterGroup@@QEAAXAEAVIWorldRegistriesProvider@@@Z
     */
    MCAPI void finalizeParsedValue(class IWorldRegistriesProvider &);

};