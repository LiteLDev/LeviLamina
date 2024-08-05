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
        MCAPI AllowListEntryMatcher(std::string name, std::string xuid);

        MCAPI bool operator()(class AllowListEntry&);

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
    // vIndex: 0
    virtual ~AllowList() = default;

    // vIndex: 1
    virtual void serialize(class Json::Value& root);

    // vIndex: 2
    virtual void deserialize(class Json::Value& root);

    MCAPI bool addEntry(class AllowListEntry const& entry);

    MCAPI std::vector<class AllowListEntry> const& getEntries() const;

    MCAPI bool isAllowed(class mce::UUID const& uuid, std::string const& xuid) const;

    MCAPI bool isIgnoringPlayerLimit(class mce::UUID const& uuid, std::string const& xuid) const;

    MCAPI bool removeByName(std::string const& name);

    MCAPI void tryUpdateEntries(class mce::UUID const& uuid, std::string const& xuid, std::string const& name);

    // NOLINTEND
};
