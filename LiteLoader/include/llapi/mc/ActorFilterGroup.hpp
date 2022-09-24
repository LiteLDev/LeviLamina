/**
 * @file  ActorFilterGroup.hpp
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
 * @brief MC class ActorFilterGroup.
 *
 */
class ActorFilterGroup : public FilterGroup {

#define AFTER_EXTRA
// Add Member There
public:
struct LegacyMapping {
    LegacyMapping() = delete;
    LegacyMapping(LegacyMapping const&) = delete;
    LegacyMapping(LegacyMapping const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORFILTERGROUP
public:
    ActorFilterGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~ActorFilterGroup();
    /**
     * @hash   1086764477
     * @vftbl  1
     * @symbol ?_createSubgroup@ActorFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum FilterGroup::CollectionType) const;
    /**
     * @hash   966481401
     * @vftbl  3
     * @symbol ?_handleUnknownMember@ActorFilterGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
     */
    virtual bool _handleUnknownMember(std::string const &, class Json::Value const &);
    /**
     * @hash   438696321
     * @symbol ??0ActorFilterGroup@@QEAA@AEBV0@@Z
     */
    MCAPI ActorFilterGroup(class ActorFilterGroup const &);
    /**
     * @hash   -1487960490
     * @symbol ?evaluateActor@ActorFilterGroup@@QEBA_NAEBVActor@@AEBVVariantParameterList@@@Z
     */
    MCAPI bool evaluateActor(class Actor const &, class VariantParameterList const &) const;
    /**
     * @hash   -2106995804
     * @symbol ??4ActorFilterGroup@@QEAAAEAV0@AEBV0@@Z
     */
    MCAPI class ActorFilterGroup & operator=(class ActorFilterGroup const &);
    /**
     * @hash   -1383133405
     * @symbol ?initialize@ActorFilterGroup@@SAXXZ
     */
    MCAPI static void initialize();

//protected:
    /**
     * @hash   -1500745444
     * @symbol ?_addLegacyFilter@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBULegacyMapping@1@AEBVFilterInput@@@Z
     */
    MCAPI bool _addLegacyFilter(std::string const &, struct ActorFilterGroup::LegacyMapping const &, class FilterInput const &);
    /**
     * @hash   694732106
     * @symbol ?_processLegacyArray@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBULegacyMapping@1@@Z
     */
    MCAPI bool _processLegacyArray(std::string const &, class Json::Value const &, struct ActorFilterGroup::LegacyMapping const &);
    /**
     * @hash   -1717231497
     * @symbol ?_processLegacyMember@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBULegacyMapping@1@@Z
     */
    MCAPI bool _processLegacyMember(std::string const &, class Json::Value const &, struct ActorFilterGroup::LegacyMapping const &);

protected:

};