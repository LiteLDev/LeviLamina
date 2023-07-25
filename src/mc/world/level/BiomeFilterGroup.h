#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class BiomeFilterGroup : public ::FilterGroup {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BIOMEFILTERGROUP
public:
    BiomeFilterGroup& operator=(BiomeFilterGroup const&) = delete;
    BiomeFilterGroup(BiomeFilterGroup const&)            = delete;
    BiomeFilterGroup()                                   = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_createSubgroup\@BiomeFilterGroup\@\@MEBA?AV?$shared_ptr\@VFilterGroup\@\@\@std\@\@W4CollectionType\@FilterGroup\@\@\@Z
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum class FilterGroup::CollectionType) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BIOMEFILTERGROUP
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BiomeFilterGroup();
#endif
    /**
     * @symbol ?finalizeParsedValue\@BiomeFilterGroup\@\@QEAAXAEAVIWorldRegistriesProvider\@\@\@Z
     */
    MCAPI void finalizeParsedValue(class IWorldRegistriesProvider&);
};
