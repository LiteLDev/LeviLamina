#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {

public:
    // prevent constructor by default
    HeaderCollection& operator=(HeaderCollection const&) = delete;

public:
    /**
     * @symbol ??0HeaderCollection\@Http\@Bedrock\@\@QEAA\@AEBV012\@\@Z
     */
    MCAPI HeaderCollection(class Bedrock::Http::HeaderCollection const&); // NOLINT
    /**
     * @symbol ??0HeaderCollection\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI HeaderCollection(); // NOLINT
    /**
     * @symbol
     * ?add\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void add(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?addNoSafetyChecks\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addNoSafetyChecks(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?begin\@HeaderCollection\@Http\@Bedrock\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<
        class std::_List_val<struct std::_List_simple_types<struct std::pair<std::string const, std::string>>>>
    begin() const; // NOLINT
    /**
     * @symbol
     * ?end\@HeaderCollection\@Http\@Bedrock\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<
        class std::_List_val<struct std::_List_simple_types<struct std::pair<std::string const, std::string>>>>
    end() const; // NOLINT
    /**
     * @symbol
     * ?get\@HeaderCollection\@Http\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@\@Z
     */
    MCAPI std::string const& get(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?set\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void set(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?setNoSafetyChecks\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void setNoSafetyChecks(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ??1HeaderCollection\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~HeaderCollection(); // NOLINT

    // protected:
    /**
     * @symbol
     * ?_addHeader\@HeaderCollection\@Http\@Bedrock\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI void _addHeader(std::string const&, std::string const&, bool); // NOLINT

    // private:
    /**
     * @symbol
     * ?_isRestrictedHeader\@HeaderCollection\@Http\@Bedrock\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _isRestrictedHeader(std::string const&); // NOLINT

protected:
private:
};

}; // namespace Bedrock::Http
