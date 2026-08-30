#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/MessageDigest.h"

namespace webrtc {

class OpenSSLDigest : public ::webrtc::MessageDigest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk13d84c;
    ::ll::UntypedStorage<8, 8> mUnk266f9d;
    // NOLINTEND

public:
    // prevent constructor by default
    OpenSSLDigest& operator=(OpenSSLDigest const&);
    OpenSSLDigest(OpenSSLDigest const&);
    OpenSSLDigest();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~OpenSSLDigest() /*override*/ = default;

    virtual uint64 Size() const /*override*/;

    virtual void Update(void const* buf, uint64 len) /*override*/;

    virtual uint64 Finish(void* buf, uint64 len) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit OpenSSLDigest(::std::string_view algorithm);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool GetDigestEVP(::std::string_view algorithm, ::evp_md_st const** mdp);

    MCNAPI static bool GetDigestSize(::std::string_view algorithm, uint64* length);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string_view algorithm);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI uint64 $Size() const;

    MCNAPI void $Update(void const* buf, uint64 len);

    MCNAPI uint64 $Finish(void* buf, uint64 len);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
