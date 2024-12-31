#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/util/ProfanityFilterContext.h"

class UIProfanityContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk7bc70e;
    ::ll::UntypedStorage<1, 1>   mUnk2ed6ac;
    ::ll::UntypedStorage<1, 1>   mUnk8dfce8;
    ::ll::UntypedStorage<4, 4>   mUnka3377f;
    ::ll::UntypedStorage<8, 64>  mUnkbf5c8e;
    ::ll::UntypedStorage<8, 64>  mUnk1dc5ee;
    ::ll::UntypedStorage<8, 16>  mUnkf94d7a;
    ::ll::UntypedStorage<8, 16>  mUnk3023f9;
    ::ll::UntypedStorage<8, 16>  mUnkcd6c80;
    ::ll::UntypedStorage<8, 128> mUnk4e40a7;
    // NOLINTEND

public:
    // prevent constructor by default
    UIProfanityContext& operator=(UIProfanityContext const&);
    UIProfanityContext(UIProfanityContext const&);
    UIProfanityContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UIProfanityContext() /*override*/ = default;

    // vIndex: 1
    virtual void handleLocalFilterToggle(bool);

    // vIndex: 2
    virtual void handleRemoteFilterToggle(bool);

    // vIndex: 3
    virtual void handlePlayerFilterToggle(bool);

    // vIndex: 4
    virtual ::std::string _doMaskProfanity(::std::string const&) const;

    // vIndex: 5
    virtual bool _doFindProfanity(::std::string const&) const;

    // vIndex: 6
    virtual void _fireEventProfanityFilter() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string filterProfanityFromString(
        ::ProfanityFilterContext stringContext,
        ::std::string const&     str,
        bool                     allowFilterOverride
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
