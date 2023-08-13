#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class AllowList : public ::IJsonSerializable {
public:
    // AllowList inner types declare
    // clang-format off
    class AllowListEntryMatcher;
    // clang-format on

    // AllowList inner types define
    class AllowListEntryMatcher {

    public:
        // prevent constructor by default
        AllowListEntryMatcher& operator=(AllowListEntryMatcher const&) = delete;
        AllowListEntryMatcher(AllowListEntryMatcher const&)            = delete;
        AllowListEntryMatcher()                                        = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol
         * ??0AllowListEntryMatcher\@AllowList\@\@QEAA\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
         */
        MCAPI AllowListEntryMatcher(std::string, std::string);
        /**
         * @symbol ??RAllowListEntryMatcher\@AllowList\@\@QEAA_NAEAVAllowListEntry\@\@\@Z
         */
        MCAPI bool operator()(class AllowListEntry&);
        /**
         * @symbol ??1AllowListEntryMatcher\@AllowList\@\@QEAA\@XZ
         */
        MCAPI ~AllowListEntryMatcher();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    AllowList& operator=(AllowList const&) = delete;
    AllowList(AllowList const&)            = delete;
    AllowList()                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?serialize\@AllowList\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void serialize(class Json::Value&);
    /**
     * @vftbl 2
     * @symbol ?deserialize\@AllowList\@\@UEAAXAEAVValue\@Json\@\@\@Z
     */
    virtual void deserialize(class Json::Value&);
    /**
     * @symbol ?addEntry\@AllowList\@\@QEAA_NAEBVAllowListEntry\@\@\@Z
     */
    MCAPI bool addEntry(class AllowListEntry const&);
    /**
     * @symbol
     * ?getEntries\@AllowList\@\@QEBAAEBV?$vector\@VAllowListEntry\@\@V?$allocator\@VAllowListEntry\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class AllowListEntry> const& getEntries() const;
    /**
     * @symbol
     * ?isAllowed\@AllowList\@\@QEBA_NAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isAllowed(class mce::UUID const&, std::string const&) const;
    /**
     * @symbol
     * ?isIgnoringPlayerLimit\@AllowList\@\@QEBA_NAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool isIgnoringPlayerLimit(class mce::UUID const&, std::string const&) const;
    /**
     * @symbol
     * ?removeByName\@AllowList\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool removeByName(std::string const&);
    /**
     * @symbol
     * ?tryUpdateEntries\@AllowList\@\@QEAAXAEBVUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@1\@Z
     */
    MCAPI void tryUpdateEntries(class mce::UUID const&, std::string const&, std::string const&);
    // NOLINTEND
};
