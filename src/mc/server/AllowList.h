#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/IJsonSerializable.h"

// auto generated forward declare list
// clang-format off
class AllowListEntry;
namespace Json { class Value; }
namespace mce { class UUID; }
// clang-format on

class AllowList : public ::IJsonSerializable {
public:
    // AllowList inner types declare
    // clang-format off
    struct AllowListEntryMatcher;
    // clang-format on

    // AllowList inner types define
    struct AllowListEntryMatcher {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkac9474;
        ::ll::UntypedStorage<8, 32> mUnk2ba5a7;
        // NOLINTEND

    public:
        // prevent constructor by default
        AllowListEntryMatcher& operator=(AllowListEntryMatcher const&);
        AllowListEntryMatcher(AllowListEntryMatcher const&);
        AllowListEntryMatcher();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI AllowListEntryMatcher(::std::string name, ::std::string xuid);

        MCAPI bool operator()(::AllowListEntry& entry);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::std::string name, ::std::string xuid);
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbac7e4;
    ::ll::UntypedStorage<8, 64> mUnk4ff264;
    // NOLINTEND

public:
    // prevent constructor by default
    AllowList& operator=(AllowList const&);
    AllowList(AllowList const&);
    AllowList();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void serialize(::Json::Value& root) /*override*/;

    // vIndex: 2
    virtual void deserialize(::Json::Value& root) /*override*/;

    // vIndex: 0
    virtual ~AllowList() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool addEntry(::AllowListEntry const& entry);

    MCAPI ::std::vector<::AllowListEntry> const& getEntries() const;

    MCAPI bool isAllowed(::mce::UUID const& uuid, ::std::string const& xuid) const;

    MCAPI bool isIgnoringPlayerLimit(::mce::UUID const& uuid, ::std::string const& xuid) const;

    MCAPI bool removeByName(::std::string const& name);

    MCAPI void tryUpdateEntries(::mce::UUID const& uuid, ::std::string const& xuid, ::std::string const& name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $serialize(::Json::Value& root);

    MCAPI void $deserialize(::Json::Value& root);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
