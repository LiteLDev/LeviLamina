#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct RtpExtension {
public:
    // RtpExtension inner types define
    enum class Filter : int {
        KDiscardEncryptedExtension = 0,
        KPreferEncryptedExtension  = 1,
        KRequireEncryptedExtension = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk886741;
    ::ll::UntypedStorage<4, 4>  mUnka4ad53;
    ::ll::UntypedStorage<1, 1>  mUnkc5ca2a;
    // NOLINTEND

public:
    // prevent constructor by default
    RtpExtension(RtpExtension const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RtpExtension();

    MCAPI RtpExtension(::std::string_view, int);

    MCAPI RtpExtension(::std::string_view, int, bool);

    MCAPI ::std::string ToString() const;

    MCAPI ::webrtc::RtpExtension& operator=(::webrtc::RtpExtension const&);

    MCAPI ~RtpExtension();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::webrtc::RtpExtension> const
    DeduplicateHeaderExtensions(::std::vector<::webrtc::RtpExtension> const&, ::webrtc::RtpExtension::Filter);

    MCAPI static ::webrtc::RtpExtension const* FindHeaderExtensionByUri(
        ::std::vector<::webrtc::RtpExtension> const&,
        ::std::string_view,
        ::webrtc::RtpExtension::Filter
    );

    MCAPI static ::webrtc::RtpExtension const*
    FindHeaderExtensionByUriAndEncryption(::std::vector<::webrtc::RtpExtension> const&, ::std::string_view, bool);

    MCAPI static bool IsEncryptionSupported(::std::string_view);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> kAbsSendTimeUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kAbsoluteCaptureTimeUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kDependencyDescriptorUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kEncryptHeaderExtensionsUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kGenericFrameDescriptorUri00();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kMidUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kRepairedRidUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kRidUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kTimestampOffsetUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kTransportSequenceNumberUri();

    MCAPI static ::std::add_lvalue_reference_t<char const[]> kVideoLayersAllocationUri();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::std::string_view, int);

    MCAPI void* $ctor(::std::string_view, int, bool);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
