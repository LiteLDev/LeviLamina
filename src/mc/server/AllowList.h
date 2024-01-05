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
        AllowListEntryMatcher& operator=(AllowListEntryMatcher const&);
        AllowListEntryMatcher(AllowListEntryMatcher const&);
        AllowListEntryMatcher();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0AllowListEntryMatcher@AllowList@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
        MCAPI AllowListEntryMatcher(std::string name, std::string xuid);

        // symbol: ??RAllowListEntryMatcher@AllowList@@QEAA_NAEAVAllowListEntry@@@Z
        MCAPI bool operator()(class AllowListEntry&);

        // symbol: ??1AllowListEntryMatcher@AllowList@@QEAA@XZ
        MCAPI ~AllowListEntryMatcher();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    AllowList& operator=(AllowList const&);
    AllowList(AllowList const&);
    AllowList();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AllowList@@UEAA@XZ
    virtual ~AllowList() = default;

    // vIndex: 1, symbol: ?serialize@AllowList@@UEAAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value& root);

    // vIndex: 2, symbol: ?deserialize@AllowList@@UEAAXAEAVValue@Json@@@Z
    virtual void deserialize(class Json::Value& root);

    // symbol: ?addEntry@AllowList@@QEAA_NAEBVAllowListEntry@@@Z
    MCAPI bool addEntry(class AllowListEntry const& entry);

    // symbol: ?getEntries@AllowList@@QEBAAEBV?$vector@VAllowListEntry@@V?$allocator@VAllowListEntry@@@std@@@std@@XZ
    MCAPI std::vector<class AllowListEntry> const& getEntries() const;

    // symbol:
    // ?isAllowed@AllowList@@QEBA_NAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isAllowed(class mce::UUID const& uuid, std::string const& xuid) const;

    // symbol:
    // ?isIgnoringPlayerLimit@AllowList@@QEBA_NAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool isIgnoringPlayerLimit(class mce::UUID const& uuid, std::string const& xuid) const;

    // symbol: ?removeByName@AllowList@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool removeByName(std::string const& name);

    // symbol:
    // ?tryUpdateEntries@AllowList@@QEAAXAEBVUUID@mce@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@1@Z
    MCAPI void tryUpdateEntries(class mce::UUID const& uuid, std::string const& xuid, std::string const& name);

    // NOLINTEND
};
