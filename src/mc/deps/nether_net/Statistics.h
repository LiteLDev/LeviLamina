#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
namespace NetherNet { class PeerConnectionObserver; }
// clang-format on

namespace NetherNet {

class Statistics {
public:
    // Statistics inner types declare
    // clang-format off
    struct Snapshot;
    // clang-format on

    // Statistics inner types define
    struct Snapshot {
    public:
        // Snapshot inner types declare
        // clang-format off
        struct CandidateInfo;
        struct CandidatePairInfo;
        struct Error;
        // clang-format on

        // Snapshot inner types define
        struct CandidateInfo {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnk1da984;
            ::ll::UntypedStorage<8, 32> mUnk72a20a;
            ::ll::UntypedStorage<8, 32> mUnk9e82e7;
            ::ll::UntypedStorage<8, 32> mUnk26c7c4;
            // NOLINTEND

        public:
            // prevent constructor by default
            CandidateInfo& operator=(CandidateInfo const&);
            CandidateInfo(CandidateInfo const&);
            CandidateInfo();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::NetherNet::Statistics::Snapshot::CandidateInfo&
            operator=(::NetherNet::Statistics::Snapshot::CandidateInfo&&);

            MCNAPI ~CandidateInfo();
            // NOLINTEND

        public:
            // destructor thunk
            // NOLINTBEGIN
            MCNAPI void $dtor();
            // NOLINTEND
        };

        struct CandidatePairInfo {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 32> mUnkecd324;
            ::ll::UntypedStorage<8, 32> mUnka0240a;
            ::ll::UntypedStorage<8, 24> mUnkc65c79;
            ::ll::UntypedStorage<8, 8>  mUnk9cf83a;
            ::ll::UntypedStorage<8, 8>  mUnkf780a2;
            ::ll::UntypedStorage<8, 8>  mUnk51d3ea;
            ::ll::UntypedStorage<8, 8>  mUnkfe4c93;
            ::ll::UntypedStorage<8, 8>  mUnk3df295;
            ::ll::UntypedStorage<4, 4>  mUnkbfc03b;
            ::ll::UntypedStorage<8, 8>  mUnk29fa9b;
            ::ll::UntypedStorage<8, 8>  mUnk1c379a;
            ::ll::UntypedStorage<4, 4>  mUnk5f1714;
            ::ll::UntypedStorage<8, 8>  mUnkc27c2b;
            ::ll::UntypedStorage<8, 8>  mUnkf48383;
            ::ll::UntypedStorage<4, 4>  mUnkb3ec4f;
            ::ll::UntypedStorage<8, 8>  mUnkf708bb;
            ::ll::UntypedStorage<8, 8>  mUnkffaa5c;
            ::ll::UntypedStorage<4, 4>  mUnk843055;
            ::ll::UntypedStorage<8, 8>  mUnk24f73f;
            ::ll::UntypedStorage<4, 4>  mUnka45791;
            ::ll::UntypedStorage<4, 4>  mUnk83582e;
            // NOLINTEND

        public:
            // prevent constructor by default
            CandidatePairInfo& operator=(CandidatePairInfo const&);
            CandidatePairInfo(CandidatePairInfo const&);
            CandidatePairInfo();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::NetherNet::Statistics::Snapshot::CandidatePairInfo&
            operator=(::NetherNet::Statistics::Snapshot::CandidatePairInfo&&);

            MCNAPI ::Json::Value toJson() const;
            // NOLINTEND
        };

        struct Error {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<8, 8>  mUnkecf3e0;
            ::ll::UntypedStorage<8, 32> mUnk1a61f0;
            ::ll::UntypedStorage<4, 4>  mUnk9f98c7;
            ::ll::UntypedStorage<8, 32> mUnk73b258;
            ::ll::UntypedStorage<4, 4>  mUnkbf3ab7;
            ::ll::UntypedStorage<8, 32> mUnk863119;
            // NOLINTEND

        public:
            // prevent constructor by default
            Error& operator=(Error const&);
            Error(Error const&);
            Error();

        public:
            // member functions
            // NOLINTBEGIN
            MCNAPI ::Json::Value toJson() const;

            MCNAPI ~Error();
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
        ::ll::UntypedStorage<8, 8>  mUnkf0a43b;
        ::ll::UntypedStorage<8, 48> mUnk6455ae;
        ::ll::UntypedStorage<8, 48> mUnkbd8162;
        ::ll::UntypedStorage<8, 48> mUnkafd951;
        ::ll::UntypedStorage<8, 32> mUnkc4514a;
        ::ll::UntypedStorage<8, 8>  mUnk513830;
        ::ll::UntypedStorage<8, 24> mUnk629ac1;
        // NOLINTEND

    public:
        // prevent constructor by default
        Snapshot& operator=(Snapshot const&);
        Snapshot(Snapshot const&);
        Snapshot();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::Json::Value summarize() const;

        MCNAPI ~Snapshot();
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
    ::ll::UntypedStorage<8, 296> mUnk34ba9e;
    ::ll::UntypedStorage<8, 8>   mUnk51aac8;
    ::ll::UntypedStorage<8, 16>  mUnkb3c95c;
    // NOLINTEND

public:
    // prevent constructor by default
    Statistics& operator=(Statistics const&);
    Statistics(Statistics const&);
    Statistics();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit Statistics(::NetherNet::PeerConnectionObserver& peerObserver);

    MCNAPI void _onIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  errorCode,
        ::std::string const& errorMessage
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::PeerConnectionObserver& peerObserver);
    // NOLINTEND
};

} // namespace NetherNet
