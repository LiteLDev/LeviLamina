/**
 * @file  FilterGroup.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"
#include "../../FilterTest.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterGroup.
 *
 */
class FilterGroup {

#define AFTER_EXTRA
// Add Member There
public:
enum class CollectionType;

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERGROUP
public:
    class FilterGroup& operator=(class FilterGroup const &) = delete;
    FilterGroup() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~FilterGroup();
    /**
     * @hash   -1204391635
     * @vftbl  1
     * @symbol  ?_createSubgroup\@BiomeFilterGroup\@\@MEBA?AV?$shared_ptr\@VFilterGroup\@\@\@std\@\@W4CollectionType\@FilterGroup\@\@\@Z
     */
    virtual class std::shared_ptr<class FilterGroup> _createSubgroup(enum class FilterGroup::CollectionType) const = 0;
    /**
     * @hash   -1170931108
     * @vftbl  2
     * @symbol  ?_setupContext\@FilterGroup\@\@MEBA_NAEBVFilterTest\@\@AEAUFilterContext\@\@\@Z
     */
    virtual bool _setupContext(class FilterTest const &, struct FilterContext &) const;
    /**
     * @hash   -405338444
     * @vftbl  3
     * @symbol  ?_handleUnknownMember\@FilterGroup\@\@MEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    virtual bool _handleUnknownMember(std::string const &, class Json::Value const &);
    /**
     * @hash   1966710929
     * @symbol  ??0FilterGroup\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI FilterGroup(class FilterGroup const &);
    /**
     * @hash   1519182472
     * @symbol  ?addFilterTest\@FilterGroup\@\@QEAA_NAEBUDefinition\@FilterTest\@\@AEBUFilterInputs\@\@\@Z
     */
    MCAPI bool addFilterTest(struct FilterTest::Definition const &, struct FilterInputs const &);
    /**
     * @hash   1499680774
     * @symbol  ?addFilterTest\@FilterGroup\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUFilterInputs\@\@\@Z
     */
    MCAPI bool addFilterTest(std::string const &, struct FilterInputs const &);
    /**
     * @hash   -1754990464
     * @symbol  ?empty\@FilterGroup\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @hash   286583130
     * @symbol  ?evaluate\@FilterGroup\@\@QEBA_NAEAV?$array\@UFilterContext\@\@$09\@std\@\@\@Z
     */
    MCAPI bool evaluate(class std::array<struct FilterContext, 10> &) const;
    /**
     * @hash   -1848504383
     * @symbol  ?getChildren\@FilterGroup\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VFilterGroup\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VFilterGroup\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class FilterGroup>> const & getChildren() const;
    /**
     * @hash   750404977
     * @symbol  ?getMembers\@FilterGroup\@\@QEBAAEBV?$vector\@V?$shared_ptr\@VFilterTest\@\@\@std\@\@V?$allocator\@V?$shared_ptr\@VFilterTest\@\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<class std::shared_ptr<class FilterTest>> const & getMembers() const;
    /**
     * @hash   -618638215
     * @symbol  ?parse\@FilterGroup\@\@QEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool parse(class Json::Value const &);
    /**
     * @hash   1446740248
     * @symbol  ?serialize\@FilterGroup\@\@QEBAXAEAVValue\@Json\@\@\@Z
     */
    MCAPI void serialize(class Json::Value &) const;

//protected:
    /**
     * @hash   -936023564
     * @symbol  ?_parseFilterInputs\@FilterGroup\@\@IEAA_NAEBVValue\@Json\@\@AEBUDefinition\@FilterTest\@\@AEAUFilterInputs\@\@\@Z
     */
    MCAPI bool _parseFilterInputs(class Json::Value const &, struct FilterTest::Definition const &, struct FilterInputs &);
    /**
     * @hash   -1493644641
     * @symbol  ?_parseFilterParam\@FilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0AEBVValue\@Json\@\@AEBUFilterParamDefinition\@\@AEAVFilterInput\@\@\@Z
     */
    MCAPI bool _parseFilterParam(std::string const &, std::string const &, class Json::Value const &, struct FilterParamDefinition const &, class FilterInput &);
    /**
     * @hash   1014367464
     * @symbol  ?_parseMember\@FilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool _parseMember(std::string const &, class Json::Value const &);
    /**
     * @hash   -936240659
     * @symbol  ?_parseObject\@FilterGroup\@\@IEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI bool _parseObject(std::string const &, class Json::Value const &);
    /**
     * @hash   -861568620
     * @symbol  ?_parseTest\@FilterGroup\@\@IEAA_NAEBVValue\@Json\@\@\@Z
     */
    MCAPI bool _parseTest(class Json::Value const &);

protected:

};