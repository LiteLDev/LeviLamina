#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/LockGuard.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class DenyList {
public:
    // DenyList inner types declare
    // clang-format off
    struct Entry;
    // clang-format on

    // DenyList inner types define
    enum class Duration : int {
        Session = 0,
        OneTime = 1,
        Invalid = 2,
    };

    struct Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk89b913;
        ::ll::UntypedStorage<8, 40> mUnk8e3c22;
        ::ll::UntypedStorage<8, 32> mUnk99d06f;
        ::ll::UntypedStorage<4, 4>  mUnk657815;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI Entry(::mce::UUID const& uuid, ::std::string const& xuid);

        MCNAPI ~Entry();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::mce::UUID const& uuid, ::std::string const& xuid);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkfa0072;
    ::ll::UntypedStorage<8, 80> mUnk3f8199;
    // NOLINTEND

public:
    // prevent constructor by default
    DenyList& operator=(DenyList const&);
    DenyList(DenyList const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI DenyList();

    MCNAPI void addEntry(::DenyList::Entry const& entry);

    MCNAPI ::DenyList::Duration getDuration(::DenyList::Entry const& entry) const;

    MCNAPI ::std::string const& getMessage(::DenyList::Entry const& entry) const;

    MCNAPI bool isBlocked(::DenyList::Entry const& entry) const;

    MCNAPI ~DenyList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
