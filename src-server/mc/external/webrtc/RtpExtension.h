#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpExtension {
public:
    // RtpExtension inner types define
    enum class Filter : int {
        KDiscardEncryptedExtension = 0,
        KPreferEncryptedExtension = 1,
        KRequireEncryptedExtension = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk886741;
    ::ll::UntypedStorage<4, 4> mUnka4ad53;
    ::ll::UntypedStorage<1, 1> mUnkc5ca2a;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpExtension(RtpExtension const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtpExtension();

    MCNAPI RtpExtension(::std::string_view uri, int id);

    MCNAPI RtpExtension(::std::string_view uri, int id, bool encrypt);

    MCNAPI ::std::string ToString() const;

    MCNAPI ::webrtc::RtpExtension& operator=(::webrtc::RtpExtension const&);

    MCNAPI ~RtpExtension();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::webrtc::RtpExtension> const DeduplicateHeaderExtensions(::std::vector<::webrtc::RtpExtension> const& extensions, ::webrtc::RtpExtension::Filter filter);

    MCNAPI static ::webrtc::RtpExtension const* FindHeaderExtensionByUri(::std::vector<::webrtc::RtpExtension> const& extensions, ::std::string_view uri, ::webrtc::RtpExtension::Filter filter);

    MCNAPI static ::webrtc::RtpExtension const* FindHeaderExtensionByUriAndEncryption(::std::vector<::webrtc::RtpExtension> const& extensions, ::std::string_view uri, bool encrypt);

    MCNAPI static bool IsEncryptionSupported(::std::string_view uri);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kAbsSendTimeUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kAbsoluteCaptureTimeUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kDependencyDescriptorUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kEncryptHeaderExtensionsUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kGenericFrameDescriptorUri00();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kMidUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kRepairedRidUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kRidUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kTimestampOffsetUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kTransportSequenceNumberUri();

    MCNAPI static ::std::add_lvalue_reference_t<char const[]> kVideoLayersAllocationUri();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::string_view uri, int id);

    MCNAPI void* $ctor(::std::string_view uri, int id, bool encrypt);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
