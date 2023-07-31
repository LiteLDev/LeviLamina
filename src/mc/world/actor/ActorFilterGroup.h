#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterGroup.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ActorFilterGroup : public ::FilterGroup {
public:
    // ActorFilterGroup inner types declare
    // clang-format off
    struct LegacyMapping;
    // clang-format on

    // ActorFilterGroup inner types define
    struct LegacyMapping {

    public:
        // prevent constructor by default
        LegacyMapping& operator=(LegacyMapping const&) = delete;
        LegacyMapping(LegacyMapping const&)            = delete;
        LegacyMapping()                                = delete;
    };

public:
    // prevent constructor by default
    ActorFilterGroup(ActorFilterGroup const&) = delete;
    ActorFilterGroup()                        = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?_createSubgroup\@ActorFilterGroup\@\@MEBA?AV?$shared_ptr\@VFilterGroup\@\@\@std\@\@W4CollectionType\@FilterGroup\@\@\@Z
     */
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(enum class FilterGroup::CollectionType) const;
    /**
     * @vftbl 3
     * @symbol
     * ?_handleUnknownMember\@ActorFilterGroup\@\@MEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    virtual bool _handleUnknownMember(std::string const&, class Json::Value const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ACTORFILTERGROUP
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ActorFilterGroup();
#endif
    /**
     * @symbol ?evaluateActor\@ActorFilterGroup\@\@QEBA_NAEBVActor\@\@AEBVVariantParameterList\@\@\@Z
     */
    MCAPI bool evaluateActor(class Actor const&, class VariantParameterList const&) const;
    /**
     * @symbol ??4ActorFilterGroup\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup&&);
    /**
     * @symbol ??4ActorFilterGroup\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup const&);
    /**
     * @symbol ?initialize\@ActorFilterGroup\@\@SAXXZ
     */
    MCAPI static void initialize();
    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_addLegacyFilter\@ActorFilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBULegacyMapping\@1\@AEBVFilterInput\@\@\@Z
     */
    MCAPI bool
    _addLegacyFilter(std::string const&, struct ActorFilterGroup::LegacyMapping const&, class FilterInput const&);
    /**
     * @symbol
     * ?_processLegacyArray\@ActorFilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@AEBULegacyMapping\@1\@\@Z
     */
    MCAPI bool
    _processLegacyArray(std::string const&, class Json::Value const&, struct ActorFilterGroup::LegacyMapping const&);
    /**
     * @symbol
     * ?_processLegacyMember\@ActorFilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@AEBULegacyMapping\@1\@\@Z
     */
    MCAPI bool
    _processLegacyMember(std::string const&, class Json::Value const&, struct ActorFilterGroup::LegacyMapping const&);
    // NOLINTEND
};
