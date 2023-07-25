#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class HeaderCollection {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_HEADERCOLLECTION
public:
    HeaderCollection& operator=(HeaderCollection const&) = delete;
#endif

public:
    /**
     * @symbol ??0HeaderCollection\@Http\@Bedrock\@\@QEAA\@AEBV012\@\@Z
     */
    MCAPI HeaderCollection(class Bedrock::Http::HeaderCollection const&);
    /**
     * @symbol ??0HeaderCollection\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI HeaderCollection();
    /**
     * @symbol
     * ?add\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void add(std::string const&, std::string const&);
    /**
     * @symbol
     * ?addNoSafetyChecks\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addNoSafetyChecks(std::string const&, std::string const&);
    /**
     * @symbol
     * ?begin\@HeaderCollection\@Http\@Bedrock\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<
        class std::_List_val<struct std::_List_simple_types<struct std::pair<std::string const, std::string>>>>
    begin() const;
    /**
     * @symbol
     * ?end\@HeaderCollection\@Http\@Bedrock\@\@QEBA?AV?$_List_const_iterator\@V?$_List_val\@U?$_List_simple_types\@U?$pair\@$$CBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V12\@\@std\@\@\@std\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI class std::_List_const_iterator<
        class std::_List_val<struct std::_List_simple_types<struct std::pair<std::string const, std::string>>>>
    end() const;
    /**
     * @symbol
     * ?get\@HeaderCollection\@Http\@Bedrock\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV45\@\@Z
     */
    MCAPI std::string const& get(std::string const&) const;
    /**
     * @symbol
     * ?set\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void set(std::string const&, std::string const&);
    /**
     * @symbol
     * ?setNoSafetyChecks\@HeaderCollection\@Http\@Bedrock\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void setNoSafetyChecks(std::string const&, std::string const&);
    /**
     * @symbol ??1HeaderCollection\@Http\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~HeaderCollection();

    // protected:
    /**
     * @symbol
     * ?_addHeader\@HeaderCollection\@Http\@Bedrock\@\@IEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0_N\@Z
     */
    MCAPI void _addHeader(std::string const&, std::string const&, bool);

    // private:
    /**
     * @symbol
     * ?_isRestrictedHeader\@HeaderCollection\@Http\@Bedrock\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _isRestrictedHeader(std::string const&);

protected:
private:
};

}; // namespace Bedrock::Http
