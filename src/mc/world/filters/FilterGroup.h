#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/filters/FilterTest.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class FilterGroup {
public:
    // FilterGroup inner types define
    enum class CollectionType {};

public:
    // prevent constructor by default
    FilterGroup& operator=(FilterGroup const&);
    FilterGroup();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FilterGroup@@UEAA@XZ
    virtual ~FilterGroup() = default;

    // vIndex: 1, symbol:
    // ?_createSubgroup@ActorFilterGroup@@MEBA?AV?$shared_ptr@VFilterGroup@@@std@@W4CollectionType@FilterGroup@@@Z
    virtual std::shared_ptr<class FilterGroup> _createSubgroup(::FilterGroup::CollectionType type) const = 0;

    // vIndex: 2, symbol: ?_setupContext@FilterGroup@@MEBA_NAEBVFilterTest@@AEAUFilterContext@@@Z
    virtual bool _setupContext(class FilterTest const& test, struct FilterContext& context) const;

    // vIndex: 3, symbol:
    // ?_handleUnknownMember@FilterGroup@@MEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    virtual bool _handleUnknownMember(std::string const&, class Json::Value const&);

    // symbol: ??0FilterGroup@@QEAA@AEBV0@@Z
    MCAPI FilterGroup(class FilterGroup const&);

    // symbol:
    // ?addFilterTest@FilterGroup@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBUFilterInputs@@@Z
    MCAPI bool addFilterTest(std::string const& filterName, struct FilterInputs const& inputs);

    // symbol: ?addFilterTest@FilterGroup@@QEAA_NAEBUDefinition@FilterTest@@AEBUFilterInputs@@@Z
    MCAPI bool addFilterTest(struct FilterTest::Definition const& filterDef, struct FilterInputs const& inputs);

    // symbol: ?empty@FilterGroup@@QEBA_NXZ
    MCAPI bool empty() const;

    // symbol: ?evaluate@FilterGroup@@QEBA_NAEAV?$array@UFilterContext@@$09@std@@@Z
    MCAPI bool evaluate(std::array<struct FilterContext, 10>& contextSet) const;

    // symbol:
    // ?getChildren@FilterGroup@@QEBAAEBV?$vector@V?$shared_ptr@VFilterGroup@@@std@@V?$allocator@V?$shared_ptr@VFilterGroup@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class FilterGroup>> const& getChildren() const;

    // symbol:
    // ?getMembers@FilterGroup@@QEBAAEBV?$vector@V?$shared_ptr@VFilterTest@@@std@@V?$allocator@V?$shared_ptr@VFilterTest@@@std@@@2@@std@@XZ
    MCAPI std::vector<std::shared_ptr<class FilterTest>> const& getMembers() const;

    // symbol: ?parse@FilterGroup@@QEAA_NAEBVValue@Json@@@Z
    MCAPI bool parse(class Json::Value const& jsonVal);

    // symbol: ?serialize@FilterGroup@@QEBAXAEAVValue@Json@@@Z
    MCAPI void serialize(class Json::Value& jsonVal) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?_parseFilterInputs@FilterGroup@@IEAA_NAEBVValue@Json@@AEBUDefinition@FilterTest@@AEAUFilterInputs@@@Z
    MCAPI bool _parseFilterInputs(
        class Json::Value const&             jsonVal,
        struct FilterTest::Definition const& filterDef,
        struct FilterInputs&                 inputs
    );

    // symbol:
    // ?_parseFilterParam@FilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0AEBVValue@Json@@AEBUFilterParamDefinition@@AEAVFilterInput@@@Z
    MCAPI bool _parseFilterParam(
        std::string const&                  filter,
        std::string const&                  member,
        class Json::Value const&            jsonVal,
        struct FilterParamDefinition const& paramDef,
        class FilterInput&                  input
    );

    // symbol:
    // ?_parseMember@FilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI bool _parseMember(std::string const& name, class Json::Value const& jsonVal);

    // symbol:
    // ?_parseObject@FilterGroup@@IEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVValue@Json@@@Z
    MCAPI bool _parseObject(std::string const& name, class Json::Value const& jsonVal);

    // symbol: ?_parseTest@FilterGroup@@IEAA_NAEBVValue@Json@@@Z
    MCAPI bool _parseTest(class Json::Value const& jsonVal);

    // NOLINTEND
};
