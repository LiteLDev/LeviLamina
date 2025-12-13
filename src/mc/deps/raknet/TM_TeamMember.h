#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class TM_TeamMember {
public:
    // TM_TeamMember inner types declare
    // clang-format off
    struct RequestedTeam;
    // clang-format on

    // TM_TeamMember inner types define
    struct RequestedTeam {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk56ddf2;
        ::ll::UntypedStorage<4, 4> mUnk7f8cd2;
        ::ll::UntypedStorage<8, 8> mUnkc87d9c;
        ::ll::UntypedStorage<1, 1> mUnka5b4fc;
        ::ll::UntypedStorage<8, 8> mUnkf9e51e;
        // NOLINTEND

    public:
        // prevent constructor by default
        RequestedTeam& operator=(RequestedTeam const&);
        RequestedTeam(RequestedTeam const&);
        RequestedTeam();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk611b3f;
    ::ll::UntypedStorage<8, 8>  mUnk25d0e1;
    ::ll::UntypedStorage<8, 16> mUnkf7d8b1;
    ::ll::UntypedStorage<1, 1>  mUnkc1fb03;
    ::ll::UntypedStorage<8, 16> mUnk4b7d60;
    ::ll::UntypedStorage<4, 4>  mUnkf6b4da;
    ::ll::UntypedStorage<8, 16> mUnkdf4bdd;
    ::ll::UntypedStorage<8, 8>  mUnkad3bd2;
    ::ll::UntypedStorage<4, 4>  mUnkbe7baf;
    ::ll::UntypedStorage<8, 8>  mUnk15589c;
    // NOLINTEND

public:
    // prevent constructor by default
    TM_TeamMember& operator=(TM_TeamMember const&);
    TM_TeamMember(TM_TeamMember const&);
    TM_TeamMember();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TM_TeamMember() = default;
    // NOLINTEND
};

} // namespace RakNet
