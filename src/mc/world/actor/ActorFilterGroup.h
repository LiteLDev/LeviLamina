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
        LegacyMapping& operator=(LegacyMapping const&);
        LegacyMapping(LegacyMapping const&);
        LegacyMapping();
    };

public:
    // prevent constructor by default
    ActorFilterGroup(ActorFilterGroup const&);
    ActorFilterGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActorFilterGroup@@UEAA@XZ
    virtual ~ActorFilterGroup();

    // vIndex: 1, symbol:
    // ?_createSubgroup@ActorFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const;

    // vIndex: 3, symbol:
    // ?_handleUnknownMember@ActorFilterGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    virtual bool _handleUnknownMember(std::string const& name, class Json::Value const& jsonVal);

    // symbol: ?evaluateActor@ActorFilterGroup@@QEBA_NAEBVActor@@AEBVVariantParameterList@@@Z
    MCAPI bool evaluateActor(class Actor const& e, class VariantParameterList const& params) const;

    // symbol: ??4ActorFilterGroup@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup&&);

    // symbol: ??4ActorFilterGroup@@QEAAAEAV0@AEBV0@@Z
    MCAPI class ActorFilterGroup& operator=(class ActorFilterGroup const&);

    // symbol: ?initialize@ActorFilterGroup@@SAXXZ
    MCAPI static void initialize();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?_addLegacyFilter@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBULegacyMapping@1@AEBVFilterInput@@@Z
    MCAPI bool _addLegacyFilter(
        std::string const&                            name,
        struct ActorFilterGroup::LegacyMapping const& legacy,
        class FilterInput const&                      filterInput
    );

    // symbol:
    // ?_processLegacyArray@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBULegacyMapping@1@@Z
    MCAPI bool _processLegacyArray(
        std::string const&                            name,
        class Json::Value const&                      jsonVal,
        struct ActorFilterGroup::LegacyMapping const& legacy
    );

    // symbol:
    // ?_processLegacyMember@ActorFilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@AEBULegacyMapping@1@@Z
    MCAPI bool _processLegacyMember(
        std::string const&                            name,
        class Json::Value const&                      jsonVal,
        struct ActorFilterGroup::LegacyMapping const& legacy
    );

    // NOLINTEND
};
