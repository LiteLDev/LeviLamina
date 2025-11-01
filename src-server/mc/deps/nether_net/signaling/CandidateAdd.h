#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class CandidateAdd {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkd112e8;
    ::ll::UntypedStorage<8, 32> mUnk94eff9;
    // NOLINTEND

public:
    // prevent constructor by default
    CandidateAdd& operator=(CandidateAdd const&);
    CandidateAdd(CandidateAdd const&);
    CandidateAdd();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string ToString() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::NetherNet::CandidateAdd>
    TryParse(::std::array<::std::string_view, 3> const& tokens);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string_view const& kIdentifier();
    // NOLINTEND
};

} // namespace NetherNet
