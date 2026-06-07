#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SessionInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk80d1c0;
    ::ll::UntypedStorage<8, 32> mUnk645e34;
    ::ll::UntypedStorage<8, 32> mUnkdcdfd2;
    ::ll::UntypedStorage<8, 32> mUnkbc1fbb;
    ::ll::UntypedStorage<8, 32> mUnkffff9d;
    ::ll::UntypedStorage<8, 32> mUnkb92fea;
    ::ll::UntypedStorage<8, 16> mUnk296a2f;
    ::ll::UntypedStorage<8, 8>  mUnk519224;
    ::ll::UntypedStorage<8, 8>  mUnk6a042c;
    ::ll::UntypedStorage<4, 8>  mUnkc1616b;
    ::ll::UntypedStorage<8, 32> mUnk221f1b;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SessionInfo();

    MCNAPI SessionInfo(::Bedrock::SessionInfo const&);

    MCNAPI ::std::string const& getBranchId() const;

    MCNAPI ::std::string const& getBuildId() const;

    MCNAPI ::std::string const& getCommitId() const;

    MCNAPI int64 getCrashTimestamp() const;

    MCNAPI ::std::optional<uint> const& getErrorCode() const;

    MCNAPI ::std::string const& getErrorMessage() const;

    MCNAPI ::std::string const& getSessionId() const;

    MCNAPI ::std::map<::std::string, ::std::string>& getTags();

    MCNAPI ::Bedrock::SessionInfo& operator=(::Bedrock::SessionInfo&&);

    MCNAPI ::Bedrock::SessionInfo& operator=(::Bedrock::SessionInfo const&);

    MCNAPI bool operator==(::Bedrock::SessionInfo const& rhs) const;

    MCNAPI ~SessionInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Bedrock::SessionInfo const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
