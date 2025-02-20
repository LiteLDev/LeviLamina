#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class ProfanityContext : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>   mUnk23face;
    ::ll::UntypedStorage<1, 1>   mUnk4601cb;
    ::ll::UntypedStorage<1, 1>   mUnk1c694f;
    ::ll::UntypedStorage<4, 4>   mUnk158083;
    ::ll::UntypedStorage<8, 64>  mUnkf65835;
    ::ll::UntypedStorage<8, 64>  mUnk3fc94d;
    ::ll::UntypedStorage<8, 16>  mUnkd86a51;
    ::ll::UntypedStorage<8, 16>  mUnka95379;
    ::ll::UntypedStorage<8, 16>  mUnk81f187;
    ::ll::UntypedStorage<8, 16>  mUnkb2d0ab;
    ::ll::UntypedStorage<8, 16>  mUnk9da163;
    ::ll::UntypedStorage<8, 16>  mUnk9c5e94;
    ::ll::UntypedStorage<8, 128> mUnkbf44b0;
    ::ll::UntypedStorage<4, 4>   mUnk4d642a;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfanityContext& operator=(ProfanityContext const&);
    ProfanityContext(ProfanityContext const&);
    ProfanityContext();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ProfanityContext() /*override*/ = default;

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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
